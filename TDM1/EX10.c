#include <stdio.h>

int main()
{
    int N = 10;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        } else {
            N++;
        }
    }
    return 0;
}
