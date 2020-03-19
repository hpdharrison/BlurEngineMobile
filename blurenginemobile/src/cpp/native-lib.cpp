#include <jni.h>
#include <string>
#include "native-lib.hpp"

extern "C" JNIEXPORT jstring JNICALL
Java_com_qprogramming_blurenginemobile_MainActivity_stringFromJNI(
        JNIEnv* env,
        jclass javaclass) {
    return env->NewStringUTF(DEFINED_TEXT.c_str());
}
