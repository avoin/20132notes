#include <cstdio>
using namespace std;
int main(){
  int a[3][4] = {
                 {10,20,30,40},
                 {50,60,70,80},
                 {90,100,110,120}
                };
  printf("%u\n", a);
  printf("%u\n", a+1);
  int* p = (int*)a;
//  for(int i=0;i<12;i++){  depending on compiler, i is created befor and within the loop's body
  int i;
  int j;
  for(i = 0;i<12;i++){
    printf("%d, ", p[i]);
  }
  putchar('\n');
  
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      printf("%d, ", a[i][j]);
    }
    putchar('\n');
  }

  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      printf("%d, ", *(a[i]+j));
    }
    putchar('\n');
  }
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      printf("%d, ", *(*(a+i)+j));
    }
    putchar('\n');
  }


  return 0;
}