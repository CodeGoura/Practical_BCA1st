#include<stdio.h>
#include<stdlib.h>
// copy content one file to another file.

int main(){
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;
    // input source file and destination file names.
    printf("Enter source file name or location : ");
    scanf("%s", sourceFileName);
    printf("Enter destination file name : ");
    scanf("%s", destFileName);
    //opining source file.
    sourceFile = fopen(sourceFileName,"r");
    // check opening sucessfull
    if(sourceFile == NULL){
        printf("error in opening source file \n");
        exit(1);
    }
    // check opening destination file.
    destFile = fopen(destFileName,"w");

    // check opining error
    if(destFile == NULL){
        printf("error in opining destination file");
        fclose(sourceFile);
        exit(1);
    }
    while((ch = fgetc(sourceFile)) != EOF){
        fprintf(destFile,"%c", ch);
    }
    printf("file copied sucessfully.");
    // close files

    fclose(sourceFile);
    fclose(destFile);

}
