#include <stdio.h>
#include <cs50.h>


int main(void){

    int n;
    do{
        n = get_int("Positive Integer:");
    }
        while (n<1 || n>8);

      for (int i = 1; i <= n; i++)
        {
              for (int k = 0; k < n-i; k++)
              {
                  printf(" ");
              }
              for (int j = 0; j < i; j++)
              {
                  printf("#");
              }
        printf("\n");
        }
}