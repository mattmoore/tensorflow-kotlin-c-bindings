#include "tensorflow_api.h"

JNIEXPORT jstring JNICALL Java_io_mattmoore_tensorflow_Tensorflow_hello(JNIEnv *env, jobject obj) {
  return (*env)->NewStringUTF(env, "Hello World!");
}

JNIEXPORT jstring JNICALL Java_io_mattmoore_tensorflow_Tensorflow_version(JNIEnv *env, jobject obj) {
  return (*env)->NewStringUTF(env, TF_Version());
}

// JNIEXPORT jobject JNICALL Java_io_mattmoore_tensorflow_Tensorflow_version(JNIEnv *env, jobject obj) {
//   return (*env)->NewObject(env, TF_NewTensor());
// }
