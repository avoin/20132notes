#include "queue.h"
#include <cstring>
namespace oop344{
  Node::Node(const char* data, Node* next){
    _data = new char[std::strlen(data)+1];
    std::strcpy(_data, data);
    _next = next;
  }
  Node::~Node(){
    if(_data){
      delete[] _data;
    }
  }

  Queue::Queue(){
    _head = _tail = (Node*)0;
  }
  Queue::~Queue(){
    while(!isEmpty()){
      remove();
    }
  }
  void Queue::add(const char* data){
  }

  void Queue::remove(char* dataout){
  }
   
  bool Queue::isEmpty(){
    return _head == (Node*)0;
  }











}