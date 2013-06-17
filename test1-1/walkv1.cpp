#include <cstdio>
using namespace std;
#define sum(a, b) a+b
void w2(){
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int* p;
  p = a + 3;
  printf("W2:\n%d,", *(a+3));
  printf("%d\n", p[0]);
}
void w3(void* d, void* s){
  printf("W3:\n");
  for(int i=sizeof(int);i>=0;((char*)d)[i] =((char*)s)[i], i--); 
}
int w6(){
  int a[10]={1,3,4,-5,4,-7,3,0,-1,8};
  int i;
  int num = 0;
  printf("w6:\n");
  for(i=0;i<10;(a[i]%2) && (num+=1),i++);
  return num;
}

int main(int argc, char* argv[]){
  int i;
  int j = 12;
  int* p = (int*)12;
  void (*fp)(void) = w2;
  printf("W1:\n");
  for (i=argc;--i>0;printf("%c", argv[i][i]));
  putchar('\n');
  w2();
  w3( &i, &j);
  printf("%d\n", i);
  printf("W4:\n");
  printf("%u\n", ++p);
  fp();
  printf("%d\n", w6());
  i = 6; j = 4;
  printf("W7:\n%d\n", sum(i,j)*3);
  return 0;
}

output:
/*
W1:
Dc2
W2:
4,4
W3:
12
W4:
16
W2:
4,4
w6:
6
W7:
18
*/