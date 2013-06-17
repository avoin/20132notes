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
  virtual ~Str(){  // 2
    delete[] _data;
  }
  ostream& print(ostream& out)const{  // 2
    return out<<_data;
  }
};
ostream& operator<<(ostream& out, const Str& R){ // 2
  return R.print(out);
}


int main(){
  Str S = "I am in oop344";
  cout<<S<<endl;
  return 0;
};
