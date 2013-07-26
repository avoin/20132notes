#include <string>
#include <iostream> 

struct A 
{

	unsigned a :5;
	unsigned   :0;
	unsigned c :6;
};



class Mask
{
private:
	unsigned char data;
protected:
public:
	Mask(unsigned char d = 0) {data = d;}
	bool compare(unsigned char c)
	{
		return (data & c) == c;
	}
	bool compare(const Mask& c)
	{
		return compare(c.data);
	}

	void circShiftRight()
	{
		auto d = &data;
		data = (data >> 1) | (data << 7);
	}

	void circShiftLeft()
	{
		data = (data << 1) | (data >> 7);
	}

	char xor(unsigned char a)
	{
		return data ^ a;
	}
};

int main()
{
	std::string a = "This is a test";
	Mask key(4);

	std::cout << "1) " << a << std::endl;

	for(auto j = 0; j < 42; j++)
	{
		for(auto i = 0; i < a.size(); i++)
		{
			a[i] = key.xor(a[i]);
		}
		key.circShiftRight();
		std::cout << j + 2 << ") " << a << std::endl;
	}
	
	for(auto j = 0; j < 42; j++)
	{
		key.circShiftLeft();
		for(auto i = 0; i < a.size(); i++)
		{
			a[i] = key.xor(a[i]);
		}
		
		std::cout << j + 2 << ") " << a << std::endl;
	}

	return 0;
}
