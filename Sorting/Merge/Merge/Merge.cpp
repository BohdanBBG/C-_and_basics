#include "Merge.h"
#include <time.h>
#include <iostream>



template <typename T>
void Sort(T* arr, int left, int right)
{
	T help = T();
	T min = T();
	T* hArr = new T[right];
	int mid = (left + right) / 2;

	if (left >= right) { return; }

	if (( right - left ) == 2 )
	{
		help = arr[left];
		arr[left] = arr[left+1];
		arr[left+1] = help;
		return ;
	}


	Sort(arr, left, mid);
	Sort(arr, mid + 1, right);

	min = arr[left];
	for (int i = left; i <right ; i++)
	{
		for (int j = left; i < right-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				help = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = help;
			}
		}
	}

	/*for (int i = left; i <= right; i++)
	{
		hArr[i] = arr[i];
	}

	int i = left, j = mid + 1;
	for (int k = left; k <= right; k++) {

		if (i > mid) {
			arr[k] = hArr[j];
			j++;
		}
		else if (j > right) {
			arr[k] = hArr[i];
			i++;
		}
		else if (hArr[j] < hArr[i]) {
			arr[k] = hArr[j];
			j++;
		}
		else {
			arr[k] = hArr[i];
			i++;
		}
	}*/

	/*int begin = left, end = mid + 1;
	for (int j = left; j <= right; j++)
	{
		if ((begin <= mid) && ((end > right) || (arr[begin] < arr[end])))
		{
			arr[j] = hArr[begin];
			begin++;
		}
		else
		{
			arr[j] = hArr[end];
			end++;
		}
	}*/
}


