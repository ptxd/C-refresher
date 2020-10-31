#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>


int main (void){

        string inputstr = get_string("Text?:\n");
        int inputstrlen = 0;
        // start wrdlength at 1 because at the end of everything is a \0 or null, hence the last word is not counted~!
        int inputwrdlen = 1;
        int inputstrsentence = 0;

        for (int i = 0; inputstr[i] != '\0'; i++){
                if(inputstr[i] >=65 && inputstr[i]<=90){
                        inputstrlen++;
                }
                else if (inputstr[i] >=97 && inputstr[i]<=122){
                        inputstrlen++;
                }
                // printf("[%c]",inputstr[i]);
        }

        for (int i = 0; inputstr[i] != '\0'; i++){
                if(inputstr[i] == 32){
                        inputwrdlen++;
                }
        }

        for (int i = 0; inputstr[i] != '\0'; i++){
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


        double L = round(inputstrlen) * (100/round(inputwrdlen));
        double S = round(inputstrsentence) * (100/round(inputwrdlen));

        int index = round(0.0588 * L - 0.296 * S - 15.8);

        if (index < 1) {
            printf("Before Grade 1\n");
        }
        else if (index >= 16){
              printf("Grade 16+\n");
        }
        else {
                printf("Grade %i\n", index);
        }

}

        //calculate for number of non spaces character
        // for (int i = 0; inputstr[i] != '\0'; i++){
        //         if(inputstr[i] != 32){
        //                 inputstrlen++;
        //         }
        //         printf("[%c]",inputstr[i]);
        // }
