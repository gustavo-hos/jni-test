#include "me_terato_Main.h"

JNIEXPORT jstring JNICALL Java_me_terato_Main_getOsName(JNIEnv *env, jobject obj) {

        #ifdef _WIN32
            return env->NewStringUTF("Windows 32-bit");
        #elif _WIN64
            return env->NewStringUTF("Windows 64-bit");
        #elif __APPLE__ || __MACH__
            return env->NewStringUTF("Mac OSX");
        #elif __linux__
            return env->NewStringUTF("Linux");
        #elif __FreeBSD__
            return env->NewStringUTF("FreeBSD");
        #elif __unix || __unix__
            return env->NewStringUTF("Unix");
        #else
            return env->NewStringUTF("Other");
        #endif
}

JNIEXPORT jobject JNICALL Java_me_terato_Main_operationTwoNumbers(JNIEnv *env, jobject obj, jfloat num1, jfloat num2) {
        jclass operationClass = env->FindClass("me/terato/Operation");
        jmethodID setSumMethod = env->GetMethodID(operationClass, "setSum", "(F)V");
        jmethodID setUserMethod = env->GetMethodID(operationClass, "setUser", "(Ljava/lang/String;)V");

        // Check for errors
        if (operationClass == NULL || setSumMethod == NULL || setUserMethod == NULL) {
            return NULL;
        }

        // Create a new Operation object by using AllocObject
        // it differs from NewObject cuz Operation class hasn't any explicit constructor
        jobject operationObject = env->AllocObject(operationClass);

        // Check for errors
        if (operationObject == NULL) {
            return NULL;
        }

        // Set the 'sum' property by multiplying num1 with num2
        jfloat result = num1 * num2;
        env->CallVoidMethod(operationObject, setSumMethod, result);

        // Set the 'user' property
        jstring userString = env->NewStringUTF("Floydz96");
        env->CallVoidMethod(operationObject, setUserMethod, userString);
        env->DeleteLocalRef(userString);

        return operationObject;
}

int main() {
    return 0;
}