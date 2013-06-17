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

};
int main(){
  Name N("Fred", "Soley");

  return 0;
}