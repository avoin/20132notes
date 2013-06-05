#include <iostream>
using namespace std;

class Base{
  int _data;
public:
  Base(int data){
    _data =data;
  }
  ostream& print(ostream& os)const{
    os<<"Base: "<<_data;
    return os;
  }
};
ostream& operator<<(ostream& os, const Base &B){
  return B.print(os);
}

class Derived:public Base{
  int _data;
public:
  Derived(int data):Base(data), _data(data){
  }
};

int main(){
 // Base B(20);  potato
  Base B = 20;  // potaato
  cout<<B<<endl;
  return 0;
}