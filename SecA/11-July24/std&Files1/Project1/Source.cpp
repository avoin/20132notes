#include <queue>
#include <iostream>
#include <vector>

struct test
{
	int a, b, c;
	float d, e, f;
};

int main()
{
	std::queue<int> a;

	a.push(4);
	a.push(2); 
	a.push(9);


	while(!a.empty())
	{
		std::cout << a.front() << std::endl;
		a.pop();
	}


	std::vector<float> b;

	b.push_back(3.0f);
	b.push_back(1.0f);
	b.push_back(6.0f);
	b.push_back(13.0f);
	b.push_back(11.0f);
	b.push_back(16.0f);
	b.push_back(23.0f);
	b.push_back(21.0f);
	b.push_back(26.0f);


	//std::vector<float>::iterator i = b.begin();

	int qq = 2, ww = 6;

	qq = 10, ww++, ww+=3, qq + 2, 12;

	char* cp = 0;

	for(auto i = b.begin(), end = b.end(); i < end; i++, cp++)
	//for(auto i = b.begin(); i != b.end(); i++)
	{
		std::cout << *i << std::endl;
	}

	auto found = std::find(b.begin(), b.end(), 13);

	std::sort(b.begin(), b.end());


	auto bfind = std::binary_search(b.begin(), b.end(), 13);

	/*
	std::vector<test> tv;

	std::sort(tv.begin(), tv.end());
	*/

	return 0;
}