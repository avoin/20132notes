

template <class T>
class Singleton
{
private:
	static Singleton<T>* self;
public:
	static T* getPtr() {return (T*)self;}
	Singleton()
	{
		if(self)
			throw(0);
		self = this;
	}
};