#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    /* Checking if the input array is NULL or only one content */
	if ( (nums == NULL) | (numsSize == 1) )
    {
        return NULL;
    }
	/* i and j are two index */
    int i = 0, j;
    int* temp = (int*)malloc(2*sizeof(int));
    for ( i; i < numsSize; i++)
    {
        for ( j = i + 1; j < numsSize; j++)
        {
            /* Checking if the sum of array[i] + array[j] = target */
			if ( nums[i] + nums[j] == target )
            {
                temp[0] = i;
                temp[1] = j;				
                return temp;
            }
        }
    }
    return NULL;
}

int main()
{
    int array[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90};
    // Calculate the array size
    int array_size = sizeof(array) / sizeof(int);
    int target = 170;
    // Find which two numbers in array can meet the target by their Sum
    int* result = twoSum( array, array_size, target);
    if( result == NULL )
    {
    	printf("There can not find ant two input number with their sum equal to target!\n");
	}
	else
	{
		printf("Result: \n    array[%d] + array[%d] = %d + %d = %d \n\n\n", result[0], result[1], array[result[0]], array[result[1]], target );
	}
	system("PAUSE");
	// Retune the resource for system
    free(result);
	return 0;
}
