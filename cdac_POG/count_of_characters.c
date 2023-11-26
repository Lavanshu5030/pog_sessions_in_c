// Counting different types of character in a string

#include <stdio.h>
void counting_different_char(char *str);

int main(){
char str[] = "hell o@123";
printf("%s\n", str);
counting_different_char(str);
}
void counting_different_char(char *str){
printf("%s", str);
// int i = 0;
// int escape_seq_cnt, alphabet_cont, special_char_cnt, digit_cnt,vowel_cnt = 0;
// char ch = str[i];
// while (ch != '\0')
// {
// if((ch == 32) || (ch == 13) || (ch == '\t')){
// escape_seq_cnt++;
// }
// else if((ch >= 65) && (ch <= 90) || (ch >= 97) && (ch <= 122)){
// alphabet_cont++;
// }
// else if((ch == 'A') || (ch == 'E') || (ch == 'O') || (ch == 'I') || (ch == 'U') || (str == 'a') || (str == 'e') || (str == 'i') || (str == 'o') || (str == 'u')){
// vowel_cnt++;
// }
// else if ((ch >= '0') && (ch <= '9')){
// digit_cnt++;
// }
// else{
// special_char_cnt++;
// }
// str ++;
// }
// printf("number of digits = %d\n", digit_cnt);
// printf("number of alphabets = %d\n", alphabet_cont);
// printf("number of escape = %d\n", escape_seq_cnt);
// printf("number of vowels = %d\n", vowel_cnt);
// printf("number of special character = %d", special_char_cnt);

}