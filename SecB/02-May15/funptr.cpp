#include <cstdio>
using namespace std;

void bar(int len, char ch){
  int i;
  for(i=0;i<len;i++){
    putchar(ch);
  }
  putchar('\n');
}


int main(){
  void (*ptr)(int , char);
  printf("%u\n", bar);
  ptr = bar;

  ptr(20, '+');

  return 0;
}