#include <stdio.h>

int main(void)
{
    int K;
    printf("Enter day of that year 'K': ");
    scanf("%i", &K);
    if ((K < 1) || (K > 365))
    {
        printf("Your number should be (K < 1) || (K > 365)!");
    }
    else
    {
        printf("That day of the week is: ");
        printf("%i\n", K % 7);
    }
}