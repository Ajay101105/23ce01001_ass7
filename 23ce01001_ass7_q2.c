#include<stdio.h>
#include<string.h>
void remnonalpha(char str[]){
    int i,j;

    for ( i = 0,j=0; str[i]!='\0'; i++)
    {
        if ((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            str[j]=str[i];
            j++;
        }
        
    }
    str[j]='\0';
}

int main() {
    char str[50];

    printf("Enter elements: ");
    gets(str);

    remnonalpha(str);

    printf("All the alphabets present: %s\n",str);
    
    return 0;
}