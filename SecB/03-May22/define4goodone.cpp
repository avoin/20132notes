#include <iostream>
using namespace std;

#define sum(x, y)  ((x) + (y))
#define maxof(x, y) ((x)<(y)?(y):(x))
int main(){
  int a = 20;
  int b=10;
  int c;
  double f = 23.456;
  double g = 2345.567;
  double h;
  c = sum(a, b) * 2;
  cout<<c<<endl;
  h = sum(f, g);
  cout<<h<<endl;
  h = sum(f*a+g/c,h+3*b);
  cout<<h<<endl;
  cout<<maxof(a,b)<<endl;
  return 0;
}