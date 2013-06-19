#ifndef _FS_QUEUE_H_
#define _FS_QUEUE_H_
namespace oop344{
  class Queue;
  class Node{
    char* _data;
    Node* _next;
    Node(const char* data, Node* _next= (Node*)0);
    virtual ~Node();
    friend class Queue;
  };


  class Queue{
    Node* _head;
    Node* _tail;
  public:
    Queue();
    virtual ~Queue();
    void add(const char* data);
    void remove(char* dataout);
    bool isEmpty();
  };













}











#endif