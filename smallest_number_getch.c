#include <stdio.h>

int main()
{
    int a, b, c, small;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    small = a;

    if (b < small)
        small = b;

    if (c < small)
        small = c;

    printf("Smallest number = %d", small);

    getch();
}
