//Program to calculate the sum of n natural numbers

/* #include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum is %d",sum);
} */

//Calculate the sum of N even natural numbers

/* #include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=2*n;i++){
        if (i%2==0)
        {
            sum=sum+i;
        }
        
    }
    printf("The sum is %d",sum);

} */

//Program to print the sum of N odd numbers

/* #include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i =1;i<2*n;i++){
        if(i%2){
            sum=sum+i;
        }
    }
    printf("The sum is %d",sum);

} */

//Program to calculate the sum of squares of N natural numbers

/* #include<stdio.h>
int main(){
    int n,sum=0,square;
    printf("Enter the value of n");
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        square=i*i;
        sum=sum+square;


    }
    printf("the sum of the squares of %d natural number is %d",n,sum);
} */

//Calculate sum of cubes of n natural numbers

/* #include<stdio.h>
int main(){
    int n,sum=0,cube;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        cube=i*i*i;
        sum=sum+cube;
    }
    printf("The sum of cubes of %d natural numbers is %d ",n,sum);

}
 */

//calculate factorial of a number

/* #include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter a number \n");
    scanf("%d",&n);
    for (int i=n;i>0;i--){
        fact=fact*i;
    }
    printf("The factorial of %d is %d . ",n,fact);
} */

//write a program to count digits in a given number

/* #include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;

    }
    printf("The number of digits is %d",count);

} */

//Find out whether a number is prime or not

/* #include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n==2){
        printf("It is a prime number\n");
    }
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            count++;
        }
        
    }
    if(count==0){
        printf("Prime number");

    }
    else{
        printf("Not prime");
    }
    
} */

//Write a program to find the LCM of two numbers

#include<stdio.h>
int main(){
    int num1,num2,prod=1;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0){
            prod=prod*i;
            break;

        }

    }
    printf("%d",prod);
}



//Reversing a number

/* #include<stdio.h>
int main(){
    int num,remainder,reverse=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    while(num!=0){
        remainder=num%10;
        num=num/10;
        reverse=reverse*10+remainder;
    }
    printf("reverse number is %d",reverse);

} */