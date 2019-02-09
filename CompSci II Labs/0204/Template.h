#pragma once

template<typename T, int size>
int LinearSearch(T(&array)[size], T x)
{
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == x) return i;
	}
	return -1;
}

template<typename T, int size>
int BinarySearch(T(&array)[size], T x)
{
	int begin = 0;
	int end = size;

	while (begin <= end)
	{
		int middle = (begin + end) / 2;
		if (array[middle] == x) return middle;
		else if (x < array[middle]) end = middle - 1;
		else if (x > array[middle]) begin = middle + 1;
	}
	return -1;
}
