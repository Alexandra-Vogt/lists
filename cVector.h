#pragma once

template <class T>
class cVector {
 private:
  T * dynmArray = NULL;
  long length;
  
  T * allocate () {
    
  }

  void copy (T * newArray) {
    for( int i; i < this->length; i++ ){
      this->dynmArray[i];
    }
  }
  
 public:
  // create basic two wide cVector
  cVector () {
    int baseSize = 2;
    this->dynmArray = new T[baseSize];
    this->length = baseSize;
  }
  
  void append(T val) {
    this->vector;
  }
  void insert(long location, T val) {
    this->vector;
  }
  T get(long location) {
    
  }
}
