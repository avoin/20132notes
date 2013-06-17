#include <iostream>
using namespace std;
void something(int a[]);
int main(){
  int b[10] = {1,2,3,4,5,6,7,8,9,10};
  int a[3][10] = {{1,2,3,4,5,6,7,8,9,10},
                  {10,20,30,40,50,60,70,80,90,100},
                  {100,200,300,400,500,600,700,800,900,1000}};
  pointer aptr = a;
  double d;
  cout<<sizeof(int)<<endl;
  cout<<sizeof(d)<<endl;
  cout<<sizeof(double)<<endl;
  cout<<sizeof(b)<<endl;
  cout<<sizeof(a)<<endl;
  cout<<sizeof(a[0])<<endl;
  something(b);
  return 0;
}


void something(int a[]){
  cout<<sizeof(a);
}