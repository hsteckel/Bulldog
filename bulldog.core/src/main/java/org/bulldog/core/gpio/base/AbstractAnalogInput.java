package org.bulldog.core.gpio.base;

import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;

import org.bulldog.core.gpio.AnalogInput;
import org.bulldog.core.gpio.Pin;
import org.bulldog.core.gpio.event.ThresholdListener;


public abstract class AbstractAnalogInput extends AbstractPinFeature implements AnalogInput {
	
	private static final String NAME_FORMAT = "Analog Input on Pin %s";
	
	private boolean blockingPin = false;
	private ScheduledFuture<?> future;
	private final ScheduledExecutorService scheduler =  Executors.newScheduledThreadPool(1);
	
	public AbstractAnalogInput(Pin pin) {
		super(pin);
	}

	public String getName() {
		return String.format(NAME_FORMAT, getPin().getName());
	}
	
	public abstract double readValue();
	
	public abstract double[] sample(int amountSamples);
	
	public abstract double[] sample(double frequency, int amountSamples);
	
	public void startMonitor(int periodMicroSeconds, final ThresholdListener listener) {
		if(listener == null) {
			throw new IllegalArgumentException();
		}
		
		setBlocking(true);
		future = scheduler.scheduleAtFixedRate(new Runnable() {
			public void run() {
				double[] samples = sample(10);
				for(int i = 0; i < samples.length; i++) {
					if(samples[i] >= listener.getThreshold()) {
						
					}
				}
			}
		},
        0,
        periodMicroSeconds,
        TimeUnit.MICROSECONDS);
	}
	
	public void stopMonitor() {
		future.cancel(true);
		scheduler.shutdown();
		setBlocking(false);
	}
	
	protected void setBlocking(boolean blocking) {
		this.blockingPin = blocking;
	}
	
	public boolean isBlocking() {
		return blockingPin;
	}
}