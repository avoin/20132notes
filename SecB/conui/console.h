#ifndef _FS_CONSOLE_H_
#define _FS_CONSOLE_H_

#include "bconsole.h"


namespace cui{


    class Console: public bio::BConsole{
      static int _curpos;
      static int _stroff;
      static bool _insertMode;

    public:
      void dspstr(const char* str, int row, int col, int len = 0);
        int  line(char *str, int row, int col, int fieldLength, int maxStrLength, 
        int& strOffset=_stroff, int& curPosition=_curpos,  
         bool InTextEditor = false, bool ReadOnly = false, bool& insertMode=_insertMode );
      static unsigned int _tablsize;
    };
    int Console::_curpos = 0;
    int Console::_stroff = 0;

    extern Console console;
}















#endif