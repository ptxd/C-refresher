#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

//argc- argument counter count of inputs etc.. ./greedy 1024 CS50 is considered as 3
//argv - argument vector one string per element, first element is argv[0] last element is always argv[argc - 1] because the file e.g. ./greedy is considered as an argument

int main(int argc, string argv[]){

    int k = 0;

    if(argc == 1){
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (atoi(argv[1]) > 0 && argv[2] == NULL){
        k = atoi(argv[1]);
        printf("success\n%i\n", k);
    }
    else {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string y = get_string("plaintext:");
    printf("ciphertext: ");

    for (int i = 0; y[i] != '\0'; i++){

            if (k > 26){
                k = k % 26;
            }

            else {

            }


            if(isalpha(y[i]) && isupper(y[i])){

                if((y[i]+k) % 32 > 26){
                    printf("%c", y[i]+k-26);
                }

                else{
                    printf("%c", y[i]+k);
                }
            }

            else if(isalpha(y[i]) && islower(y[i])){

                if((y[i]+k) > 122){
                    printf("%c", y[i]+k-26);
                }

                else{
                    printf("%c", y[i]+k);
                }
            }

            else {
                printf("%c", y[i]);
            }
    }

    printf("\n");

}