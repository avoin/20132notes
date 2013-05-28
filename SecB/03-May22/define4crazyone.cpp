#include <iostream>
using namespace std;

#define make(v, t) t v
#define makeNset(var, t, val) t var = val
#define loop(n, i)  for(i=0;i<n;i++)


int main(){
  make(i, int) = 5;
  makeNset(b, int, 10);
  loop(b, i){
    cout<<i<<endl;
  }
  return 0;
}