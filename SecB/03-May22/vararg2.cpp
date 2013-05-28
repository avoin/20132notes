#include <iostream>
#include <stdarg>
using namespace std;


const char* nstrcat(char* des, ...);  // to do 

int avrg(int num, ...);


int main(){
  int val;
  char name[60] = "";
  char fname[] = "fardad";
  char lname[] = "soley";
  val = avrg(4, 10, 20, 30, 40);
  cout<<val<<endl;
  val = avrg(4, 10, 20, 30, 40, 50, 60, 70);
  cout<<val<<endl;
  val = avrg(4, 10, 20, 30);
  cout<<val<<endl;
  cout<<nstrcat(name, fname, " ", lname, 0)<<endl;
  
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