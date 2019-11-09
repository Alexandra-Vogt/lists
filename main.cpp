
#include

template <class T>
struct node {
  node targets [];
  T contents;
};

template <class T>
class NodeList {
private:
  node<T> * head;
  node<T> * tail;
  long size;
  
public:
  long getSize() {
    return this->size;
  }
  
  T getItem(long itemNum) {
    T item;
    return item; 
  }
  T getHead() {
    // 
  }
  T getTail() {
    
  }
  
};


int main () {
  
}
