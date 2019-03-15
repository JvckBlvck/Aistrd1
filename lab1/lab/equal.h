#pragma once
#include "list.h"

template <class T>
bool equal_arrays(T*array1, size_t size1, T*array2, size_t size2)
{
	if (size1 != size2)
		return false;
	for (size_t i = 0; i < size1; i++)
		if (array1[i] != array2[i])
			return false;
	return true;
}

template <class T>
 bool equal_lsits(list<T> list1, list<T> list2)
{
	 if (list1.get_size() != list2.get_size())
		 return false;
	 for (size_t i = 0; i < list1.get_size(); i++)
		 if (list1.at(i) != list2.at(i))
			 return false;
	 return true;
}
