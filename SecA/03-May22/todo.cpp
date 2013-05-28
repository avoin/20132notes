#include <iostream>
#include <cstdarg>
using namespace std;

const char* nstrcat(char* des, ...);  // to do

int avg(int num, ...){
  va_list vargs;
  va_start(vargs, num);
  int sum = 0;
  int i;
  int arg;
  for(i=0;i<num;i++){
    arg = va_arg(vargs, int);
    sum += arg;
  }
  va_end(vargs);
  return sum/num;
}

int main(){
  cout<<avg(4, 10, 20, 30, 40)<<endl;
  cout<<avg(4, 10, 20, 30, 40, 50, 60, 70)<<endl;
  cout<<avg(4, 10, 20, 30)<<endl;
  return 0;
}