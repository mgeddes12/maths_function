#include<stdio.h>
int main()
{
        int x, y;
        printf("Enter two values:\n");
        scanf("%i %i\n", &x, &y);
        printf("%i + %i = %i\n", x, y, x+y);
        if (x > y){
          printf("%i - %i = %i\n", x, y, x-y);
          printf("%i / %i = %i\n", x, y, x/y); }
        else{
          printf("%i - %i = %i\n", y, x, y-x);
          printf("%i / %i = %i\n", y, x, y/x);}
        printf("%i * %i = %i\n", x, y, x*y);
        return 0;
}
