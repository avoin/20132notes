#include <iostream>
#include <cstdarg>
using namespace std;

void passed(const char* name, ...){
  va_list args;
  double ret = 0.0;
  va_start(args, name);
  int arg = va_arg(args, int);
  int num = 0;
  while(arg > 0){
    ret += arg;
    num++;
    arg = va_arg(args, int);
  }
  if(num > 0){
    ret = ret/num;
  }
  cout<<name<<(ret>55.0?" passed":" failed")<<" with the average of "<<ret<<endl;
  va_end(args);
}

int main(){
  passed("Fardad", 40, 70, 58, 80, 90, -1);
  passed("John", 40, 30, 40, 50, -1);
  return 0;
}
