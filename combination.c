#include <stdio.h>

int main()
{
   int i=1, j, k;
   puts("The required combination of 1, 2 and 3 is :");
    while(i <= 3)
    {
        j = 1;
        while(j <= 3)
        {
            k=1;
            while(k <= 3)
            {
                if( i != j && i != k && j != k)
                    printf("%d %d %d\n", i, j, k);
                    k++;
            }
            j++;
        }
        i++;
    }

    return 0;
}
