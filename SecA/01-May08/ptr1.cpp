#include <cstdio>
using namespace std;
int main(){
  int a = 10;
  int* p;
  p = &a;
  printf("%u \n", p);
  printf("%d \n", *p);
  *p = 5;
  printf("%d \n", *p);
  a++;
  printf("%d \n", *p);
  p++;
  printf("%u \n", p);
  printf("%d \n", *p);
  return 0;
}