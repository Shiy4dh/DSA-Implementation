#include "selectionSort.h"

void print(int* arr, int lenght)
{
	for (int i{ 0 };i < lenght;i++)
	{
		std::cout << arr[i] << ' ';
	}
}
void swap(int& x, int& y)
{
	int temp{ x };
	x = y;
	y = temp;

}
void sort(int* arr, int length)
{
	// loops through the array length - 1 times
	// because the last value does not have to be swapped
	for (int index{ 0 };index < length - 1;index++)
	{
		// store the first value of array as the smallest value initially
		int minimumValue{ index };

		// checks the first element with the rest of the elements
		for (int secondIndex{ index + 1 }; secondIndex < length;secondIndex++)
		{
			// if a much smaller value is found, minimum is changed to the current min value
			if (arr[secondIndex] < arr[index])
			{
				minimumValue = secondIndex;
			}
		}
		// swaps two value if the smallest value is not in the first Index position
		if (minimumValue != index)
		{
			swap(arr[index], arr[minimumValue]);
		}
	}
}
