#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char N[10];
    scanf("%s",&N);
    for(i=0;i<10;i++)
    {
        switch(N[i])
        {
            case '0': printf("Zero");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
            case '1': printf("One");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
            case '2': printf("Two");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
            case '3': printf("Three");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
            case '4': printf("Four");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
            case '5': printf("Five");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
            case '6': printf("Six");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
            case '7': printf("Seven");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
            case '8': printf("Eight");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
            case '9': printf("Nine");
            if(N[i+1] != NULL)
            {
                printf("-");
            }
                        break;
        }
    }
}
