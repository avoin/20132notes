#include "templates.h"

int main()
{
	A<int> a;
	a.setget(10);
	a.doStuff(1.0f);
	a.doStuff<int>(1.0);
   a.oneMoreTime(1);
   return 0;
}