#include <iostream>
#include <string>
using namespace std;
class Str{
  char* _data;
public:
  Str(const char* str=""){
    _data = new char[strlen(str)+1];
    strcpy(_data, str);
  }
  ostream& prn(ostream& os)const{
    return os<<_data;
  }
  ~Str(){
    delete[] _data;
  }
};
ostream& operator<<(ostream& os, const Str& S){
  return S.prn(os);
}

int main(){
  Str S = "I am in oop344";
  cout<<S<<endl;
  return 0;
};
