#include <stdio.h>

void main(void)
{
	int size, sum;

	printf("Enter the size of the array: ");
	scanf("%d", &size);
	printf("Size of the array: %d\n", size);

	int array[size];

	for (int i = 0; i < size; i++)
		scanf("%d", &array[i]);
	for (int j = 0; j < size; j++)
	{
		printf("%d, ", array[j]);
		sum += array[j];
	}
	printf("\nThe sum of all values in this array is: %d", sum);
}

// write a program to read elements in an array and find the sum of the elements
