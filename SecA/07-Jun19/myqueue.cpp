#include <cstring>
#include "myqueue.h"
namespace oopclass{
  Node::Node(const char* data, Node* next){
    _data = new char[std::strlen(data) + 1];
    std::strcpy(_data, data);
    next = _next;
  }
  Node::~Node(){
    if(_data) delete[] _data;
  }
  MyQueue::MyQueue(){
    _head = _tail = (Node*)0;
  }
  MyQueue::~MyQueue(){
    while(!isEmpty) remove((char*)0);
  }
  void MyQueue::add(const char* data){
  }
  void MyQueue::remove(char* data){ 
  }
  bool MyQueue::isEmpty(){
    return _head == (Node*)0;
  }
}