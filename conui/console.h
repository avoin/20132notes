#ifndef _FS_CONSOLE_H_
#define _FS_CONSOLE_H_

#include "bconsole.h"


namespace cui{


    class Console: public bio::BConsole{
    public:
        void strdsp(const char *str, int row, int col, int len = 0);
        int display(const char *str, int row, int col, int len = 0, bool shift = false);
        int  edit(char *str, int row, int col, int fieldLength, int maxStrLength, 
         bool* insertMode, int* strOffset, int* curPosition,  
         bool IsTextEditor = false, bool ReadOnly = false);
    };
    Console& operator>>(Console&, int&);
    Console& operator<<(Console&, char);
    Console& operator<<(Console&, const char*);
}















#endif