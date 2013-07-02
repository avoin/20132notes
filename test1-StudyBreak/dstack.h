#ifndef _FS_DSTACK_
#define _FS_DSTACK_

class DStack;

class DNode{
  char _doorColor[41];
  DNode* _next;
  DNode(const char* doorColor, DNode* next = (DNode*)0);
  friend class DStack;
};

class DStack{
  DNode* _top;
public:
  DStack();
  void push(const char* doorColor);
  void pop(char* outDoorColor=(char*)0);
  bool isEmpty();
  virtual ~DStack();
};



#endif