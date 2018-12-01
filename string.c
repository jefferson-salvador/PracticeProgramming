#include <stdio.h>
#include <string.h>

int main(){

    ///declaration
    char string1[15] = "Jep ";
    char string2[15] = "Salvador";
    char string3[15];

    ///printing format
    printf("String1 = ");
    puts(string1); //Jep
    printf("String2 = %s \n", string2); //Salvador
    printf("string2[3] = %c \n\n", string2[3]);// v

    ///swapping
    strcpy(string3,string1);
    strcpy(string1,string2);
    strcpy(string2,string3);

    ///output after swapping
    printf("String 1 = %s \n", string1);
    printf("String 2 = %s \n\n", string2);
    printf("String 3 = %s \n", string3);

    ///comparing
    if(strcmp(string1,string2) == 0){
        printf("\nSame. \n\n");
    }
    else{
        printf("\nNot Same\n\n");
    }

    ///concatenate
    strcat(string2,string1);

    ///after concatenation
    printf("String2 = %s \n", string2);

    ///counting characters
    printf("String2 = %d \n", strlen(string2));

    /**
    DECLARATION:

    char string1[15] = "Jep ";
    char string2[15] = "Salvador";
    char string3[15];

    We make the size [15] so that we can play with their values soon.
    -------------------------

    PRINTING FORMAT:
    puts(string1); //Jep
    printf("%s \n", string2); //Salvador
    printf("string2[3] = %c \n\n", string2[3]);// v

    You can print string using puts() and printf().
    The difference is that puts() can only print the value of the string.
    You can also print a certain letter from the string just by accessing it like a normal array.
    To elaborate,
    string2[0] = 'S';
    string2[1] = 'a';
    string2[2] = 'l';
    string2[3] = 'v';
    and so on ...

    You can also change a letter from a string by accessing its index. For example,
    char myString[6] = "Hello";
    myString[3] = 'v';
    puts(myString); // It will print "Helvo"

    For additional information, you can read string using the gets() or scanf().
    The difference is that gets() can read whitespace like space, enter, or tab.
    for example,

    char myString[25];
    gets(myString); //Assume that I inputted "Jep Salvador"
    puts(myString); //It will print the exact value I inputted, that is "Jep Salvador"

    but if I do this,

    char myString[25];
    scanf("%s", &myString); //Assume that I inputted "Jep Salvador"
    puts(myString) //It will print the first letters before the whitespace, that is "Jep"
    ----------------------------

    SWAPPING:
    strcpy(string3,string1); //Copies the value of string1 then paste it to string3, string3 now is Jep.
    strcpy(string1,string2); //Copies the value of string1 then paste it to string3, string1 now is Salvador.
    strcpy(string2,string3); //string2 now is Jep.

    Here, to assign a string to another string, we use the function strcpy().
    strcpy() copies the second string indicated into the first string indicated.
    The format is like this,
    strcpy(destination, source);
    For example:
    strcpy(str1, "hello"); //str1 is the destination, "hello" is the source
    puts(str1); // It will print "hello".
    ----------------

    OUTPUT AFTER SWAPPING
    printf("String 1 = %s \n", string1); //Salvador
    printf("String 2 = %s \n\n", string2); //Jep
    printf("String 3 = %s \n", string3); //Jep
    -----------------------------

    COMPARING:
    if(strcmp(string1,string2) == 0){
        printf("\nSame. \n");
    }
    else{
        printf("\nNot Same\n");
    }

    strcmp() is the function we use to compare two strings.
    In the example, we compare string1 to string 3 and ask if the output is equal to 0.
    if its equal to 0, then the 2 strings are the same.
    By the way here, it is based on ASCII.
    For example, you compare "A" to "a", the output will be < 0 because "A" in decimal in ASCII is 65, while "a" is 97,
    so "A" < "a", so to make it true, what you should say in the condition is like this,

    if(strcmp("A","a") < 0){
        printf("A is less than a");
    }
    ------------------------------------

    CONCATENATION:

    strcat(string2,string1);

    printf("String2 = %s \n", string2);

    Concatenation means adding, joining or connecting one string to another string.
    The format is like this:
    strcat(dest, src);
    For example,

    char myString[15] = "Hello ";
    printf("%s ", strcat(myString, "World"));

    We connect the "World" to the end of the value of myString, so the output will be:

    "Hello World"
    ------------------------------------

    COUNTING CHARACTERS:

    printf("String2 = %d \n", strlen(string2));

    Here, we can use strlen() function. It means string length.
    for example,

    char myString[25] = "Hello ";

    printf("Length = %d ", strlen(myString);

    It will count from the charater 'H' up to the last character ' ' or space.
    So the output is 6.

    Play with these functions and enjoy :)
    **/
}
