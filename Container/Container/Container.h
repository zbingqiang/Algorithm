#pragma once

template<typename T> class Container
{
public:
	virtual void push(const T &) = 0;
	virtual void pop() = 0;
	virtual const T & begin() = 0;
	virtual const T & end() = 0;
	virtual size_t size() = 0;
};

