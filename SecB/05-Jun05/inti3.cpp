#include <iostream>
using namespace std;

class Base{
  int& _data;
public:
  Base(int& data): _data(data){}
 /* Base(int data){  can't do this because _data must be initialized
    _data =data;
  }*/
  ostream& print(ostream& os)const{
    os<<"Base: "<<_data;
    return os;
  }
};
ostream& operator<<(ostream& os, const Base &B){
  return B.print(os);
}

int main(){
  int value  = 20;
 // Base B(value);  potato
  Base B = value;  // potaato
  cout<<B<<endl;
  value = 30;
  cout<<B<<endl;
  return 0;
}