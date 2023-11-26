#include <stdio.h>
void counting_different_char(char *str);

int main(){
char str[] = "hell o@123";
printf("%s\n", str);
counting_different_char(str);
}
void counting_different_char(char *str){
int i = 0;
int escape_seq_cnt=0;
int alphabet_cont=0;
int special_char_cnt=0;
int digit_cnt=0;
int vowel_cnt = 0;

 while (str[i] != '\0')
 {
    char ch = str[i];
 if((ch == 32) || (ch == '\t') ){
 escape_seq_cnt++;
 }
 else if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z')){
 alphabet_cont++;
  if(((ch == 'A') || (ch == 'E') || (ch == 'O') || (ch == 'I') || (ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))){
 vowel_cnt++;
 }
 }

 else if ((ch >= '0') && (ch <= '9')){
 digit_cnt++;
 }
else{
 special_char_cnt++;
 }
 i++;
}
 printf("number of digits = %d\n", digit_cnt);
 printf("number of alphabets = %d\n", alphabet_cont);
 printf("number of escape_sequence = %d\n", escape_seq_cnt);
 printf("number of vowels = %d\n", vowel_cnt);
 printf("number of special character = %d", special_char_cnt);

}
