#include <stdio.h>
#include <string.h>
void swap ( char* a, char* b ){
    *b = ( *b + *a ) - ( *a = *b );
}
void bubbleSort ( char ch[], int size ){
    for ( int i = 0; i < size; i++ ){
        int swapping = 0;
        for ( int j = 0; j < size-1; j++ ){
            if ( ch[j] > ch[j+1] ){
                swap ( &ch[j], &ch[j+1] );
                swapping = 1;
            }
        }
        if ( swapping == 0 ) break;
    }
}
int main(){
    char ch[100];
    scanf(" %[^\n]s", ch);
    int length = strlen(ch);

    bubbleSort( ch, length);

    printf("Alphabetical Order : ");
    for ( int i = 0; ch[i] != '\0'; i++ )
        printf("%c", ch[i]);
    
    return 0;
}