#include <cstdio>
using namespace std;


class Output{
public:
  void print(const char* str){
    printf(str);
  }
  void print(int val){
    printf("%d", val);
  }
};

int main(){
  Output fout;
  fout.print("this cookie is ");
  fout.print(2);
  fout.print(" Dollars and I want to buy ");
  fout.print(10);
  fout.print(" of them\n");
  return 0;
}
