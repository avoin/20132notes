#include <iostream>
using namespace std;

class Counter{
  int _step;
public:
  Counter(int step = 1){
    _step = step;
  }
  int operator[](int index){
    return _step * index;
  }
};

int main(){
  Counter C(5);
  cout<<C[3]<<endl;
  return 0;
}