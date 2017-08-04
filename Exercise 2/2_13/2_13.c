#include <stdio.h>
void main()
{
    int n, rev = 0, rem, n1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    n1 = n;

    while( n1!=0 )
    {
        rem = n1%10;
        rev = rev*10 + rem;
        n1 =n1/10;
    }

    if (n == rev)
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
    
}
