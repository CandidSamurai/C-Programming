#include <stdio.h>

int main(){
    
    //Writing to a text file
    FILE *file = fopen("sample.txt", "w");
    if (file == NULL){
        printf("could not open.");
        return 1;
    }

    fprintf(file,"hello");
    fprintf(file,"world");
    fclose(file);
    printf("text written to file sucessfully\n");

    //Reading from a text file
    file = fopen("sample.txt","r");
    if (file == NULL){
        printf("could not open the file");
        return 1;
    }
    char line[100];
    printf("reading from the file: ");
    while(fgets(line, sizeof(line), file) != NULL){
        printf("%s ",line);
    }
    fclose(file);
    return 0;
}