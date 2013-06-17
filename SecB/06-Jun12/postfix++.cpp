#include <iostream>
using namespace std;
int main(){
  int a[5] = {10, 20, 30, 40, 50};
  int* p = a;
  cout<<*p++<<endl;
  cout<<*p<<endl;
  cout<<*(p++)<<endl;
  cout<<*p<<endl;
  cout<<(*p)++<<endl;
  cout<<*p<<endl;

  return 0;
}