#include <iostream>
using namespace std;

#define PI 3.14159265
#define sum(x,y) ((x)+(y))

#define maxof(x, y) ((x)>(y)?(x):(y))

int main(){
  int a = 2;
  int b = 3;
  int c;
  double f = 2.334;
  double g = 3.456;
  double h;
  c = sum(a,b) * 4;
  cout<<c<<endl;
  h = sum(f,g);
  cout<<h<<endl;
  h = sum(f+g*2/a, g/2+b);
  cout<<h<<endl;
  cout<<maxof(a,b)<<endl;
  return 0;
}