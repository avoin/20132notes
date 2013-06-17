#include <iostream>
using namespace std;
struct Rec{
  double d;
  int i;
};
struct Rec2{
  double d;
  int i;
  char ch;
};
struct RRec{
  char a;
  double d;
  int i;
}; 
int main(){
  double d;

  cout<<sizeof(int)<<endl;
  cout<<sizeof(d)<<endl;
  cout<<sizeof(double)<<endl;
  cout<<sizeof(Rec)<<endl;
  cout<<sizeof(Rec2)<<endl;
  cout<<sizeof(RRec)<<endl;
  return 0;
}