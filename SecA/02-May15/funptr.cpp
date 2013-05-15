// review of last session
// int a[20];
// a is &a[0];


#include <cstdio>
using namespace std;

void bar(int len, char ch){
  int i;
  for(i=0;i<len;i++){
    putchar(ch);
  }
  putchar('\n');
}

void prnNextChar(int val, char ch){
  printf("%c\n", ch + val);
}


int main(){
  void (*ptr)(int , char ); 
  printf("address of bar in memory: %u\n", bar);
  bar(20, '=');
  ptr = bar;
  ptr(30, '+');
  ptr = prnNextChar;
  ptr(2, 'B');
  return 0;
}