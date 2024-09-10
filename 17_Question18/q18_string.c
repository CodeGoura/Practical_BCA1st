#include<stdio.h>
#include<string.h>
#include<ctype.h>

// this is a menu program of c

void showAddress(char *str){
    for(int i = 0; str[i] != '\0'; i++){
        printf("character : %c, Address : %p \n",str[i], (void*)&str[i]);
    }
}

void concat(char *str1, char *str2){
    int i=0, j=0;
    // Move to the end of the first string
    while (str1[i] != '\0')
    {
        i++;
    }
    while (str2[j] != '\0')
    {
    // Append the second string to the first
    str1[i] = str2[j];
    i++;
    j++;        
    }
    str1[i] = '\0';
    printf("Concatenated string %s \n",str1);
    
}

void concatefun(char *str1, char *str2){
    strcat(str1, str2);
    printf("the concaatinated string : %s \n", str1);
}
void compstr( char *str1, char *str2){
    int result = strcmp(str1, str2);
    if (result == 0){
        printf("Strings are equal");       
    }
    else if (result > 0)
    {
        printf("String1 is greeter then string2");
    }
    else{
        printf("string1 is less then string2");
    }
}
int myStrLen(char *str){
    char *ptr = str;
    int length = 0;
    while( *ptr != '\0'){
        length++;
        ptr++;
    }
    return length;
}
void strUpper( char *str){
    for( int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
    printf("Uppercase String: %s\n", str);
}
void strLower( char *str){
    for( int i = 0; str[i] != '\0'; i++){
        str[i] = tolower(str[i]);
    }
    printf("Lowercase String: %s\n", str);
}
int countVowel(char *str){
    int count = 0;
    for( int i = 0; str[i] != '\0'; i++){
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    return count;
}
void reversestr(char *str){
    int len = strlen(str);
    for( int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i]=str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reversed String: %s\n", str);
}
int main(){
    char str1[100], str2[100];
    int choice;
    do{
        printf("\nMenu:\n");
        printf("1. Show address of each character in string\n");
        printf("2. Concatenate two strings without using strcat\n");
        printf("3. Concatenate two strings using strcat\n");
        printf("4. Compare two strings\n");
        printf("5. Calculate length of the string\n");
        printf("6. Convert all lowercase characters to uppercase\n");
        printf("7. Convert all uppercase characters to lowercase\n");
        printf("8. Calculate number of vowels\n");
        printf("9. Reverse the string\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = 0; // Remove newline character
            showAddress(str1);
            break;
        case 2 :
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = 0;  // Remove newline character
            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = 0;  // Remove newline character
            concat(str1, str2);
            break;
        case 3 :
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = 0;  // Remove newline character
            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = 0;  // Remove newline character
            concatefun(str1, str2);
            break;
        case 4 :
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = 0;  // Remove newline character
            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = 0;  // Remove newline character
            compstr(str1, str2);
            break;
        case 5:
            printf("enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1,"\n")] =0;
            printf("length of the string : %d \n",myStrLen(str1));
            break;
        case 6:
            printf("enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1,"\n")] =0;
            strUpper(str1);
            break;
        case 7:
            printf("enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1,"\n")] =0;
            strLower(str1);
            break;
        case 8:
            printf("enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1,"\n")] =0;
            printf("Number of Vowels : %d \n ",countVowel(str1));
            break;
        case 9:
            printf("Enter a string: ");
            fgets(str1,sizeof(str1),stdin);
            str1[strcspn(str1,"\n")] = 0;
            reversestr(str1);
            break;
        case 10:
            printf("exiting the programme...");
            break;
        default:
            printf("Invalid choice please try again. \n");
        }
    }while(choice != 10);
    return 0;
}