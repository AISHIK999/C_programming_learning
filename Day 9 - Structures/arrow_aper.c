/*
C program to test the usage of poimter to structur and printing elements usinf the -> arrow operator
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>

struct student
{
    char name[50];
    int class;
    float marks;
};

int main(){
struct student *ptr;
struct student s1={"John", 10, 89.337};

ptr = &s1;
printf("The name of the student is: %s\n", (*ptr).name);
printf("The class of the student is: %d\n", ptr -> class);
printf("The marks of the student is: %.2f\n", ptr -> marks);


return 0;
}