//WAP to check whether a number is positive or non-posittive

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num>0){
        printf("Positive");
    }
    else{
        printf("Non-Positive");
    }
    return 0;
} 

//Check whether a given number is divisible by 5 or not.

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num%5==0){
        printf("It is divisible by 5");
    }
    else{
        printf("It is not divisible by 5");
    }
    return 0;
}
 

//Check if a number is odd or even 


#include<stdio.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
} 

//check if a number is odd or even without % operator

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num/2*2==num){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}  

//Program to check if the given number is 3 digit number or not

#include<stdio.h>
#include<string.h>
int main(){
    int size;
    int n;
    char num[3];
    printf("Enter the number\n");
    scanf("%d",&num);
    size=strlen(num);
    if(size==3){
        printf("It is a three digit number\n");
    }
    else{
        printf("It is not a three digit number\n");
    }
} 

//Program to print greatest of the two numbers and print one if both are same

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number");
    scanf("%d",&num1);
    printf("Enter the second number");
    scanf("%d",&num2);
    if(num1>num2){
        printf("%d",num1);

    }
    else{
        printf("%d",num2);
    }
    return 0;
} 
//Write a program to check if the roots of a given equation are real and distinct, imaginary, real and equal.

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,D;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("Enter value of c\n");
    scanf("%d",&c);
    printf("The quadtratic equation is %dx^2+%dx+%d\n",a,b,c);
    D=(pow(b,2))-(4*a*c);
    if(D>0){
        printf("The equation has real and different roots\n");

    }
    else if(D<0){
        printf("The equation has imaginary roots\n");

    }
    else if (D==0){
        printf("The equation has real and equal roots\n");
    }
    return 0;
    
    


} 

//Program to check if an year is a leap year

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year \n");
    scanf("%d",&year);
    if(year % 4==0){
        printf("leap year");
    }
    else{
        printf("Not a leap year");
    }

}

//Program to print the greatest of three numbers. If the greatest appears twice then print the same number

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("Enter the third number\n");
    scanf("%d",&c);
    if(a>=b & a>=c){
        printf("%d is greater",a);

    }
    else if (b>a & b>=c)
    {
        printf("%d is greater",b);
    }
    else if (c>a & c>b)
    {
        printf("%d is greater",c);
        
    }
    return 0;
    
    
    
    
}
//Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.

 #include<stdio.h>
int main(){
    float cp,sp,profit,loss;
    printf("Enter the cost price\n");
    scanf("%d",&cp);
    printf("Enter the selling price\n");
    scanf("%d",&sp);
    if(sp>=cp){
        profit=((sp-cp)/cp)*100;
        printf("The profit percentage is %f percent",profit);
    }
    else{
        loss=((cp-sp)/cp)*100;
        printf("The loss percentage is %f percent",loss);
    }
} 

//Write a program to take marks of 5 subjects from the user. Assume marks are given
//out of 100 and passing marks is 33. Now display whether the candidate passed the
//examination or failed.

#include<stdio.h>
int main(){
    int mathmarks,englishmarks,hindimarks,sstmarks,sciencemarks;
    printf("Enter the marks in math\n");
    scanf("%d",&mathmarks);
    printf("Enter the marks in English\n");
    scanf("%d",&englishmarks);
    printf("Enter the marks in Hindi\n");
    scanf("%d",&hindimarks);
    printf("Enter the marks in SST\n");
    scanf("%d",&sstmarks);
    printf("Enter the marks in science\n");
    scanf("%d",&sciencemarks);
    if(mathmarks<33){
        printf("You failed in maths\n");
    }
    else{
        printf("You passed in maths\n");
    }

    if(englishmarks<33){
        printf("You failed in English\n");
    }
    else{
        printf("You passed in English\n");
    }
    if(hindimarks<33){
        printf("You failed in Hindi\n");
    }
    else{
        printf("You passed in Hindi\n");
    }
    if(sstmarks<33){
        printf("You failed in SST\n");
    }
    else{
        printf("You passed in SST\n");
    }
    if(sciencemarks<33){
        printf("You failed in Science\n");
    }
    else{
        printf("You passed in Science\n");
    }

    
} 

//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char ch;
    int a;
    printf("Input a charater\n");
    scanf("%c",&ch);
    a=ch;
    if(a>=65 && a<=90){
        printf("%c is in uppercase",ch);

    }
    else if (a>=97 && a<=122)
    {
        printf("%c is in lowercase",ch);
    }
    
    

} 




//check if a number is divisible by 2 and 3

#include<stdio.h>
int main(){
    int num;
    printf("Input a number\n");
    scanf("%d",&num);
    if(num%2==0 && num%3==0){
        printf("%d is divisible by both 2 and 3",num);

    }
    else{
        printf("%d is not divisible by both 2 and 3",num);
        
    }
} 

//Check if a number is divisible by 7 or divisible by 3
#include<stdio.h>
int main(){
    int num;
    printf("Input a number\n");
    scanf("%d",&num);
    if(num%2==7 || num%3==0){
        printf("%d is divisible 7 or 3",num);

    }
    else{
        printf("%d is not divisible by 7 or 3",num);
        
    }
} 

//check if a number is positive,negative or zero

#include<stdio.h>
int main(){
    int num;
    printf("Input a number\n");
    scanf("%d",&num);
    if(num>0){
        printf("%d is positive",num);

    }
    else if(num<0){
        printf("%d is negative",num);
        
    }
    else{
        printf("Zero");
    }
}

//Write a program to check whether a given character is an alphabet (uppercase), an
//alphabet (lower case), a digit or a special character.

#include<stdio.h>
int main()
{
    char ch;
    int a;
    printf("Input a charater\n");
    scanf("%c",&ch);
    a=ch;
    if(a>=65 && a<=90){
        printf("%c is in uppercase alphabet",ch);

    }
    else if (a>=97 && a<=122)
    {
        printf("%c is in lowercase alphabet",ch);
    }
    else if ((a>=32 && a<=47)||(a>=58 && a<=64)||(a>=91 && a<=96)||(a>=123 && a<=126))
    {
        printf("%c is a special character",ch);
    }
    else{
        printf("%c is a special character",ch);

    }
    
    

}


//Check if we have a valid triangle

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input side 1\n");
    scanf("%d",&a);
    printf("Input side 2\n");
    scanf("%d",&b);
    printf("Input side 3\n");
    scanf("%d",&c);
    if(a+b>c || b+c>a || a+c>b){
        printf("Valid traingle");
    }
    else{
        printf("Not a valid triangle");
    }
    return 0;

}

//Taking month number and displaying number of days

#include<stdio.h>
int main(){
    int month;
    printf("Enter month number\n");
    scanf("%d",&month);
    if(month==2){
        printf("28 days");
    }
    else if(month==1||month==3||month==5||month==7||month==9||month==11){
        printf("31 days");

    }
    else{
        printf("30 days");
    }

} 





