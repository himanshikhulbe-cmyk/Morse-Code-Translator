#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    printf("Enter Morse Code: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int l = strlen(s);
    
    //adding white spaces at the end 
    s[l] = ' ';
    //null character must be added at the end of the string/char array
    s[l+1] = '\0';
    l = strlen(s);

for(int i=0; i<l; i++)
{
    if(s[i]=='.' && s[i+1]=='-' && s[i+2]==' ') {printf("a"); i+=2;}
    else if (s[i]=='-' && s[i+1]=='.' && s[i+2]=='.' && s[i+3]=='.' && s[i+4]==' ') {printf("b"); i+=4;}
    else if (s[i]=='-' && s[i+1]=='.' && s[i+2]=='-' && s[i+3]=='.' && s[i+4]==' ') {printf("c"); i+=4;}
    else if (s[i]=='-' && s[i+1]=='.' && s[i+2]=='.' && s[i+3]==' ' && s[i+4]==' ') {printf("d"); i+=3;}
    else if (s[i]=='.' && s[i+1]==' ') {printf("e"); i++;}
    else if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='-' && s[i+3]=='.' && s[i+4]==' ') {printf("f"); i+=4;}
    else if (s[i]=='-' && s[i+1]=='-' && s[i+2]=='.' && s[i+3]==' ' && s[i+4]==' ') {printf("g"); i+=3;}
    else if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='.' && s[i+3]=='.' && s[i+4]==' ') {printf("h"); i+=4;}
    else if (s[i]=='.' && s[i+1]=='.' && s[i+2]==' ') {printf("i"); i+=2;}
    else if (s[i]=='.' && s[i+1]=='-' && s[i+2]=='-' && s[i+3]=='-' && s[i+4]==' ') {printf("j"); i+=4;}
    else if (s[i]=='-' && s[i+1]=='.' && s[i+2]=='-' && s[i+3]==' ') {printf("k"); i+=3;}
    else if (s[i]=='.' && s[i+1]=='-' && s[i+2]=='.' && s[i+3]=='.' && s[i+4]==' ') {printf("l"); i+=4;}
    else if (s[i]=='-' && s[i+1]=='-' && s[i+2]==' ') {printf("m"); i+=2;}
    else if (s[i]=='-' && s[i+1]=='.' && s[i+2]==' ') {printf("n"); i+=2;}
    else if (s[i]=='-' && s[i+1]=='-' && s[i+2]=='-' && s[i+3]==' ') {printf("o"); i+=3;}
    else if (s[i]=='.' && s[i+1]=='-' && s[i+2]=='-' && s[i+3]=='.' && s[i+4]==' ') {printf("p"); i+=4;}
    else if (s[i]=='-' && s[i+1]=='-' && s[i+2]=='.' && s[i+3]=='-' && s[i+4]==' ') {printf("q"); i+=4;}
    else if (s[i]=='.' && s[i+1]=='-' && s[i+2]=='.' && s[i+3]==' ') {printf("r"); i+=3;} 
    else if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='.' && s[i+3]==' ') {printf("s"); i+=3;}
    else if (s[i]=='-' && s[i+1]==' ') {printf("t"); i++;}
    else if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='-' && s[i+3]==' ') {printf("u"); i+=3;}
    else if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='-' && s[i+3]=='.' && s[i+4]==' ') {printf("v"); i+=4;}
    else if (s[i]=='.' && s[i+1]=='-' && s[i+2]=='-' && s[i+3]==' ') {printf("w"); i+=3;}
    else if (s[i]=='-' && s[i+1]=='.' && s[i+2]=='.' && s[i+3]=='-' && s[i+4]==' ') {printf("x"); i+=4;}
    else if (s[i]=='-' && s[i+1]=='.' && s[i+2]=='-' && s[i+3]=='-' && s[i+4]==' ') {printf("y"); i+=4;}
    else if (s[i]=='-' && s[i+1]=='-' && s[i+2]=='.' && s[i+3]=='.' && s[i+4]==' ') {printf("z"); i+=4;}
    else if (s[i]=='/') {printf(" "); i++;}
    else {printf(".");}
}
    return 0;
}
