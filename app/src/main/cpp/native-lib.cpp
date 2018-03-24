#include <jni.h>
#include <string>
#include <memory>
#include "submodule/CppInterface.h"

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_myakushka_javacpp_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    auto intarface = std::make_shared<CppInterface>();
    std::string hello = intarface->getString();
    return env->NewStringUTF(hello.c_str());

}
