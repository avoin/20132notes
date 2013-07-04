enum Errors
   {
   AT_FRONT,
   AT_BACK,
   LIST_EMPTY
   };

struct DLLNode
   {
   int data;
   DLLNode* next;
   DLLNode* prev;

   DLLNode() : next(nullptr), prev(nullptr) {}
   };

class DoublyLinkedList
   {
   private:
      DLLNode* front;
      DLLNode* back;
      DLLNode* cur;
      unsigned int size;

   protected:
   public:
      //Base constructor and copy constructor (pointers can't persist across copies)
      DoublyLinkedList();
      DoublyLinkedList(const DoublyLinkedList& a);

      //Moves the current pointer to the front or back of the list
      void goFront();
      void goBack();

      //Moves the current pointer to the next or previous item of the list
      void goNext();
      void goPrev();

      //Gets or sets the value within current item
      int getValue() const;
      void setValue(int d);

      //Insert a new node before or after the current item
      void insertBefore(int d);
      void insertAfter(int d);

      //Remove the current item
      void erase();

      //checks if the list is empty
      bool isEmpty() const;

      //returns the size of the list
      unsigned int getSize() const;

      //Add a new item to the beginning or end of the list
      void pushFront(int d);
      void pushBack(int d);

      //Remove the first or last item in the list
      void popFront();
      void popBack();

      //Assignment operator (pointers can't persist across copies)
      DoublyLinkedList& operator=(const DoublyLinkedList& a);

      //Destuctor destroys all nodes in the list
      ~DoublyLinkedList();
   };

