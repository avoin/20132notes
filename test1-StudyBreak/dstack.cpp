#include "dstack.h"
#include <cstring>
using namespace std;
DNode::DNode(const char* doorColor, DNode* next){ // 1
  strncpy(_doorColor, doorColor, 40);
  _doorColor[40] = 0;
  _next = next;
}

DStack::DStack(){ // 1
  _top = (DNode*)0;
}
DStack::~DStack(){  // 1
  while(!isEmpty()){
    pop();
  }
}
void DStack::push(const char* doorColor){ // 1
  DNode* newnode = new DNode(doorColor, _top);
  _top = newnode;
}

void DStack::pop(char* outDoorColor){ // 1
  if(outDoorColor){
    strcpy(outDoorColor, _top->_doorColor);
    DNode* toDel = _top;
    _top = _top->_next;
  }
}

bool DStack::isEmpty(){  // 1
  return _top == (DNode*) 0;
}