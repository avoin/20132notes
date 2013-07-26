#include <fstream>
#include <iostream>

struct test
{
	int a, b, c;
	float d, e, f;
	test() 
	{
		a=b=c=d=e=f=10;
	}
	
	void change()
	{
		a = 19;
		b = 21;
		c = 0;
	}

};

int main()
{
	std::fstream a("Source1.cpp", std::ios::in | std::ios::out);

	/*
	std::ios::in - opens for reading
	std::ios::out - opens for writing
	std::ios::app - opens for writing at the end of the file
	std::ios::trunc - open for writing, deleting the file first
	std::ios::ate - opens at the end of the file
	std::ios::binary - opens as binary file
	*/
	/* this for later
	a.seekg(5);
	a.seekg(0, std::ios::end);
	auto i = a.tellg();
	*/

	char c;
	while(a)
	{
		a.get(c);
		//a.getline(char*);
		//a.read(&c, 100);
		//a.read(&c, 100);

		std::cout << c;
	}
	a.seekg(0, std::ios::beg);
	a.close();

	test ttt;
	ttt.change();

	std::fstream bf("temp.bk", std::ios::out | std::ios::binary);

	bf.write((char*)(&ttt), sizeof(ttt));

	if(bf)
		std::cout << "ITS WORKING" << std::endl;

	bf.close();

	test btt;

	std::fstream bb("temp.bk", std::ios::in | std::ios::binary);

	bb.read((char*)(&btt), sizeof(btt));

	if(bb)
		std::cout << "ITS WORKING" << std::endl;

	bb.close();

	return 0;
}	