#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);

    for (int i = 0; i < n; i++)
    {
        //calculate spaces and print
        for (int j = n - 1 ; j > i; j--)
        {
            printf(" ");
        }
    
        //calculate hashes and print
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
