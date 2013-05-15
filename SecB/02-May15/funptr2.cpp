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

void prnchars(int num, char ch){
  int i;
  for(i=0;i<num;i++){
    putchar(ch++);
  }
  putchar('\n');
}


int main(){
  void (*ptr[3])(int , char) = {bar, prnchars, prnNextChar};
  int i;
  for(i=0;i<3;i++){
    ptr[i](20, 'a');
  }
  return 0;
}