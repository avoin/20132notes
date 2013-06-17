#include <iostream>
#include <string>
using namespace std;
struct Elem{
  static int _en;
  int _data;
  Elem():_data(++_en){}
  int data(){return _data;}
  static int en(){return _en;}
};
int Elem::_en = 0;
int foo(){
  static int a = 20;
  return a+=2;
}
int main(){
  int i = 0;
  cout<<"W1"<<endl;
  for(;i<3;i++, cout<<foo());
  cout<<endl;
  Elem E[10];
  cout<<"W2"<<endl<<E[5].data()<<endl<<Elem::en()<<endl;
  return 0;
};
/*output
W1
222426
W2
6
10
*/