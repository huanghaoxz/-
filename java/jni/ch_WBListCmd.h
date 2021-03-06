/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_antell_cloudhands_api_WBList_WBListCmd */

#ifndef _Included_com_antell_cloudhands_api_WBList_WBListCmd
#define _Included_com_antell_cloudhands_api_WBList_WBListCmd
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_antell_cloudhands_api_WBList_WBListCmd
 * Method:    open
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_antell_cloudhands_api_WBList_WBListCmd_open
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_antell_cloudhands_api_WBList_WBListCmd
 * Method:    close
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_antell_cloudhands_api_WBList_WBListCmd_close
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_antell_cloudhands_api_WBList_WBListCmd
 * Method:    add
 * Signature: (IJJJII)J
 */
JNIEXPORT jlong JNICALL Java_com_antell_cloudhands_api_WBList_WBListCmd_add__IJJJII
  (JNIEnv *, jobject, jint, jlong, jlong, jlong, jint, jint);

/*
 * Class:     com_antell_cloudhands_api_WBList_WBListCmd
 * Method:    add
 * Signature: (ILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_antell_cloudhands_api_WBList_WBListCmd_add__ILjava_lang_String_2
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_antell_cloudhands_api_WBList_WBListCmd
 * Method:    delete
 * Signature: (IJ)I
 */
JNIEXPORT jint JNICALL Java_com_antell_cloudhands_api_WBList_WBListCmd_delete
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     com_antell_cloudhands_api_WBList_WBListCmd
 * Method:    getWBIPList
 * Signature: (I)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_antell_cloudhands_api_WBList_WBListCmd_getWBIPList
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_antell_cloudhands_api_WBList_WBListCmd
 * Method:    getWBStrList
 * Signature: (I)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_com_antell_cloudhands_api_WBList_WBListCmd_getWBStrList
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_antell_cloudhands_api_WBList_WBListCmd
 * Method:    start
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_antell_cloudhands_api_WBList_WBListCmd_start
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_antell_cloudhands_api_WBList_WBListCmd
 * Method:    stop
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_antell_cloudhands_api_WBList_WBListCmd_stop
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
