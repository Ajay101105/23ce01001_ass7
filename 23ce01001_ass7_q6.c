#include<stdio.h>
#include<string.h>

int main(){
    char str[50],substr[50];

    printf("Enter a string: ");
    gets(str);

    printf("Enter a substring: ");
    gets(substr);

    int len_str,len_substr;
    len_str=strlen(str);
    len_substr=strlen(substr);

    int count=0;

    for (int i = 0; i <= len_str - len_substr+1; i++)
    {
        int count=0;
        int j=0;
        while (j<len_substr)
        {
            if (str[i+j]==substr[j])
            {
                count++;
            }
            else{
                break;
            }
            j++;   
        }
        if(count==len_substr)
        {
            printf("Substring can be found in the string");
            return 0;
        }
    }
    printf("Substring can not be found in the string");
    
    return 0;
}