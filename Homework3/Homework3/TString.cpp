// -- TString.cpp source file --
#define _CRT_SECURE_NO_WARNINGS
#include "TString.h"
#include <string.h>

TString::TString(const char *pText) {
  mLength = 0;  // length of char data (not including null byte)

  if (pText == NULL){
    //initialize this String object to point at a dynamically allocated character array of length 1
    mpText = new char[1];
    mpText[0] = '\0';
  }
  else{
    //dynamically allocates a char array of the same size as the parameter char array, and copies the parameter char data into it
    int len = strlen(pText);
    mpText = new char[len + 1];
    strncpy(mpText, pText, len + 1);
    mLength = len;
  }
}

TString::TString(const TString& rObj){ // copy ctor
  int len = strlen(rObj.mpText);
  mpText = new char[len + 1];
  strncpy(mpText, rObj.mpText, len + 1);
  mLength = rObj.mLength;
}

const int TString::length(){
  return this->mLength;
}

const char *TString::asChar(){
  //returning a const char pointer to this String's encapsulated character data. It does not allocate new memory for the char data to be returned.
  return mpText;
}

void TString::assign(const TString& rObj){
  //accepting a String object parameter (by const ref). It first checks for assignment to self and returns if true.  Otherwise, it uses delete to  
  //release the current char array it points to
  //then dynamcally allocates a new char array of the same size as the parameter String's, and copies the character data from the parameter String.
  if (this->mLength == rObj.mLength && this->mpText == rObj.mpText)
    return;
  else{
    delete[] mpText;
    mpText = 0;
    int len = strlen(rObj.mpText);
    mpText = new char[len + 1];
    strncpy(mpText, rObj.mpText, len + 1);
    mLength = rObj.mLength;
  }
}

void TString::assign(char *pArray){
  if (pArray == NULL){
    //initialize this String object to point at a dynamically allocated character array of length 1
    mpText = new char[1];
    mpText[0] = '\0';
  }
  else if (this->mpText == pArray)
    return;
  else{
    delete[] mpText;
    mpText = 0;
    int len = strlen(pArray);
    mpText = new char[len + 1];
    strncpy(mpText, pArray, len + 1);
  }
}

bool TString::equals(const TString &rObj){
  int len = strlen(rObj.mpText);
  if (strncmp(this->mpText, rObj.mpText, len) == 0)
    return true;
  else
    return false;
}

int TString::indexOf(char nChar){
  int len = strlen(mpText);
  int pos = 0;
  int leave = 0;
    for (int i = 0; i < len; ++i){
      if (mpText[i] == nChar){
        pos = i;
        break;
      }
      else
        pos = -1;
    }
  return pos;
}