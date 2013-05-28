#include <iostream>
using namespace std;

#define make(v, t)  t v
#define makeNset(v, t, val) t v = val
#define loop(n, i)   for(i=0;i<n;i++) 

int main(){
  make(i, int) = 10;
  makeNset(j, int, 20);
  loop(j, i){
    cout<<i<<endl;
  }
  return 0;
}