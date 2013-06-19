#include <iostream>
#include "myqueue.h"
using namespace oopclass;
using namespace std;
int main(){
  int i;
  char ret[100];
  char str[5][10]={
    "one", "Two", "Three", "Four", "Five"
  };
  MyQueue q;
  for(i=0;i<5;i++){
   q.add(str[i]);
  }
  while(!q.isEmpty()){
    q.remove(ret);
    cout<<ret<<endl;
  }
  q.add("Something");
  q.add("to");
  q.add("add");
  return 0;
}