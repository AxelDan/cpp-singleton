#ifndef GENERIC_STACK_SINGLETON_H
#define GENERIC_STACK_SINGLETON_H


template<typename T>
class GenericStackSingleton
{
public:
	static T& instance()
	{
		static T _instance;
		return _instance;
	}

protected:
	GenericStackSingleton() {}
	~GenericStackSingleton() {}
	GenericStackSingleton(const GenericStackSingleton<T>& copy) {}
	GenericStackSingleton& operator = (const GenericStackSingleton<T>& copy) {}
};


#endif
