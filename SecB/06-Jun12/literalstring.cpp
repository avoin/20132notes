#include <iostream>
#include <cstring>
using namespace std;


int main(){
//  char* name = "John"; don't
  char name[] = "John";
  int i=0;
  char str[10];
  strcpy(str, "Fardad");
  for(;i<6;i++){
    cout<<str[i];
  }
  cout<<endl;
  for(;i<6;i++){
    cout<<"Fardad"[i];
  }
  cout<<endl;
  return 0;
}

