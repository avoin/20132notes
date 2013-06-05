#include <iostream>
using namespace std;
int& foo(){
  static int i = 0;
  return i;
}
int& foo(int& a){
  return a;
}

int main(){
  int i = 10;
  int& R = i;
  int j = 12;
  cout<<i<<" == "<<R<<endl;
  cout<<foo()<<endl;
  foo() = 10;
  cout<<foo()<<endl;
  foo(j)--;
  foo(R)++;
  cout<<j<<endl;
  cout<<i<<endl;
  return 0;
}