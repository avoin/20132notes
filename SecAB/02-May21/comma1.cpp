#include <iostream>
using namespace std;



void bar(int len = 60, char ch =  '_');



int main(){
  bar(40, '_');
  bar(30);
  bar();
  return 0;
}


void bar(int len, char ch){
  int i;
  for(i=0;i<len;cout<<ch, i++);
  cout<<endl;
}
