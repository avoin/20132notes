
template <class T = float, unsigned int N = 3>
class Vector
{
private:
	T data[N];
public:
	Vector() {}

	void increment()
	{
		for(auto i = 0; i < N; i++)
			data[i]++;
	}
};