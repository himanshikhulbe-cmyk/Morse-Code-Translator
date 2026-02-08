#include <stdio.h>
#include <string.h>
int main()
{
    char sentence[10001];
    printf("Enter text: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    int l = strlen(sentence);

    for(int i=0; i<l; i++)
    {
        //if(strcasecmp(sentence[i],'A')==0) wont work
        //you are giving strcasecmp only one letter when it is expecting a whole word/string (something that ends with \0)
        if(sentence[i]=='A' || sentence[i]=='a') {printf(".- ");}
        else if(sentence[i]=='B' || sentence[i]=='b') {printf("-... ");}
        else if(sentence[i]=='C' || sentence[i]=='c') {printf("-.-. ");}
        else if(sentence[i]=='D' || sentence[i]=='d') {printf("-.. ");}
        else if(sentence[i]=='E' || sentence[i]=='e') {printf(". ");}
        else if(sentence[i]=='F' || sentence[i]=='f') {printf("..-. ");}
        else if(sentence[i]=='G' || sentence[i]=='g') {printf("--. ");}
        else if(sentence[i]=='H' || sentence[i]=='h') {printf(".... ");}
        else if(sentence[i]=='I' || sentence[i]=='i') {printf(".. ");}
        else if(sentence[i]=='J' || sentence[i]=='j') {printf(".--- ");}
        else if(sentence[i]=='K' || sentence[i]=='k') {printf("-.- ");}
        else if(sentence[i]=='L' || sentence[i]=='l') {printf(".-.. ");}
        else if(sentence[i]=='M' || sentence[i]=='m') {printf("-- ");}
        else if(sentence[i]=='N' || sentence[i]=='n') {printf("-. ");}
        else if(sentence[i]=='O' || sentence[i]=='o') {printf("--- ");}
        else if(sentence[i]=='P' || sentence[i]=='p') {printf(".--. ");}
        else if(sentence[i]=='Q' || sentence[i]=='q') {printf("--.- ");}
        else if(sentence[i]=='R' || sentence[i]=='r') {printf(".-. ");}
        else if(sentence[i]=='S' || sentence[i]=='s') {printf("... ");}
        else if(sentence[i]=='T' || sentence[i]=='t') {printf("- ");}
        else if(sentence[i]=='U' || sentence[i]=='u') {printf("..- ");}
        else if(sentence[i]=='V' || sentence[i]=='v') {printf("...- ");}
        else if(sentence[i]=='W' || sentence[i]=='w') {printf(".-- ");}
        else if(sentence[i]=='X' || sentence[i]=='x') {printf("-..- ");}
        else if(sentence[i]=='Y' || sentence[i]=='y') {printf("-.-- ");}
        else if(sentence[i]=='Z' || sentence[i]=='z') {printf("--.. ");}
        else if(sentence[i]==' ') {printf("/ ");}
        else {printf(".-.-.-.");}
    }


return 0;
}
