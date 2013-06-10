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
  int j = 20;
  cout<<R<<endl;
  cout<<foo()<<endl;
  foo() = 30;
  cout<<foo()<<endl;
  foo(j) = 40;
  foo(R) = 50;
  cout<<j<<endl;
  cout<<i<<endl;
  return 0;
}