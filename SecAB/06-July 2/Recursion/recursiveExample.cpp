#include <iostream>

struct Node
   {
   int data;
   Node* childA;
   Node* childB;

   Node() : childA(nullptr), childB(nullptr) {}
   };

class BTree
   {
   private:
      Node* root;
   protected:
      int _getSumFrom(Node* r) //recursive function
         {
         if(!r) return 0;
         int v = r->data;
         v += _getSumFrom(r->childA);
         v += _getSumFrom(r->childB);
         return v;
         }
   public:
      BTree() : root(nullptr) {}
      
      void setRoot(Node* a) {root = a;}

      int getSum()
         {
         return _getSumFrom(root);
         }
   };

void main()
   {
   Node a,b,c,d,e,f;

   a.data = 5;
   a.childA = &b;
   a.childB = &c;

   b.data = 3;
   b.childA = &d;
   b.childB = &e;

   c.data = 5;

   d.data = 8;
   
   e.data = 9;
   e.childB = &f;

   f.data = 11;

   BTree tree;
   tree.setRoot(&a);

   std::cout << "Sum of tree is: " << tree.getSum();
   }