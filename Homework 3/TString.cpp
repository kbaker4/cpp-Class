// -- TString.cpp source file --
#define _CRT_SECURE_NO_WARNINGS
#include "TString.h"
#include <string.h>

TString::TString(const char *pText) {
  mLength = 0;  // length of char data (not including null byte)

  if (pText == 0 || sizeof(pText) == 1){
    //initialize this String object to point at a dynamically allocated character array of length 1
    mpText = new char[1];
  }
  else{
    //dynamically allocates a char array of the same size as the parameter char array, and copies the parameter char data into it
    int length = strlen(pText);
    mpText = new char[length];
    strncpy(mpText, pText, length);
    mLength = length;
  }
}

TString::TString(const TString& rObj){ // copy ctor
  strncpy(this->mpText, rObj.mpText, strlen(rObj.mpText));
  this->mLength = rObj.mLength;
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
    delete this;
    int length = strlen(rObj.mpText);
    this->mpText = new char[length];
    strncpy(this->mpText, rObj.mpText, length);
  }
}

void TString::assign(char *pArray){
  if (this->mpText == pArray)
    return;
  else{
    delete this;
    int length = strlen(pArray);
    this->mpText = new char[length];
    strncpy(this->mpText, pArray, length);
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
  int len = strlen(this->mpText);
  int pos = 0;
  int leave = 0;
  do {
    for (int i = 0; i < len; ++i){
      if (this->mpText[i] == nChar){
        pos = i;
        leave = 1;
      }
    }
  } while (leave = 0);
  return pos;
}