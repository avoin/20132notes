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
  int i;
  for(i=0;i<4;i++){
    cout<<C[i]<<endl;
  }
  return 0;
}

