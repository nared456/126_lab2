#include<stdio.h>
int main()
{
    char pro;
    float time;
    scanf("%c",&pro);
    scanf("%f",&time);
    float sum=0;
    if(pro == 'A')
    {
        sum = round((time - 200)*3 + 199);
        printf("%.2f",sum);
    }
    else if(pro == 'B')
    {
        sum = round((time - 400)*2 + 299);
        printf("%.2f",sum);
    }
    return 0;
}
