#include<stdio.h>
#include<string.h>
#include<ctype.h>
// this code check if a number is a pallidrom is not 
void checkstr(const char *str);
int main(){
    char stringIn[20];
    int has_digit = 0;
    int i;
    printf("enter a word contain a-z:");
    scanf("%19s", stringIn);
    if (strlen(stringIn) < 3){
        printf("please enter a string having length greater 2 \n");
    }else{
        for(i=0; stringIn[i] != '\0';i++){
            if(isdigit(stringIn[i])){
                has_digit = 1;
                break;
            }
        }
    }
    if(has_digit){
        printf("Please enter a string without numbers.\n");
    }else{
        checkstr(stringIn);
    }
}
void checkstr(const char *str){
  int len = strlen(str);
  int i, palindrome = 1;
  for (i=0;i < len/2; i++){
    if(str[i] != str[len - i - 1]){
        palindrome = 0;
        break;
    }
  }
  if(palindrome){
    printf("The string is a palindrome.\n");
  }else{
    printf("The string is not a palindrome.\n");
  }
}