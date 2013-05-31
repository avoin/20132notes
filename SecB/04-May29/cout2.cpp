#include <cstdio>
using namespace std;


class Output{
public:
  Output& print(const char* str){
    printf(str);
    return *this;
  }
  Output& print(int val){
    printf("%d", val);
    return *this;
  }
};

int main(){
  Output fout;
  fout.print("this cookie is ").print(2).print(" Dollars and I want to buy ").print(10).print(" of them\n");
  return 0;
}
