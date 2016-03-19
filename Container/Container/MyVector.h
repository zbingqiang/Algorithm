#pragma once
#include "Container.h"

static const size_t _step = 100;    //ÿ�η����������С

template<typename T> class MyVector:public Container<T>
{
public:

	MyVector()
	{
		_size = 0;
		_cap = _step;
		buf = 0;
		re_capacity(_cap);
	}

	~MyVector()
	{
		free(buf);
	}


	void re_capacity(size_t s)  //��������
	{
		if (!buf)
			buf = (T*)malloc(sizeof(T)*s);
		else
			buf = (T*)realloc(buf, sizeof(T)*s);
	}

	void push(const T& v)
	{
		if (_size >= _cap)
			re_capacity(_cap +=_step);
		buf[_size++] = v;
	}

	void pop()
	{
		if (_size)
			_size--;
	}

	const T& begin()
	{
		return buf[0];
	}

	const T& end()
	{
		if (_size)
			return buf[_size - 1];
	}

	size_t size()
	{
		return _size;
	}

	const T& operator[] (size_t i)  //�±���ʲ�����
	{
		if (i >= 0 && i < _size)
			return buf[i];
	}

private:
	size_t _size ;    //���������ݴ�С
	size_t _cap ;     //�ѷ���������С
	T* buf ;       //�׵�ַ�����ڴ����ڴ�

};

