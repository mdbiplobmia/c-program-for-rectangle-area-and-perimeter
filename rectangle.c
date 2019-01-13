#include<stdio.h>
int main()
{
    int a, b,area, perimeter;
    while(scanf("%d%d",&a,&b)==2) //take input until end of file(EOF)
    {
        area = a * b;  //calculate area of rectangle
        perimeter = 2*(a+b);  //calculate perimeter of rectangle

        printf("%d %d",area,perimeter);
    }
    return 0;
}
