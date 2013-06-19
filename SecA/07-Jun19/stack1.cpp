#include <iostream>
using namespace std;
class Stack;

class Node{
  int _data;
  Node* _next;
  Node(int data, Node* next = (Node*)0){
    _data = data;
    _next = next;
  }
  friend class Stack;
};

class Stack{
  Node* _top;
public:
  Stack(){
    _top = (Node*)0;
  }
  void push(int data){
    Node* newnode = new Node(data, _top);
    _top = newnode;
  }
  int pop(){
    int ret = _top->_data;
    Node* toDel = _top;
    _top = _top->_next;
    delete toDel;
    return ret;
  }
  bool isEmpty(){
    return _top == (Node*)0;
  }
  virtual ~Stack(){
    while(!isEmpty()) pop();
  }
};

int main(){
  Stack S;
  for(int i=10;i<100;i+=10){
    S.push(i);
  }
  while(!S.isEmpty()){
    cout<<S.pop()<<" ";
  }
  cout<<endl;
  return 0;
}