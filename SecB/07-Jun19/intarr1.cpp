#include <iostream>
using namespace std;

class IntArr{
  int* _data;
  unsigned int _size;
public:
  IntArr(unsigned int size):_size(size){
    _data = new int[_size];
  }
  int& Elem(unsigned int index){
    return _data[index%_size];
  }
  unsigned int Size()const{
    return _size;
  }
  virtual ~IntArr(){
    if(_data){
      delete[] _data;
    }
  }
};


int main(){
  IntArr I(5);
  int i;
  for(i=0;i<7;i++){
    I.Elem(i) = i*10;
  }
  for(i=0;i<I.Size();i++){
    cout<<I.Elem(i)<<" ";
  }
  cout<<endl;
  return 0;
}