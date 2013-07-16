#include <iostream>

template <class T>
class A
{
	T a;
public:
	T setget(T i);

	template <class R>
	void doStuff(R i) const;

	template <class E>
	void oneMoreTime(E i) const;

};

class B : virtual public A<int> {};