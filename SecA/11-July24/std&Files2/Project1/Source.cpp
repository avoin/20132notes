#include <queue>
#include <iostream>
#include <vector>

struct test
{
	int a, b, c;
};

int main()
{
	std::vector<float> a;
	a.push_back(1.0f);
	a.push_back(3.0f);
	a.push_back(2.0f);

	char* ref = 0;
	int b = 1;
	int i;
	i = b++, b++, 4;
	
	for(auto f = a.begin(), end = a.end(); f < end; f++, ref++)
	{
		std::cout << *f << std::endl;
	}

	auto found = std::find(a.begin(), a.end(), 2.0f);
	std::sort(a.begin(), a.end());

	std::vector<test> tt;
	tt.push_back(test());

	std::sort(tt.begin(), tt.end());
	std::binary_search(a.begin(), a.end(), 10);

	std::queue<int> iq;
	iq.push(1);
	iq.push(3);
	iq.push(5);

	while(!iq.empty())
	{
		std::cout << "val is: " << iq.front() << std::endl;
		iq.pop();
	}

	return 0;
}