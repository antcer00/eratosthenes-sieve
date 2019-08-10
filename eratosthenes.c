#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void eratosthenes_sieve(unsigned long int *);

int main(int argc, const char *argv[])
{
	unsigned long int max;
	
	if(argc != 2)
	{
		printf("Insert one integer as argument.\n");
		return 0;
	}
	
	sscanf(argv[1], "%lu", &max);
	printf("List of prime numbers smaller than %lu:\n", max);
	eratosthenes_sieve(&max);
	
	return 0;
}

void eratosthenes_sieve(long unsigned int *n)
{
	unsigned long int i, j;
	unsigned long int max = *n;
	_Bool *array;
	array = malloc(max * sizeof(_Bool));

	if (array == NULL) { 
        	printf("Memory not allocated.\n"); 
    	} 

	for (i = 0; i <= max; i++)
		array[i] = 1;
	
	for (i = 2; i < sqrt(max); i++)
		if (array[i] == 1)
			for (j = i*i; j <= max; j += i)
				array[j] = 0;

	for (i = 2; i <= max; i++)
		if (array[i] == 1)		
			printf("%lu ", i);
	
	printf("\n");
}