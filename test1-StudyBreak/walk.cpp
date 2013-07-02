#include <iostream>
#include <cstdarg>
using namespace std;

void w1(){  // size of an integer is 4 bytes
  int a[3][100];
  int* p = (int*)a;
  cout<<"w1-----"<<endl;
  cout<<sizeof(a)<<endl;
  cout<<sizeof(p)<<endl;
}
void w2(){
  int a[5] = {10, 20, 30, 40, 50};
  int* p = a;
  cout<<"w2------"<<endl;
  cout<<*p++<<endl;
  cout<<*p<<endl;
  cout<<(*p)++<<endl;
  cout<<*p<<endl;
}

int& foo(){
  static int i = 10;
  return i;
}
int& foo(int& a){
  return a;
}

void w3(){
  int i = 30;
  int& R = i;
  int j = 50;
  cout<<"w3------"<<endl;
  cout<<R<<endl;
  cout<<foo()<<endl;
  foo() = 300;
  cout<<foo()<<endl;
  foo(j) = 400;
  foo(R) = 500;
  cout<<j<<endl;
  cout<<i<<endl;
}
#define mk(v, t) t v
#define mkNst(var, t, val) t var = val
#define rep(n, i)  for(i=0;i<n;i++)
#define prln(s) cout<<s<<endl
void w4(){
  mk(i, int) = 2;
  mkNst(b, int, 5);
  prln("w4-------");
  rep(b, i){
    prln(i);
  }
}
int S(int num, ...){
  int s = 0;
  int arg;
  int i;
  va_list varg;
  va_start(varg, num);
  for(i=0;i<num;i++){
    arg = va_arg(varg, int);
    s += arg;
  }
  va_end(varg);
  return s;
}
void w5(){
  int val;
  cout<<"w5-------"<<endl;
  val = S(4, 10, 20, 30, 40);
  cout<<val<<endl;
  val = S(4, 10, 20, 30, 40, 50, 60, 70);
  cout<<val<<endl;
  val = S(4, 10, 20, 30);
  cout<<val<<endl;
}

int main(){
  w1();
  w2();
  w3();
  w4();
  w5();
  return 0;
}

