#include <iostream>
using namespace std;

int main(){
  int a[10] = {43,0,-7,0,7,-5,0,8,-6,0};
  int i;
  int n = 0;
  for(i=0;i<10;i++){
    n += (a[i]<0);
  }
  cout<<"Neg: "<<n<<endl;
  for(n=0,i=0;i<10;i++){
    n += (!!a[i]);
  }
  cout<<"Neg: "<<n<<endl;
  return 0;
}