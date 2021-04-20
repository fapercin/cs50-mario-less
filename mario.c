#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do 
    {
        height = get_int("Height:");
    }
    while (height <= 0 || height == 9);
    
    int spaces = height-1;
    int hashtags = 1;  
    for(int i = 0; i < height; i++)
    {
        for(int b = 0; b < spaces; b++)
        {
            printf(" ");
        }
        for(int b = 0; b < hashtags; b++)
        {
            printf("#");
        }
        spaces--;
        hashtags++;
        printf("\n");
    }
}
