//Question 1

#include<stdio.h>
int main(){
    int month;
    printf("Enter the month number\n");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("31");
    break;
    
    case 2:
    printf("28");
    break;

    case 4:
    case 6:
    case 9:
    case 11:
    printf("30");
    break;

    default:
        break;
    }
}

//Question 2

#include<stdio.h>
int main(){
    int n,a,b,c;
    printf("Choose from the following choices\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    scanf("%d", &n);
    switch(n){
        case 1:
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("The sum is %d",c);
        break;

        case 2:
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        c=a-b;
        printf("The difference is %d",c);
        break;
        
        case 3:
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("The product is is %d",c);
        break;

        case 4:
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        c=a/b;
        printf("The quotient is %d",c);
        break;

        case 5: break;
    }
}

//Question 3

 #include<stdio.h>
int main(){
    int n;
    printf("Enter the day of the week\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    printf("Bonjour ! C'est Monday :)\n");
    break;

    case 2:
    printf("Have a nice day ahead\n");
    break;

    case 3:
    printf("Hey how are you?\n");
    break;

    case 4: 
    printf("Hi nice to see you again!\n");
    break;

    case 5:
    printf("How are you doing?\n");
    break;

    case 6:
    printf("Long time no see\n");
    break;

    case 7:
    printf("Comment ca va?\n");
    break;

        
    
    default:
        break;
    }
}

//Question 4

 #include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,n;
    printf("Choose from the following choices\n");
    printf("1.Check if a triangle with three given sides is an isoceles triangle\n");
    printf("2. Check if a triangle with three given sides is an equilateral traingle\n");
    printf("3.Check if a triangle with three given sides is an equilateral triangle\n");
    printf("4.Exit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    printf("Enter three sides\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b || b==c || c==a){
        printf("Isoceles triangle");
    }
    else{
        printf("Not an isoceles triangle\n");
    }
    break;

    case 2:
    printf("Enter three sides\n");
    scanf("%d %d %d",&a,&b,&c);
    int x= a*a;
    int y= b*b;
    int z=c*c;
    if(x==y+z || y==z+x || z==x+y)

    {
        printf("Right angle triangle\n");
    }
    else{
        printf("Not a right angle triangle\n");
    }
    

    

    break;

    case 3:
    printf("Enter three sides\n");
    scanf("%d %d %d",&a,&b,&c);
    if((a==b && b==c)){
        printf("Equilateral triangle\n");
    }
    else{
        printf("Not equilateral triangle");
    }
    break;

    case 4:
    break;


    
    default:
        break;
    }
}

//Question 5

#include<stdio.h>
int main(){
    int n;
    printf("Enter a value\n");
    scanf("%d",&n);
    switch(n){
        case 1: 
        printf("good");
        break;

        case 2:
        printf("Better");
        break;

        case 3: 
        printf("best");
        break;

        default:
        printf("invalid");
        break;
    }

} 
//Find whether a year is leap year or not

 #include<stdio.h>
int main(){
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    switch(year%100==0){
        case 1: switch(year%400==0){
            case 1:
            printf("Leap year\n");
            break;
            case 0:
            printf("Not a leap year\n");
            break;
        }
        break;

        case 0: switch(year%4==0){
            case 1:printf("Leap year");
            break;

            case 0:printf("Not leapyear");
            break;

        }
        break;
        
        }
}

#include<stdio.h>
int main(){
    float n,amount,total_amount;
    printf("Enter the amount\n");
    scanf("%f",&n);
    switch(n<=50){
        case 1: amount= n*0.50;
        break;
        case 0:switch(n<=150){
            case 1: amount=25 +(n-50)*0.75;
            break;
            case 0: switch(n<=250){
                case 1:amount= 100+(n-150)*1.2;
                break;
                case 0:
                    amount=220+(n-250)*1.5;
                    break;
                    
                

            }
        } 
    }
    total_amount=amount+0.20*amount;
    printf("%f",total_amount);
}

//Question 8:
#include<stdio.h>
int main(){
    int n,choice,num;
    printf("Choose from the following choices\n");
    printf("1.Convert a positive number to negative\n");
    printf("2.Convert a negative number to positive\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter the number\n");
        scanf("%d",&n);
        num=n*(-1);
        printf("The negative number is %d",num);
        break;

        case 2:
        printf("Enter the number\n");
        scanf("%d",&n);
        num=n*(-1);
        printf("The psotive number is %d",num);
        break;
        
    }

    
    
}




//Question 9

#include<stdio.h>
int main(){
    int n,ch;
    printf("Enter the number\n");
    scanf("%d",&n);
    switch(n%2==0){
        case 1:
        ch=n+1;
        printf("Nearest odd number %d",ch);
        break;
        case 0:
        printf("It is already an odd number");
        break;
    }
} 

//Print all the roots of an quadratic equation

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float D,root1,root2;
    printf("Enter the value of a b and c\n");
    scanf("%f %f %f",&a,&b,&c);
    D=pow(b,2)+4*a*c;
    switch(D==0){
        case 1:
        root1=(-b)/(2*a);
        printf("Root: %f",root1);
        break;

        case 0:
        switch(D>0){
            case 1:
        root1=(((-b) +sqrt(4*a*c-pow(b,2)))/2*a );
        root2=(((-b) -sqrt(4*a*c-pow(b,2)))/2*a );
        printf("Roots are: %f, %f",root1,root2);
        break;

        case 0:
        root1=(((-b) +sqrt(pow(b,2)-4*a*c))/2*a );
        root2=(((-b) -sqrt(pow(b,2)-4*a*c))/2*a );
        printf("Roots are: %f i, %f i",root1,root2);
        break;
        }
        break;



        

        default:
        printf("Invalid choice");
        break;


    }

}
