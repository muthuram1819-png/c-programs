#include <stdio.h>

int main()
{
    int decimal,rem,i = 0;
    char hex[20];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0)
    {
        printf("0");
        return 0;
    }

    while (decimal > 0)
    {
         rem = decimal % 16;

        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';

        decimal = decimal / 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);

    return 0;
}
