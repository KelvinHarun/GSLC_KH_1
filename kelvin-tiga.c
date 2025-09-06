//Tugas Area of Rectangle

//Create an algorithm pseudo-code to calculate area of rectangle with following formula
#include<stdio.h>
int main() 
{
    int length;
    int width;
    int area;

    length = 5 ;
    width  = 2 ;

    area = length * width ;
    printf("the area is = %d \n\n",area);
    
    return 0 ;
}

//Create an algorithm pseudo-code to calculate an area of rectangle with the same formula of previous example, with new condition where the length and width is given by user (input).
   #include<stdio.h>
    int main() 
{
    int length;
    int width;
    int area;

    printf("what is the length of a square : ");
    scanf("%d",&length);

     printf("what is the width of a square : ");
    scanf("%d",&width);

    area = length * width ;
    printf("the area is : %d",area);

    return 0;
}