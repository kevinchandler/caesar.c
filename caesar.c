#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[]) {
    
    
    //only accept 2 command line args, or error
    if (argc != 2) {
        printf("Please enter two command line arguments");
        return 1;
    }
  
    //make sure we have a positive, non-negative number
    else if (argv[1] >= 0) {
    
    int rotation = atoi(argv[1]);
    
    string lower_alphabet = "abcdefghijklmnopqrstuvwxyz";
    string upper_alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
   //define text to cipher && encrypted text
   string text = GetString();
        
        //loop through each letter of text to encrypt it
        for (int i=0, n = strlen(text); i < n; i++) {
           
            if (isalpha(text[i])) {
            
                if (isupper(text[i])) {
                    int letter = ((text[i] - 65) + rotation)%26;
                    printf("%c", upper_alphabet[letter]);
                }
                
                if (islower(text[i])) {
                    int letter = ((text[i] - 97) + rotation)%26;
                    printf("%c", lower_alphabet[letter]);
                }
            }
            
            //if not a letter
            else {
                int letter = text[i];
                printf("%c", letter);
           }
        }
        //new line after ciphering. 
        printf("\n");
    }
  
    else {
        return 1;
    }
 }
    
   
