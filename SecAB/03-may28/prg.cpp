#include <iostream>
using namespace std;
class Thing{
  static int _cnt;
  int _data;
public:
  Thing(int data = -1){
    set(data);
    _cnt++;
  }
  void set(int data){
    _data = data;
  }
  ostream& prn(ostream& os){
    return os<<"data: "<<_data<<" and total of "<<_cnt<<" instances";
  }
  static void prncnt(){
    cout<<"number of instances: "<<_cnt<<endl;
  }
  const int* addressOfData(){
    return &_data;
  }
  ~Thing(){
    _cnt--;
  }
};
int Thing::_cnt = 0;
ostream& operator<<(ostream& os,const Thing& t){
  t.set(5000);
  return t.prn(os);
}
int main(){
  int* p;
  Thing another(300);
  {
    Thing t[10];
    cout<<another<<endl;
    Thing::prncnt();
  }
  cout<<another<<endl;
  another.prncnt();
  // p = another.addressOfData(); compile error
  return 0;
}