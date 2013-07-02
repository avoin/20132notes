#include "dstack.h"
#include <cstring>
using namespace std;
DNode::DNode(const char* doorColor, DNode* next){
  strncpy(_doorColor, doorColor, 40);
  _doorColor[40] = 0;
  _next = next;
}

DStack::DStack(){
  _top = (DNode*)0;
}
DStack::~DStack(){
  while(!isEmpty()){
    pop();
  }
}
void DStack::push(const char* doorColor){   
  DNode* newnode = new DNode(doorColor, _top);
  _top = newnode;
}

void DStack::pop(char* outDoorColor){
  if(outDoorColor){
    strcpy(outDoorColor, _top->_doorColor);
    DNode* toDel = _top;
    _top = _top->_next;
  }
}

bool DStack::isEmpty(){
  return _top == (DNode*) 0;
}