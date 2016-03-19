#include<iostream>
#include "MyVector.h"

using namespace std;

int main()
{
	MyVector<int> v;
	for (int i = 0; i < 1000; i++)
		v.push(i);
	for (int i = 0; i < 1000; i++)
		cout << v[i] << " ";
	system("pause");
	return 0;
}