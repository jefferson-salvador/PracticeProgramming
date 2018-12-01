#include <stdio.h>
char i,j;
int main(){
    char letter;
    printf("Enter any letter: ");
    scanf("%c", &letter);
    i = 'A';
    while (i<=letter){
        printf("%c - ", i);
        j = 'A';
        while(j <= letter){
            printf("%c", i);
            j++;
        }
        printf("\n");
        i++;
    }
    return (0);
}
