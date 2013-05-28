#include <stdio.h>
#include <stdarg.h>


int avrg(int num, ...);


int main(){
  int val;

  val = avrg(4, 10, 20, 30, 40);
  printf("%d\n", val);
  val = avrg(4, 10, 20, 30, 40, 50, 60, 70);
  printf("%d\n", val);
  val = avrg(4, 10, 20, 30);
  printf("%d\n", val);
  return 0;
}

int avrg(int num, ...){
  int sum = 0;
  int arg;
  int i;
  va_list varg;
  va_start(varg, num);
  for(i=0;i<num;i++){
    arg = va_arg(varg, int);
    sum += arg;
  }
  va_end(varg);
  return sum / num;
}