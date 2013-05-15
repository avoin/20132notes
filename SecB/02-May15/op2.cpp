#include <iostream>
using namespace std;

int main(){
  int a = 10;
  int b = 20;
  int c = 30;
  int d;

  d = (a > b) && (c+=20); // lazy evaluation

  cout<<d<<endl;
  cout<<c<<endl;

  d = (a < b) || (c+=20); // lazy evaluation

  cout<<d<<endl;
  cout<<c<<endl;

  d = (a < b) && (c-=30); 

  cout<<d<<endl;
  cout<<c<<endl;

  d = (a < b) && (c+=30); 

  cout<<d<<endl;
  cout<<c<<endl;

  return 0;
}