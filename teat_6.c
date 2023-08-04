#define _CRT_SECURE_NO_WARNINGS 0
#include<stdio.h>;

int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a % 2 == 0)
        {
            printf("Even\n");
        }
        else {
            printf("Odd\n");
        }
    }
    return 0;
}