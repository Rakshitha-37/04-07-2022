#include <stdio.h>

int palindrome(int num)
{
    static int rev_num = 0;
    int rem;
    if(num > 0)
    {
        rem = num % 10;
        rev_num = rev_num * 10 + rem;
        palindrome(num/10);
    }
    return rev_num;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int rev_num = palindrome(num);
    if(rev_num == num)
    {
        printf("Number is palindrome\n");
    }
    else
    {
        printf("Number is not alindrome\n");
    }

    return 0;
}

