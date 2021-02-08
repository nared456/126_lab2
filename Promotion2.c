#include<stdio.h>
int main()
{
    char pro;
    float time;
    scanf("%c",&pro);
    scanf("%f",&time);
    double sum=0;
    if(pro == 'A')
    {
        sum = (time - 200)*3 + 199;
        printf("%.2f",sum);
    }
    else if(pro == 'B')
    {
        sum = (time-400)-400 + 299;
        printf("%.3f",sum);
    }
    return 0;
}
