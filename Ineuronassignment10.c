// Program to calculate area of a circle

#include<stdio.h>
float calculate_area(float);
int main(){
    float n;
    float s;
    printf("Enter the radius of the circle\n");
    scanf("%f",&n);
    s=calculate_area(n);
    printf("The area is %f",s);
}
float calculate_area(float n){
    float pi=3.14;
    float area;
    area= pi*n*n;
    return area;
} 

// Program to calculate simple interest

 #include<stdio.h>
float simp_interest(float,float,float);
int main(){
    float principle,rate,time,interest;
    printf("Enter the principle, rate of interest and the time duration\n");
    scanf("%f %f %f",&principle,&rate,&time);
    interest=simp_interest(principle,rate,time);
    printf("The interest is %f",interest);
}
float simp_interest(float p,float r,float t){
    float SI;
    SI=(p*r*t)/100;
    return SI;

} 

// Program to check whether a number is even or odd

#include<stdio.h>
int check_even(int);
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int a=check_even(n);
    printf("%d",a);
}
int check_even(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

// Program to print N natural numbers;

#include<stdio.h>
void print_natural(int);
int main(){
    int n;
    printf("Enter the number of natural numbers you want to print\n");
    scanf("%d",&n);
    print_natural(n);

}
void print_natural(int n){
    for(int i=1;i<=n;i++){
        printf("%d ",i);
    }
} 

//Program to print first N odd natural numbers

#include<stdio.h>
void return_odd(int);
int main(){
    int n;
    printf("Enter the number of natural numbers you want to print\n");
    scanf("%d",&n);
    return_odd(n);

}
void return_odd(int n){
    for(int i=1;i<2*n;i=i+2){
        printf("%d ",i);
    }
}

#include<stdio.h>
int cal_fact(int);
int main(){
    int n,s;
    printf("Enter the number you want to calculate the factorial of\n");
    scanf("%d",&n);
    s=cal_fact(n);
    printf("The factorial od %d is %d ",n,s);


}
int cal_fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

//Program to calculate the number of combinations

#include<stdio.h>
int fact(int);
int find_comb(int,int);
int main(){
    int n,r;
    printf("Enter the value of N and R\n");
    scanf("%d %d", &n,&r);
    int s=find_comb(n,r);
    printf("The number of combinations is %d",s);

}
int find_comb(int n,int r){
    int comb;
    comb=(fact(n)/(fact(r)*fact(n-r)));
    return comb;
}
int fact(int num){
    int product=1;
    for(int i=1;i<=num;i++){
        product=product*i;

    }
    return product;
}

//Program to find out number of arrangemnets

#include<stdio.h>
int find_arrangements(int,int);
int fact(int);
int main(){
    int n,r;
    printf("Enter the values of n and r");
    scanf("%d %d",&n,&r);
    int p=find_arrangements(n,r);
    printf("The number of possible arrangements is %d",p);
}
int find_arrangements(int n,int r){
    int arrange;
     arrange=fact(n)/fact(n-r);
     return arrange;
}
int fact(int num){
    int product=1;
    for(int i=1;i<=num;i++){
        product=product*i;
    }
    return product;
}

// Check if a given digit is there in a given number

#include<stdio.h>
int check_digit(int,int);
int main(){
    int n,digit,result;
    
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter a digit\n");
    scanf("%d",&digit);
    result=check_digit(n,digit);
    printf("Result: %d",result);

}
int check_digit(int n,int digit){
    int num,temp;
    num=n;
    while(num>0){
        temp=num%10;
        num=num/10;
        if(temp==digit){
            return 1;
        }
    
    }
    return 0;
}

//Program to print prime factors

#include<stdio.h>
void print_prime(int);
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    print_prime(n);
    

}
void print_prime(int n){
    int i=2;
    while(n>0){
        while(n%i==0){
            printf("%d ",i);
            n=n/i;
        }
        i++;

    }
    
}