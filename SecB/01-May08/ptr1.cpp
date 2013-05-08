#include <cstdio>
using namespace std;
int main(){
  double a = 10.0;
  double* p = &a;
  printf("%0.2lf \n", *p);
  *p = 5.0;
  printf("%u \n", p);
  printf("%0.2lf \n", *p);
  a = a + 1;
  printf("%0.2lf \n", *p);
  p = p + 1;
  printf("%u \n", p);
  
  return 0;
}