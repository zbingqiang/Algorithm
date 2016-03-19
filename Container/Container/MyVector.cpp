//#include<iostream>
//#include "MyVector.h"
//
//static const size_t _step = 100;    //每次分配的容量大小
//
//template <typename T> MyVector<T>::MyVector()
//{
//	_size = 0;
//	_cap = _step;
//	buf = 0;
//	re_capacity(_cap);
//}
//
//template<typename T> MyVector<T>::~MyVector()
//{
//	free(buf);
//}
//
//template<typename T> void MyVector<T>::re_capacity(size_t s)
//{
//	if (!buf)
//		buf = (T*)malloc(sizeof(T)*s);
//	else
//		buf = (T*)realloc(buf, sizeof(T)*s);
//}
//
//template<typename T> void MyVector<T>::push(const T& v)
//{
//	if (_size >= _cap)
//		re_capacity(_cap += step);
//	buf[_size++] = v;
//}
//
//template<typename T> void MyVector<T>::pop()
//{
//	if (_size)
//		_size--;
//}
//
//template<typename T> const T& MyVector<T>::begin()
//{
//	return buf[0];
//}
//
//template<typename T> const T& MyVector<T>::end()
//{
//	if (_size)
//		return buf[_size - 1];
//}
//
//template<typename T> size_t MyVector<T>::size()
//{
//	return _size;
//}
//
//template<typename T> const T& MyVector<T>::operator[] (size_t i)
//{
//	if (i >= 0 && i < _size)
//		return buf[i];
//}