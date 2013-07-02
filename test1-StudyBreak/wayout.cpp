#include "dstack.h"
#include <iostream>
using namespace std;

int menu(){
  int ret = -1;
  cout<<"1 - Open door"<<endl
      <<"2 - Go Back"<<endl 
      <<"3 - Found Treasure, Show the way out"<<endl
      <<"0 - Exit program"<<endl
      <<"> ";
  while(ret<0 || ret>3){
    cin>>ret;
    if(ret<0 || ret>3){
      cout<<"Invalit entry, try again: ";
    }
    cin.ignore(100, '\n');
  }
  return ret;
}

int main(int argc, char* argv[]){
  int choice = -1;
  char color[41] = "";
  DStack doors;
  if(argc != 3){
    cout<<"Usage:$ pathway FirstName LastName <ENTER>"<<endl;
    choice = 0;
  }
  else{
    cout<<"Hello "<< argv[1]<<" "<<argv[2]<<", welcome to the pathway program."<<endl;
  }
  while(choice){
    switch(choice = menu()){
    case 1:
      cout<<"Door Color: ";
      cin>>color;
      doors.push(color);
      break;
    case 2:
      doors.pop(color);
      cout<<"Go out through the "<<color<<" door"<<endl;
      break;
    case 3:
      cout<<"way out through the doors in following order: "<<endl;
      for(int n = 1 ;!doors.isEmpty();n++){
        doors.pop(color);
        cout<<n<<": "<<color<<endl;
      }
      cout<<"You are out now!"<<endl;
      break;
    case 0:
      cout<<"Goodbye "<<argv[1]<<", I hope you have found the treasure"<<endl;
    }
  }
  return 0;
}