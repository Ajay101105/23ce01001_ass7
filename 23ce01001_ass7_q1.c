#include<stdio.h>
#include<string.h>
int main(){
    char str[40],ch;
    printf("Enter a string: ");
    gets(str);

    printf("Enter a charecter: ");
    scanf(" %c", &ch);
    int count=0;
    for (int i = 0; i < str[i]!='\0'; i++)
    {
        if (str[i]==ch)
        {
            count++;
        }
        
    }
    printf("Frequency of %c is: %d\n",ch,count);
    return 0;
}