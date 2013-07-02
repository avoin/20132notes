#ifndef _FS_DSTACK_   // 1
#define _FS_DSTACK_

class DStack;    //1

class DNode{   // 1
  char _doorColor[41];
  DNode* _next;
  DNode(const char* doorColor, DNode* next = (DNode*)0);
  friend class DStack;
};

class DStack{    // 1
  DNode* _top;
public:
  DStack();
  void push(const char* doorColor);
  void pop(char* outDoorColor=(char*)0);
  bool isEmpty();
  virtual ~DStack();
};



#endif