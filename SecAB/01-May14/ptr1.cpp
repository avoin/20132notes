#include <cstdio>
using namespace std;
int main(){
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int* p;
  p = a;
  printf("%d\n", *a);
  p+=2;
  printf("%d\n", p[0]);
  printf("%d\n", p[3]);

  return 0;
}