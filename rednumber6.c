#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char ch[100];
    scanf("%s",ch);
    for(i=0; i<strlen(ch); i++)
    {
        switch(ch[i])
        {
        case '0':
            printf("Zero");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        case '1':
            printf("One");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        case '2':
            printf("Two");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        case '3':
            printf("Three");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        case '4':
            printf("Four");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        case '5':
            printf("Five");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        case '6':
            printf("Six");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        case '7':
            printf("Seven");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        case '8':
            printf("Eight");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        case '9':
            printf("Nine");
            if(ch[i+1] != NULL)
            {
                printf("-");
            }
            break;
        }
    }
}
