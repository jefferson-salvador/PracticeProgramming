#include <stdio.h>

char i,j;
void pattern(char);

int main(){
    char letter;

    do{
    printf("Enter any capital letter (A-Z): ");
    scanf(" %c", &letter);

    if(letter < 'A' || letter > 'Z')
        printf("Wrong Input! Try again!\n\n");

    }while(letter < 'A' || letter > 'Z');

    pattern(letter);
    printf("\n");
    return (0);
}

void pattern(char letter){
    for(i = 'A'; i <= letter; i++){
        printf("\n%c - ", i);
        for(j = i; j >= 'A'; j--)
            printf("%c ", j);

    }
}
