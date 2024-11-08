#pragma once
#include <cstddef>

template <class T>
class DynamicArr 
{
	static const size_t initialCapacity_ = 2;	
	static const double coeff_;					

	size_t size_ = 0;
	size_t capacity_ = initialCapacity_;
	T* arr_;

public:
	DynamicArr();
	explicit DynamicArr(size_t size, T element = 0);
	DynamicArr(const DynamicArr<T>& rhs);
	DynamicArr(DynamicArr<T>&& rhs);
	~DynamicArr();
	size_t size() const;
	size_t capacity() const;
	void push_back(T elem);
	T& operator[](size_t index);
	const T& operator[](size_t index) const;
	DynamicArr<T>& operator=(const DynamicArr& rhs);
	DynamicArr<T>& operator=(DynamicArr&& rhs);
};

void fun();