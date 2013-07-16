#include "templates.h"

template <class T>
T A<T>::setget(T i)
{
	return a = i;
}

template <class T>
template <class R>
void A<T>::doStuff(R i) const
	{ std::cout << i << "\n"; }

template <class T>
template <class R>
void A<T>::oneMoreTime(R i) const
{
	std::cout << "variable is " << i << "\n";
}

/* Partial specialization does not work in C++, must use overloaded functions instead
template <class T>
void A<T>::oneMoreTime<int>(int i) const
{
	std::cout << "int is " << i << "\n";
}

template <class T>
void A<T>::oneMoreTime<float>(float i) const
{
	std::cout << "float is " << i << "\n";
}
*/

template class A<int>;
template void A<int>::doStuff<float>(float i) const;
template void A<int>::doStuff<int>(int i) const;
template void A<int>::oneMoreTime<int>(int i) const;