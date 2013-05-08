#include <cstdio>
using namespace std;
int main(){
  int a = 10;
  int* p;
  p = &a;
  printf("%u \n", p);
  return 0;
}