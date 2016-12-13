#ifndef GENERIC_HEAP_SINGLETON_H
#define GENERIC_HEAP_SINGLETON_H


template<typename T>
class GenericHeapSingleton
{
public:
	static T* create()
	{
		// Should be locked with a mutex in a multi-threading context
		if(!_instance)
		{
			_instance = new T;
		}
		return _instance;
	}
	
	static void release()
	{
	// Should be locked with a mutex in a multi-threading context
		if(_instance)
		{
			delete _instance;
			instance = 0;
		}
	}

protected:
	static T *_instance;
	GenericHeapSingleton() {}
	~GenericHeapSingleton() {}
	GenericHeapSingleton(const GenericHeapSingleton<T>& copy) {}
	GenericStackSingleton& operator = (const GenericStackSingleton<T>& copy) {}
};

template<typename T> T* GenericHeapSingleton::<T> _instance = 0;

#endif
