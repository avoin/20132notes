#include "console.h"

using namespace cui;

void prnbox(int row, int col, bool clear = false){
  console.dspstr(clear? "":"*****************", row, col, 17);
  console.dspstr(clear? "":"*****************", row +1, col, 17);
  console.dspstr(clear? "":"*****************", row + 2, col, 17);
}

int main(){
  bool done = false;
  int row = 0;
  int col = 0;
  int key;
  while(!done){
    prnbox(row, col);
    key = console.getKey();
    prnbox(row, col, true);
    switch(key){
    case DOWN:
      row++;
      break;
    case UP:
      row--;
      break;
    case RIGHT:
      col++;
      break;
    case LEFT:
      col--;
      break;
    case ESCAPE:
      done = true;
      break;
    }
  }
  return 0;
}