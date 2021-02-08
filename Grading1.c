#include<stdio.h>
int main()
{
    int a,b,c,grade;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    grade = a+b+c;
    if(a>=0 && a<=30 && b>=0 && b<=30 && c>=0 && c<=40)
    {
        if(grade>=80 || grade<=100)
        {
            printf("A");
        }
        else if(grade>=75 || grade<=79)
        {
            printf("B+");
        }
        else if(grade>=70 || grade<=74)
        {
            printf("B");
        }
        else if(grade>=65 || grade<=69)
        {
            printf("C+");
        }
        else if(grade>=60 || grade<=64)
        {
            printf("C+");
        }
        else if(grade>=55 || grade<=59)
        {
            printf("D+");
        }
        else if(grade>=50 || grade<=54)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
    }
    return 0;
}
