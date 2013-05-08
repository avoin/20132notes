#include <cstdio>
using namespace std;
int main(){
  double a[10] = { 1, 2,3,4,5,6,7,8,9.10};
  double* p = &a[0];
  p += 3;
  printf("%.2lf\n", *p);
  p = &a[0];
  printf("%.2lf\n", *(p+3));
  printf("%.2lf\n", a[3]);

  printf("%.2lf\n", *(a+3));
  printf("%.2lf\n", p[3]);

  return 0;
}