#include <iostream>

class iA
{
public:
	virtual void runA() = 0;
};

class iB : public iA
{
public: virtual void runB() = 0;
};

class iC : public iB
{
public: virtual void runC() = 0;
};

template <class T = iA>
class A : public T
{
public: void runA() {std::cout << "runA\n";}
};

template <class T = iB>
class B : public A<T>
{
public: void runB() {std::cout << "runB\n";}
};

template <class T = iC>
class C : public B<T>
{
public: void runC() {std::cout << "runC\n";}
};
