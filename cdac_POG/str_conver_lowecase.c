// command to compile code ".\str_conver_lowecase.c"
// command to run "./str_conver_lowecase.exe"

// Converting the string into lowercase
#include <stdio.h>
char * conversion_lowercase(char*a);

int main(){
  char a[] = "Hello World!";
  conversion_lowercase(a);
  printf("%s", a);
}

char * conversion_lowercase(char *a){
    int i;
    for (i = 0; a[i] != '\0'; i++){
        if ((a[i] >= 'A') && (a[i] <= 'Z')){
            a[i] = a[i] + 32;
        }
    }
    return a;
}