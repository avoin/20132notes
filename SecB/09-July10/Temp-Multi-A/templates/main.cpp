#include "DoublyLinkedList.h"
#include "vector.h"



int main()
   {
   DoublyLinkedList<> a;
   Vector<int, 5> v;
   Vector<> fv;
   Vector<int> iv;

   try
   {
	   DoublyLinkedList<>::getPtr()->pushBack(3);
	   a.pushFront(1);
	   a.goFront();
	   a.goNext();
	   std::cout << a.getValue();
   }
   catch(IteratorException a)
   {
	   std::cout << a.message;
   }
   catch(Exception a)
   {
	   std::cout << a.message;
	   return 1;
   }

   char i;
   std::cin >> i;
   return 0;
   }