#include <cstdio>
using namespace std;
int main(){
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int* p;
  p = &a[0];
  p+=3;
  printf("%d\n", *p);
  p = &a[0];
  printf("%d\n", *(p + 4));
  printf("%d\n", a[4]);
  printf("%d\n", *(a + 4));
  printf("%d\n", p[4]);
  return 0;
}