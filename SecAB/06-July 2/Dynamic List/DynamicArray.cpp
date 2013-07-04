#include <iostream>

class DynamicArray
   {
   private:
      unsigned int _alocSize;
      unsigned int _curSize;
      int* _data;
   protected:
      void resize()
         {
         int* t = _data;

         _data = new int[_alocSize*=2];

         for(unsigned int i = 0; i < _curSize; i++)
            _data[i] = t[i];
         }

   public:
      DynamicArray(unsigned int alocSize = 8, int* data = 0, unsigned int size = 0)
         {
         _data = new int[alocSize];
         _alocSize = alocSize;
         _curSize = size;

         if(data)
            {
            unsigned int tSize = size ? size : alocSize;

            while(tSize--)
               _data[tSize] = data[tSize];
            }
         }

      void push_back(int d)
         {
         if(_curSize == _alocSize)
            resize();

         _data[_curSize++] = d;
         }

      //unsafe if out side of range
      int& operator[](unsigned int index)
         {
         return _data[index];
         }

      unsigned int size() {return _curSize;}
   };

void main()
   {
   DynamicArray vector;
   for(unsigned int i = 0; i < 1000; i++)
      vector.push_back(i);

   for(unsigned int i = 0; i < vector.size(); i++)
      std::cout << "Element " << i << " is: " << vector[i] << "\n";

   return;
   }