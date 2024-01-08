// #include <stdio.h>

// int main(){
//   int str[100];
//   scanf(" %[^\n]s", str);   
//   int freq[26] = {0};
//   for (int i = 0; str[i] != '\0'; i++){
//     freq[str[i] - 'a']++;
//   }
//   max = -1;
//   for (int i = 0; i < 26; i++){
//     if (freq[i] > max)
//       max = freq[i];
//   }

//   printf("Most Occured letter is %c", max + 'a');

//   return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char a[50] = "abcdef";
    strrev(a);
    printf("%s", a);
}