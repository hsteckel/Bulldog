/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_bulldog_beagleboneblack_jni_NativeEpoll */

#ifndef _Included_org_bulldog_beagleboneblack_jni_NativeEpoll
#define _Included_org_bulldog_beagleboneblack_jni_NativeEpoll
#ifdef __cplusplus
extern "C" {
#endif
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLERR
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLERR 8L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLHUP
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLHUP 16L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLNVAL
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLNVAL 32L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLIN
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLIN 1L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLPRI
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLPRI 2L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLOUT
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLOUT 4L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLRDNORM
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLRDNORM 64L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLWRNORM
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLWRNORM 4L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLRDBAND
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLRDBAND 128L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLWRBAND
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLWRBAND 256L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_POLLNORM
#define org_bulldog_beagleboneblack_jni_NativeEpoll_POLLNORM 64L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_EPOLL_CTL_ADD
#define org_bulldog_beagleboneblack_jni_NativeEpoll_EPOLL_CTL_ADD 1L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_EPOLL_CTL_DEL
#define org_bulldog_beagleboneblack_jni_NativeEpoll_EPOLL_CTL_DEL 2L
#undef org_bulldog_beagleboneblack_jni_NativeEpoll_EPOLL_CTL_MOD
#define org_bulldog_beagleboneblack_jni_NativeEpoll_EPOLL_CTL_MOD 3L
/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeEpoll
 * Method:    epollCreate
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeEpoll_epollCreate
  (JNIEnv *, jclass);

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeEpoll
 * Method:    addFile
 * Signature: (IILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_org_bulldog_beagleboneblack_jni_NativeEpoll_addFile
  (JNIEnv *, jclass, jint, jint, jstring, jint);

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeEpoll
 * Method:    waitForInterrupt
 * Signature: (I)[Lorg/bulldog/beagleboneblack/jni/NativePollResult;
 */
JNIEXPORT jobjectArray JNICALL Java_org_bulldog_beagleboneblack_jni_NativeEpoll_waitForInterrupt
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeEpoll
 * Method:    stopWait
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativeEpoll_stopWait
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_bulldog_beagleboneblack_jni_NativeEpoll
 * Method:    shutdown
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_bulldog_beagleboneblack_jni_NativeEpoll_shutdown
  (JNIEnv *, jclass, jint);


#ifdef __cplusplus
}
#endif
#endif