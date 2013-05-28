#include <stdio.h>
#include <string.h>

typedef struct {
  char first[41];
  char last[51];
} 
Name;

int a;

int main(){
  Name n;
  strcpy(n.first, "Fardad");
  strcpy(n.last , "Soley");
  return 0;
}