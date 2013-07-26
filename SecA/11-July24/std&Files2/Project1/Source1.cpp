#include <fstream>
#include <iostream>

class test
{
private:
	int a, b, c;
	float r, g, d;
public:
	test()
	{
		a = b = c = r = g = d = 10;

	}

	void change()
	{
		a++, b+=2, c=111;
	}
};



int main()
{
	std::fstream a("Source1.cpp", std::ios::in | std::ios::out|std::ios::ate);

	//a.seekg(0,std::ios::end);
	auto pos = a.tellg();
	a.seekg(0, std::ios::beg);
	//a.seekg(10);
	for(auto i = 0; i < pos; i++)
		{
		char c;
		a.get(c);
		//char c[100];
		//a.getline(c, 100);
		std::cout << c;
		}
	a.close();


	test ttt;

	ttt.change();

	std::fstream st("data.st", std::ios::out | std::ios::binary);
	
	st.write((char*)(&ttt), sizeof(ttt));

	if(st)
	{
		std::cout << "Still working" << std::endl;
	}

	st.close();

	std::fstream inp("data.st", std::ios::in | std::ios::out | std::ios::binary);

	test t2;

    inp.read((char*)(&t2), sizeof(t2));

	if(inp)
	{
		std::cout << "Still working" << std::endl;
	}

	return 0;
}