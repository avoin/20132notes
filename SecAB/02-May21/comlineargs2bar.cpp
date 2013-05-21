#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

void bar(int len, char ch){
  int i;
  for(i=0;i<len;i++){
    cout<<ch;
  }
  cout<<endl;
}

int main(int argc, char* argv[]){
  bool prnhelp = true;
  char bch = '_';
  int len = 60;
  if(argc <= 3){
    prnhelp = false;
    if(argc >= 2){
      if(!strcmp(argv[1], "help")){
        prnhelp = true;
      }
    }
    if(argc == 3){
//      bch = *argv[2];
      bch = argv[2][0];
    }
    if(argc>= 2){
      if(sscanf(argv[1],"%d", &len) != 1){
        prnhelp = true;
      }
    }
  }
  else{
    prnhelp = true;
  }
  if(prnhelp){
    cout<<"bar [len] [char]<ENTER>"<<endl;
  }
  else{
    bar(len, bch);
  }
  return 0;
}


