#include<stdio.h>
int main()
{
        int x, y;
        printf("Enter two values: ");
        scanf(" %i\n %i\n", &x, &y);
        printf("%i + %i = %i\n", x, y, x+y);
        if (x > y)
          printf("%i - %i = %i\n", x, y, x-y);
        else
          printf("%i - %i = %i\n", y, x, y-x);
        return 0;
}
