#include <jni.h>
#include <string>
#include <GLES3/gl31.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_grendell_computetest_MainActivity_stringFromJNI(
        JNIEnv * env,
        jobject /* this */) {
    glDispatchCompute(7, 7, 7);

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
