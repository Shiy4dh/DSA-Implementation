#include <iostream>
#include "selectionSort.h"

int main()
{
	int arr[]{ 3,5,1,0,20,79,4 };
	int length{ sizeof(arr) / sizeof(arr[0]) };

	sort(arr, length);
	print(arr, length);
	
	return 0;
}
