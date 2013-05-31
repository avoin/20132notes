#include <cstdio>
using namespace std;


class Output{
public:
  Output& operator<<(const char* str){
    printf(str);
    return *this;
  }
  Output& operator<<(int val){
    printf("%d", val);
    return *this;
  }
};

int main(){
  Output fout;
  fout<<"this cookie is "<<2<<" Dollars and I want to buy "<<10<<" of them\n";
  return 0;
}
