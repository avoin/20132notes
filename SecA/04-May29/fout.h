#ifndef __FS__FOUT_H__
#define __FS__FOUT_H__

class Output{
public:
  Output& operator<<(const char* str);
  Output& operator<<(int val);
};
extern Output fout;
#endif