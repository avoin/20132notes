#ifndef _FS_MYQUEUE_H_
#define _FS_MYQUEUE_H_
namespace oopclass{
  class MyQueue;
  class Node{
    char* _data;
    Node* _next;
    Node(const char* data, Node* next = (Node*)0);
    virtual ~Node();
    friend class MyQueue;
  };


  class MyQueue{
    Node* _head;
    Node* _tail;
  public:
    MyQueue();
    virtual ~MyQueue();
    void add(const char* data);
    void remove(char* data);
    bool isEmpty();
  };

}















#endif
