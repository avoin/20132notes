#include <iostream>
using namespace std;

class IntArr{
  int* _data;
  unsigned int _size;
public:
  IntArr(unsigned int size):_size(size){
    _data = new int[_size];
  }
  int& operator[](unsigned int index){
    if(index >= _size){
      unsigned int newsize = index < 1024 ? index * 2 : index + 1024;
      int* temp = new int[newsize];
      for(int i=0;i<_size;i++){
        temp[i] = _data[i];
      }
      delete[] _data;
      _data = temp;
      _size = newsize;
    }
    return _data[index];
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
    I[i] = i*10;
  }
  for(i=0;i<I.Size();i++){
    cout<<I[i]<<" ";
  }
  cout<<endl;
  return 0;
}