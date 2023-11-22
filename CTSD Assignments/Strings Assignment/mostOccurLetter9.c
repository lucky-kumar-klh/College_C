#include <stdio.h>
int main(){

    char ch[100], upper[26] = {0}, lower[26] = {0};
    int lowMax = -1, upperMax = -1, indexLower, indexUpper;
    printf("Enter the beautiful String : ");
    scanf(" %[^\n]s", ch);

    for ( int i = 0; ch[i] != '\0'; i++ ){
        if ( ch[i] >= 97 && ch[i] <= 122 )
            lower[ ch[i] - 'a' ] ++;
        else if ( ch[i] >= 65 && ch[i] <= 90 )
            upper[ ch[i] - 'A' ] ++;
    }
    for (int i = 0; i < 26; i++){
        if ( lowMax < lower[i] ){
            lowMax = lower[i];
            indexLower = i;
        }
        if ( upperMax < upper[i] ){
            upperMax = upper[i];
            indexUpper = i;
          }
    }
    if ( lowMax > upperMax )
        printf("Max occ = %c", indexLower + 'a');
    else if ( lowMax < upperMax || lowMax == upperMax )
        printf("Max occ = %c", indexUpper + 'A');
    
    return 0;
}