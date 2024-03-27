#include "prog1.h"
#include <stdio.h>


int char_count(string s, char c){
    int darab = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            darab++;
        }
        
    }
    
    return darab;

}

int main(){

    string s = "Abba";

    printf("%d\n", char_count(s,'b'));


    return 0;

}