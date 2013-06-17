#include <iostream>
#include <cstring>
using namespace std;
class Name{
  char _first[21];
  char _last[41];
public:
  Name(const char* f, const char* last){
    strcpy(_first, f);
    strcpy(_last, last);
  }
  operator const char*(){
    static char fullname[62];
    strcpy(fullname, _first);
    strcat(fullname, " ");
    strcat(fullname, _last);
    return fullname;
  }
  operator int(){
    return strlen(*this);
  }
};
int main(){
  Name N("Fred", "Soley");
  cout<<(const char*)N<<" "<<(int)N<<"      "<<int(N)<<endl;
  return 0;
}