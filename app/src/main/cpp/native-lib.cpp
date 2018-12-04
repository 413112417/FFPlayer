#include <jni.h>
#include <string>
extern "C" {
#include <libavcodec/avcodec.h>

}
extern "C"
JNIEXPORT jstring

JNICALL
Java_pers_xjh_ffplayer_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    hello += avcodec_configuration();
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_pers_xjh_ffplayer_MainActivity_open(JNIEnv *env, jobject instance, jstring url_) {
    const char *url = env->GetStringUTFChars(url_, 0);

    // TODO


    env->ReleaseStringUTFChars(url_, url);

    return env->NewStringUTF(returnValue);
}