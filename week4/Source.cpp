#include<stdio.h>
int main2()
{
    char letter[10000];
    int i = 0, n = 0, count = 0;
    scanf_s("%s", letter,10000);

    while (letter[i] != '\0')
    {

        count += 1;
        if ((int)letter[i] - 'A' >= 22)
        {
            n += 1;
        }
        i++;
    }
    if (n == count)
    {
        printf("All Small Letter");
    }
    else if (n >= 1 && n <= count)
    {
        printf("Mix");
    }
    else
        printf("All Capital Letter");
    return 0;
}