#include<stdio.h>
int main()
{
    int num1 = 0, num2 = 0, ans;
    int sum = 0;
    char numStr[1000];
    scanf_s("%s", numStr,1000);

    int i = 0;
    while (numStr[i] != '\0')
    {
        num1 += numStr[i] - 48;
        i++;
    }
    printf("%d\n", num1);

    while (1)
    {
        while (num1 > 9)
        {
            num2 += num1 % 10;
            num1 /= 10;
        }
        num2 += num1;

        num1 = num2;
        printf("%d\n", num2);

        if (num2 < 10) break;
        else {
            num1 = num2;
            num2 = 0;
        }
    }
    return 0;
}