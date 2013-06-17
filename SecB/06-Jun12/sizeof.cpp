#include <iostream>
using namespace std;
struct Rec{
  double d;
  int a;
};

struct Rec2{
  double d;
  int a;
  char ch;
};

struct Rec3{
  char ch;
  double d;
  int a;
};

void something(int ar[]);
int main(){
  int a;
  int* p;
  double *p1;
  Rec3* p2;
  int arr[10];
  int ar2[3][100];
  cout<<sizeof(int)<<endl;
  cout<<sizeof(a)<<endl;
  cout<<sizeof(Rec)<<endl;
  cout<<sizeof(Rec2)<<endl;
  cout<<sizeof(p)<<" "<<sizeof(p1)<<" "<<sizeof(p2)<<endl;
  cout<<sizeof(arr)<<endl;
  cout<<sizeof(ar2)<<endl;
  cout<<sizeof(ar2[0])<<endl;
  cout<<sizeof(ar2[0][0])<<endl;
  something(arr);
  something(&a);
  return 0;
}

void something(int ar[]){
  cout<<sizeof(ar)<<endl;
}