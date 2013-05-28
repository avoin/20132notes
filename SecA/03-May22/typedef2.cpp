#include <stdio.h>
#include <string.h>
struct Name{
  char first[41];
  char last[51];
};

int main(){
  struct Name n;
  strcpy(n.first, "fardad");
  strcpy(n.last, "soley");

  return 0;
}