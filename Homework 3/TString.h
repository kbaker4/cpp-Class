// -- TString.h header file --

#ifndef _TSTRING_H    // only include once in a compilation unit 
#define _TSTRING_H

class TString { // Prefix with 'T' for uniqueness
public:
  TString(const char *pText = 0); // default ctor
  TString(const TString& rObj); // copy ctor
  const int length(); //returning the current size of the character data (not including the final null byte).
  const char *asChar(); //returning a const char pointer to this String's encapsulated character data. It does not allocate new memory for the char data to be returned.
  void assign(const TString &rObj); //accepting a String object parameter (by const ref). It first checks for assignment to self and returns if true.
  void assign(char *pArray);
  bool equals(const TString &rObj);
  int indexOf(char nChar);

private:
  int mLength;  // length of char data (not including null byte)
  char *mpText; // pointer to dynamic char array in heap
};

#endif   // _TSTRING_H