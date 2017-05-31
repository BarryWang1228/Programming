#include <stdio.h>
 
int reverse(int); 
 
int main()
{
   int n, rev;
   scanf("%d", &n);
 
   rev = reverse(n);
 
   printf("%d\n", rev);
 
   return 0;
}
 
int reverse(int x) {
	static int Reminder, Reverse = 0;

	if( x == 0 )
	{
		return Reverse;
	}
	else
	{
		Reminder = x % 10;
		Reverse = 10 * Reverse + Reminder;
		reverse( x / 10 );
	}
}
