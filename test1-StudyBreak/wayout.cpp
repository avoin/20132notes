#include "dstack.h" // 1  the header file inclusion
#include <iostream> //    and the iostream (std)
using namespace std;

int menu(){    // 1   Menu function
  int ret = -1;
  cout<<"1 - Open door"<<endl
      <<"2 - Go Back"<<endl
      <<"3 - Found Treasure, Show the way out"<<endl
      <<"0 - Exit program"<<endl
      <<"> ";
  while(ret<0 || ret>3){ // 1   the UI loop
    cin>>ret;
    if(ret<0 || ret>3){
      cout<<"Invalit entry, try again: ";
    }
    cin.ignore(100, '\n');
  }
  return ret;
}

int main(int argc, char* argv[]){  // 1    the main signature
  int choice = -1;
  char color[41] = "";
  DStack doors;
  if(argc != 3){           // 1 the greeting display
    cout<<"Usage:$ pathway FirstName LastName <ENTER>"<<endl;
    choice = 0;
  }
  else{
    cout<<"Hello "<< argv[1]<<" "<<argv[2]<<", welcome to the pathway program."<<endl;
  }
  while(choice){                // 1 the UI loop and selection
    switch(choice = menu()){
    case 1:                     //1 using stack's push
      cout<<"Door Color: ";
      cin>>color;
      doors.push(color);
      break;
    case 2:
      doors.pop(color);      // 1 using stack's pop and message
      cout<<"Go out through the "<<color<<" door"<<endl;
      break;
    case 3:                  // 1 poping stack empty and message
      cout<<"way out through the doors in following order: "<<endl;
      for(int n = 1 ;!doors.isEmpty();n++){
        doors.pop(color);
        cout<<n<<": "<<color<<endl;
      }
      cout<<"You are out now!"<<endl;
      break;
    case 0:  // 1 exiting program and message
      cout<<"Goodbye "<<argv[1]<<", I hope you have found the treasure"<<endl;
    }
  }
  return 0;
}