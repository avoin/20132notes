#include <iostream>
#include <cstring>
using namespace std;


int main(){
//  char* str = "Fardad";  don't
  char str[10];
  int i =0;
  strcpy(str, "Fardad");
  for(;i<6;i++){
    cout<<str[i];
  }
  cout<<endl;
  for(i=0;i<6;i++){
    cout<<"Fardad"[i];
  }
  cout<<endl;
  cout<<*str<<endl;
  cout<<*"Fardad"<<endl;
  return 0;
}
