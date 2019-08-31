#include <stdio.h>

char i,j;
void pattern(char);

int main(){
    char letter;
    printf("Enter any capital letter (A-Z): ");
    letter = getchar(); ///can use varName = getchar()  or scanf(" %c", &varName)
    pattern(letter);
    printf("\n");
    return (0);
}

void pattern(char letter){
    for(i = 'A'; i <= letter; i++){
        printf("\n%c - ", i);
        for(j = i; j >= 'A'; j--){
            printf("%c ", j);
        }
    }
}
