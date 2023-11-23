// print alphabet followed by digit
#include <stdio.h>

int main(){
    char str[40];
    printf("\n Enter a string:");
    gets(str);
    char ch;
    int i; 
    for (i = 0; str[i] != '\0'; i++){
        ch = str[i];
        if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a')&&(ch <= 'Z')) || (ch == 32)){
            if ((str[i+1] >= '0') && (str[i+1] <= '9')){
                printf("%c", ch);
            }
        }
    }


}