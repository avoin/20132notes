
#include <iostream>
using namespace std;

int main(){
  int a = 3;
  int b = 4;
  int c = 5;
  int d;
  d = (a > b) && (c+=5);
  cout<<d<<endl;
  cout<<c<<endl;
  return 0;
}