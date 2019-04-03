#include <stdio.h>
#include <stdlib.h>
//The Fibonacci sequence
//0 1 1 2 3 5 8 13 21

#define MAX_SIZE  100

void Fibonacci(int *fibonacci_array, int nums);

void main()
{
	int i;
	int *Fibonacci_array;

	Fibonacci_array = (int *)malloc(sizeof(int)*MAX_SIZE);
	Fibonacci(Fibonacci_array, MAX_SIZE);

	for(i=0; i<MAX_SIZE; i++){
		printf("%d\n", Fibonacci_array[i]);
	}
	
	free(Fibonacci_array);
	return ;
}

void Fibonacci(int *fibonacci_array, int nums)
{
	int *array;
	int temp;
	int temp_next=1, temp_prev=0;

	array = fibonacci_array;
	array[0] = 0;
	array[1] = 1;

	for(i=2;i<nums; i++){
		temp = temp_next + temp_prev;
		temp_prev = temp_next;
		temp_next = temp;
		
		array[i] = temp_next;
	}
	
	return ;
}
