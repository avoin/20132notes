#include <iostream>
using namespace std;
class Thing{
  static int _cnt;
  int _data;
public:
  Thing(int data = -1){
    _data = data;
    _cnt++;
  }
  ostream& prn(ostream& os){
    return os<<"data: "<<_data<<" and total of "<<_cnt<<" instances";
  }
  ~Thing(){
    _cnt--;
  }
};
int Thing::_cnt = 0;
ostream& operator<<(ostream& os, Thing& t){
  return t.prn(os);
}
int main(){
  Thing another(300);
  {
    Thing t[10];
    cout<<another<<endl;
  }
  cout<<another<<endl;
  return 0;
}