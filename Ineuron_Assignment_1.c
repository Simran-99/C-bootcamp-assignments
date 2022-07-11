//question 1
/* #include<stdio.h>
int main(){
    printf("Hello students");
    return 0;
} */

//Question 2
/* #include<stdio.h>
int main(){
    printf("Hello \nstudents");
    return 0;
} */

//Question 3
/* #include<stdio.h>
int main(){
    printf("\"My SirG\"");
    return 0;
} */

//Question 4

/* #include<stdio.h>
int main(){
    float r,area;
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("The area of the circle is %f having the radius %f",area,r);

} */

//Question 5
/* #include<stdio.h>
#include<string.h>
int main(){
    int size;
    char a[50];
    printf("Enter the string\n");
    gets(a);
    size=strlen(a);
    printf("Size is %d",size);

    
    return 0;



    
} */

//Question 6

/* #include<stdio.h>
int main(){
    char name[20];
    printf("Enter your name\n");
    gets(name);
    printf("\"Hello,%s\"",name);
    return 0;
} */

//Question 7
/* #include<stdio.h>
int main(){
    char ch[]="%d";
    printf("%s",ch);
    return 0;
    
} */

//Question 8

/* #include<stdio.h>
int main(){
    printf("\\n");
    return 0;
} */

//Question 9
/* #include<stdio.h>
int main(){
    printf("\\\\");
    return 0;


} */

//Question 10

/* #include<stdio.h>
int main(){
    int d,m,y;
    char ch;

    printf("Enter the date\n");
    scanf("%d %c %d %c %d",&d,&ch,&m,&ch,&y);
    printf("Day - %d,Month - %d,Year - %d",d,m,y);
    return 0;
} */

//Question 11
/* #include<stdio.h>
int main(){
    int h,m;
    char ch;

    printf("Enter the time\n");
    scanf("%d %c %d",&h,&ch,&m);
    printf("%d Hour and %d Minute",h,m);
    return 0;
} */

//Question 12
#include<stdio.h>
int main()
{
    int x=printf("ineuron");
    printf("%d",x);
    return 0;
   
   
}

//Output: Ineuron7
