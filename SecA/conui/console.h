#ifndef _FS_CONSOLE_H_
#define _FS_CONSOLE_H_

#include "bconsole.h"


namespace cui{


    class Console: public bio::BConsole{

    public:
      void dspstr(const char* str, int row, int col, int len = 0);
    };

    extern Console console;
}















#endif