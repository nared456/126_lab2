#include<stdio.h>
int main()
{
    int age;
    char name;
    char odd_emoji[][50]= {"(^_^)","(*0*)","(T_T)"};
    char even_emoji[][50]= {"{@_@}","{*v*}","{x_x}"};
    scanf("%c",&name);
    scanf("%d",&age);
    if(age%2==0)
    {
        if(name>=65 && name<=73)
        {
            printf("%s",even_emoji[0]);
        }
        else if(name>=74 && name<=82)
        {
            printf("%s",even_emoji[1]);
        }
        else if(name>=83 && name<=90)
        {
            printf("%s",even_emoji[2]);
        }
    }
    else
    {
        if(name>=65 && name<=73)
        {
            printf("%s",odd_emoji[0]);
        }
        else if(name>=74 && name<=82)
        {
            printf("%s",odd_emoji[1]);
        }
        else if(name>=83 && name<=90)
        {
            printf("%s",odd_emoji[2]);
        }
    }
    return 0;
}
