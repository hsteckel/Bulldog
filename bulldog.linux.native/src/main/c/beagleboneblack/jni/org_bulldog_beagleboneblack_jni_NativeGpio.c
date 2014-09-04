/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "../BBBIOlib/BBBiolib.h"

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    setup
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_setup
  (JNIEnv * env, jclass clazz) {
	int ret = iolib_init();
	if(ret < 0) {
		return JNI_FALSE;
	}

	return JNI_TRUE;
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    teardown
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_teardown
  (JNIEnv * env, jclass clazz) {
	int ret = iolib_free();
	if(ret < 0) {
		return JNI_FALSE;
	}

	return JNI_TRUE;
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    pinMode
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_pinMode
  (JNIEnv * env, jclass clazz, jint port, jint pin, jint direction) {

	iolib_setdir(port, pin, direction);
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    digitalRead
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_digitalRead
  (JNIEnv * env, jclass clazz, jint port, jint pin) {
	if(is_high(port, pin)) {
		return 1;
	}

	return 0;
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    digitalWrite
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_digitalWrite
  (JNIEnv * env, jclass clazz, jint port, jint pin, jint val) {
	if(val == 1) {
		pin_high(port, pin);
	} else {
		pin_low(port, pin);
	}
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    digitalWrite
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_debouncePin
  (JNIEnv * env, jclass clazz, jint port, jint pin, jint ms) {
	if(ms == -1) {
		BBBIO_sys_Disable_Debouncing(port, pin, 0);
	} else {
		BBBIO_sys_Enable_Debouncing(port, pin, ms);
	}
}

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeGpio
 * Method:    enableGpio
 * Signature: V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativeGpio_enableGpio
  (JNIEnv * env, jclass clazz) {
	BBBIO_sys_Enable_GPIO(BBBIO_GPIO0);
	BBBIO_sys_Enable_GPIO(BBBIO_GPIO1);
	BBBIO_sys_Enable_GPIO(BBBIO_GPIO2);
	BBBIO_sys_Enable_GPIO(BBBIO_GPIO3);
}
