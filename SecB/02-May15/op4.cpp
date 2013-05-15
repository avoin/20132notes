#include <cstdio>
using namespace std;

int main(){
  int a[10] = {43,0,-7,0,7,-5,0,8,-6,0};
  int i;
  for(i=0;i<10;i++){
    a[i] > 0 && printf("%d, ", a[i]);
  }
  return 0;
}