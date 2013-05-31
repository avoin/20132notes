#include <cstdio>
using namespace std;
#include "fout.h"
  Output& Output::operator<<(const char* str){
    printf(str);
    return *this;
  }
  Output& Output::operator<<(int val){
    printf("%d", val);
    return *this;
  }

  Output fout;