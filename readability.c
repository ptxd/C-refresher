#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main (void){

        string inputstr = get_string("Text?:\n");
        int inputstrlen = 0;
        int inputstrsentence = 0;

        for (int i = 0; inputstr[i] != '\0'; i++){
                if(inputstr[i] != 32){
                        inputstrlen++;
                }
                printf("[%c]",inputstr[i]);
        }


        for (int i = 0; inputstr[i] != '\0'; i++){
                // if(inputstr[i] == 33 || 46 || 63){
                //         inputstrsentence++;
                // }
                switch (inputstr[i]){
                case 33 : inputstrsentence++;
                break;
                case 46 : inputstrsentence++;
                break;
                case 63 : inputstrsentence++;
                break;
                default: break;
                }
        }




        int index = 0.0588 * inputstrlen - 0.296 * inputstrsentence - 15.8

        printf("\nstrlength: %i and senlength: %i and Grade %i\n", inputstrlen,inputstrsentence, index);

}

