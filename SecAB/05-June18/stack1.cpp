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
  }
  bool isEmpty(){
    return _top == (Node*)0;
  }
};