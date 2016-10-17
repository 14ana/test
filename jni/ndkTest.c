#include<jni.h>
#include<string.h>
/*extern "C"
{

JNIEXPORT jstring JNICALL Java_ana_hp_example_com_ndktest_MainActivity_helloWorld(JNIEnv* env, jobject obj)

}*/

JNIEXPORT jstring JNICALL Java_ana_hp_example_com_ndktest_MainActivity_helloWorld(JNIEnv* env, jobject obj){

return env->NewStringUTF("welcome to the World");

}
