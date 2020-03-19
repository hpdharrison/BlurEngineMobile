#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_qprogramming_blurenginemobile_MainActivity_stringFromJNI(
        JNIEnv* env,
        jclass javaclass) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
