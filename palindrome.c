#include<stdio.h>
int main()
{
	int n, num, rev, rem;
    printf("Enter the Number: ");
    scanf("%d", &n);
    num = n;
    while( n > 0)
    {
    	rem = n % 10;
        rev = rev*10 + rem;
        n = n / 10;
	}
    if( num == rev)
    {
        printf("The number is palindrome");
    }
    else
	{
        printf("The number is not polindrome");
    }
    return 0;
}
