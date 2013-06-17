#include <iostream>
#include <string>
using namespace std;
struct Elem{
  static int _en;
  int _data;
  Elem():_data(_en+=2){}
  int data(){return _data;}
  static int en(){return _en;}
};
int Elem::_en = 0;
int foo(){
  static int a = 10;
  return ++a;
}
int main(){
  int i = 0;
  cout<<"W1"<<endl;
  for(;i<3;i++, cout<<foo());
  cout<<endl;
  Elem E[8];
  cout<<"W2"<<endl<<E[4].data()<<endl<<Elem::en()<<endl;
  return 0;
};
/* output
W1
111213
W2
10
16
*/