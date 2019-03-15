#pragma once
#include "list.h"

using namespace std;

template<typename T>
bool equal_lists(list<T> list1, list<T> list2)
{
	size_t size1, size2;
	list1.get_size(&size1);
	list2.get_size(&size2);
	if (size1 != size2)
		return false;
	T data1, data2;
	int check1, check2;
	for (size_t i = 0; i < size1; i++)
	{
		list1.at(i, &data1, &check1);
		list2.at(i, &data2, &check2);
		if (data1 != data2)
			return false;
	}
	return true;
}

