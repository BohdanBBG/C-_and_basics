#include "Quick_sort.h"

template<typename T>
void Sort(T* arr, int left, int right)
{
	T pivot=arr[left];
	T help = T();
	int saveLeft = left;
	int saveRight = right;

	while (left < right)
	{
		while ((arr[right] >= pivot) && (left < right))
		{
			right--;
		}
		if (left != right)
		{
			arr[left] = arr[right];
			left++;
		}
		while ((arr[left] <= pivot) && (left < right))
		{
			left++;
		}
		if (left != right)
		{
			arr[right] = arr[left];
			right--;
		}
		
	}
	 
	arr[left] = pivot;
	pivot = left;
	left = saveLeft;
	right = saveRight;
	if (right > pivot) { Sort(arr, pivot+1, right); }
	if (left < pivot) { Sort(arr, left, pivot - 1); }
}
