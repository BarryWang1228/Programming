#include <stdio.h>

int reverse(int x)
{
    /* To avoid overflow while calculate, use double size int to save the input value. */
	long long out = 0, xx = (long)x;
    int MAX_INT = 0x7FFFFFFF, MIN_INT = 0x80000000;
    /* Use while loop to go-through all the input number of bits */
    while(xx)
    {
        out = out * 10 + xx % 10;
        xx = xx / 10;
    }
    /* Checking if the reverse value is overflow of int(4 bytes) */
    if( out <= MAX_INT && out >= MIN_INT )
    {
		return (int)out;
	}
    else
    {
		return 0;
	}
}

int main()
{
   int input_num, rev_num;
   printf("Please input a int value: \n");
   scanf("%d", &input_num);
   rev_num = reverse(input_num);
   printf("The reverse of the input number is: %d\n", rev_num);
   system("PAUSE");
   return 0;
}
