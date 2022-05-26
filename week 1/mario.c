#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, rows, columns, spaces;
    do
    {
    height = get_int("Height:");
    }
    while(height < 1 || height > 8);

    for(rows = 0; rows < height; rows++)
    {
        for(spaces = 0; spaces < height - rows - 1; spaces++)
        {
            printf(" ");
        }
        for(columns = 0; columns <= rows; columns++)
        {
            printf("#");
        }
        printf("\n");
    }
}