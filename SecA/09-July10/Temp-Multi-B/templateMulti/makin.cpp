#include "singleton.h"
#include "DoublyLinkedList.h"
#include "vector.h"
#include "DragonInh.h"

template<class T>
Singleton<T>* Singleton<T>::self = 0;

int main()
{
	DoublyLinkedList<int> a;
	a.pushBack(3);
	a.pushBack(4);

	DoublyLinkedList<int>::getPtr()->pushBack(5);

	Vector<float, 3> v3;
	Vector<int, 5> i5;
	Vector<char> c3;
	Vector<> f3;

	a.goFront();
	for(auto i = 0; i < 3; i++)
	{
		std::cout << a.getValue() << "\n";
		try{
			a.goNext();}
		catch(...)
		{

		}
	}
	int rr;
	std::cin >> rr;
}