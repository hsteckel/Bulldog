#include <fcntl.h>
#include <fcntl.h>
#include <linux/i2c-dev.h>
#include <string.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <unistd.h>

#include "bulldogI2c.h"
#include "bulldog.h"

unsigned char i2cRead(int fileDescriptor) {
	char buffer;
	if(read(fileDescriptor, &buffer, 1) < 0) {
		errorMessage("read failed: %s", strerror(errno));
	}
	return buffer;
}


int i2cWrite(int fileDescriptor, unsigned char data) {
	return write(fileDescriptor, &data, 1);
}

int i2cWriteBuffer(int fileDescriptor, char* data) {
	return write(fileDescriptor, data, strlen(data));
}


int i2cSelectSlave(int fd, int slaveAddress) {
  if (ioctl (fd, I2C_SLAVE, slaveAddress) < 0) {
	  return -1 ;
  }

  return fd;
}

int i2cOpen(char* busDevice) {
  int fd;
  if ((fd = open (busDevice, O_RDWR)) < 0) {
	  errorMessage("read failed: %s", strerror(errno));
	  return -1 ;
  }

  return fd;
}

int i2cClose(int fileDescriptor) {
	return close(fileDescriptor);
}