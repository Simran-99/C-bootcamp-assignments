//Finding the nth term of the fibonacci series;

/* #include<stdio.h>
int main(){
    int a=0,b=1,c=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;

    }
    printf("the %dth term of the fibonacci series is %d",n,c);

} */

//Program to print N terms of fibonnaci series 
/* #include<stdio.h>
int main(){
    int a=0,b=1,c=0,n;
    printf("Enter the number of terms you want to print\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for (int i = 2; i <=n; i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    

} */

//check if a number is in fibonnaci or not
/* #include<stdio.h>
int main(){
    int num,c;
    printf("Enter the term you want to search in the fibonnaci series\n");
    scanf("%d",&num);
    int a=0;
    int b=1;
    do{
        c=a+b;
        a=b;
        b=c;
        if(c==num){
            printf("%d is in fibonacci series",num);

            break;
            }
    

    }while (num>=c);
    if(c!=num){
        printf("%d is not in fibonacci series",num);

    }
    
    
    

} */
//Programs to calculate HCF of two numbers

/* #include<stdio.h>
int main(){
    int num1,num2,n,product=1;
    printf("Enter two numbers\n");
    scanf(("%d %d"),&num1,&num2);
    if(num1>num2){
        n=num1;
    }
    else{
        n=num2;
    }
    for (int i = n-1; i >0; i--)
    {
        if(num1%i==0 && num2%i==0){
            product=product*i;

        }
    }
    printf("HCF is %d",product);
    

} */

//Program to check if a number is co-prime or not

/* #include<stdio.h>
int main(){
    int num1,num2,n,prod=1;
    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        n=num1;
    }
    else{
        n=num2;

    }
    for (int i = n-1; i>0; i--)
    {
        if(num1%i==0 && num2%i==0){
            prod=prod*i;
        }
    }
    if (prod==1)
    {
        printf("Co-prime numbers");
    }
    else{
        printf("Not co-prime");
    }

    //
    
    
} */

//Print prime numbers below 100

/* #include<stdio.h>
int main(){
    for(int i=2;i<=100;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count=count+1;
            }
            
            
        }
        if(count==2){
                printf("%d ",i);
            }
        
        }
    } */

// Printing numbers between two rpime numbers
/* #include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);

    for(int i=num1;i<=num2;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count=count+1;
            }
            
            
        }
        if(count==2){
                printf("%d ",i);
            }
        
        }
    } */

//Write a program to print prime number just after the number entered

/* #include<stdio.h>
int main(){
    int num1;
    printf("Enter a number\n");
    scanf("%d",&num1);
    

    for(int i=num1+1;i<=num1*2;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count=count+1;
            }
            
            
        }
        if(count==2){
                printf("%d ",i);
                break;
            }
        
        }
    }

 */

//Armstrong number below 1000
#include<stdio.h>
#include<math.h>
    int main(){
        int n,num,num2,temp,sum=0;
        for(int i=1;i<=1000;i++){
            int count=0,sum=0;

            num=i;
            num2=i;
            while(num>0){
            num=num/10;
            count++;
            
        }
        
        while(num2>0){
            temp=num2%10;
            sum=sum+(pow(temp,count));
            num2=num2/10;
            if(sum==i){
                printf("%d ",i);
            }
            
            
        
    }
        }
    }

        



//Check whether a given number is armstrong

/*     #include<stdio.h>
    #include<math.h>
    int main(){
        int n,count=0,num,temp,sum=0,num2;
        printf("Enter a number\n");
        scanf("%d",&n);
        num=n;
        num2=n;
        while(num>0){
            num=num/10;
            count++;
        }
        printf("%d \n",count);
        while(num2>0){
            temp=num2%10;
            sum=sum+(pow(temp,count));
            num2=num2/10;
            printf("%d\n",sum);
        }
        if(sum==n){
            printf("Armstrong");
        }
        else{
            printf("Not armstrong");
        }
        
    }



 */