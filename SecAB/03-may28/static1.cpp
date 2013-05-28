#include <iostream>
using namespace std;
void foo(){
  static int a = 20;
  a++;
  cout<<a<<endl;
}
int main(){
  int i;
  for(i=0;i<10;i++){
    foo();
  }
  return 0;
}