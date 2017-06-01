#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x)
{
    /* To avoid overflow while calculate, use double size int to save the input value. */
    long out = 0, xx = (long)x;
    int MAX_INT = 0x7FFFFFFF, MIN_INT = 0x80000000;
    /* Use while loop to go-through all the input number of bits */
    while(xx)
    {
        out = out * 10 + xx % 10;
        xx = xx / 10;
    }
    /* Checking if the reverse value is overflow of int(4 bytes) */
    /* In LeetCode Wabside, there seems only accept MIN_INT = 0 */
    /* Not sure if negative value can be Palindrome or not, like -1234554321 ? */
    if( out <= MAX_INT && out >= MIN_INT )
    {
        int aaa = (int)out;
        if( aaa == x )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
    return false;
}



int main()
{
    int input_num, rev_num;
    printf("Please input a int value: \n");
    scanf("%d", &input_num);
    if(isPalindrome(input_num))
    {
        printf("The input value is a Palindrome \n");
    }
    else
    {
        printf("The input value is not a Palindrome \n");
    }
    system("PAUSE");
    return 0;
}
