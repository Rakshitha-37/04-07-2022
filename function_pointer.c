#include<stdio.h>

void str_cpy(char *str1, char *str2)
{
    int i;
    for(i = 0; str1[i] != '\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}

int main()
{
    char str1[20];
    char str2[20];
    printf("Enter string: ");
    scanf("%s", str1);
    void (*fptr)(char *, char *) = str_cpy;
    fptr(str1, str2);
    printf("After string copy:\n");
    printf("str2 = %s", str2);
}
