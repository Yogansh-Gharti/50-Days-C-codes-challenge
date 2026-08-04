#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping:\n");
    printf("First Number = %d\n", a);
    printf("Second Number = %d\n", b);

    return 0;
}
