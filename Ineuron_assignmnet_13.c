//Question 1

#include<stdio.h>
int print_sum(int);
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int x=print_sum(n);
    printf("The sum of %d natural numbers is %d",n,x);


}
int print_sum(int n){
    int s=0;
    if(n>0){
        s=n+print_sum(n-1);
        }
        return s;
}

//Recursive function to print the sum of n off natural numbers;

#include<stdio.h>
int print_sum(int);
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int num=n*2;
    num=num-1;
    int x=print_sum(num);
    printf("The sum of %d odd natural numbers is %d",n,x);


}
int print_sum(int n){
    int s=0;
    if(n>0){
        s=n+print_sum(n-2);
        }
        return s;
} 

//Recursive function to give the sum of square natural numbers 

#include<stdio.h>
#include<math.h>
int sum_square(int);
int main(){
    int n;
    printf("Enter the number of natural numbers\n");
    scanf("%d",&n);
    int x=sum_square(n);
    printf("The sum of square of %d natural number is %d",n,x);
}
int sum_square(int n){
    int s=0;
    if(n>0){
        s=pow(n,2)+sum_square(n-1);
        
    }
    return s;
} 

//Question 4 

#include<stdio.h>
#include<math.h>
int sum_digit(int);
int main(){
    int n;
    printf("Enter the number of natural numbers\n");
    scanf("%d",&n);
    int x=sum_digit(n);
    printf("The sum of digits is %d" ,x);
}
int sum_digit(int n){
    int s=0;

    if(n>0){
        s=n%10+sum_digit(n/10);
        
    }
    return s;
}

//Question 5

#include<stdio.h>
#include<math.h>
int fact(int);
int main(){
    int n;
    printf("Enter the number of natural numbers\n");
    scanf("%d",&n);
    int x=fact(n);
    printf("The factorial of %d  is %d",n ,x);
}
int fact(int n){
    int s=1;

    if(n>0){
        s=n*fact(n-1);
        
    }
    return s;
}

//Question 6

#include<stdio.h>
#include<math.h>
int s=-1;
int print_num_digit(int);
int main(){
    int n;
    printf("Enter the number of natural numbers\n");
    scanf("%d",&n);
    int x=print_num_digit(n);
    printf("%d",x);

    
}
int sprint_num_digit(int n){
    
    s++;


    if(n>0){
       
       print_num_digit(n/10);
        
    }
    return s;
}
 

// Finding the HCF

#include<stdio.h>
int find_hcf(int,int);
int main(){
    int a,b,result;
    printf("Enter two values");
    scanf("%d %d",&a,&b);
    
    result=find_hcf(b,a%b);
    printf("The HCF is %d",result);
}
int find_hcf(int a,int b){
    if(b==0){
        return a;
    }
    find_hcf(b,a%b);

} 

//Fibonnaci series

#include<stdio.h>
int fib(int);
int main(){
    int n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){

    
    printf("%d",fib(i));
    }

}
int fib(int n){
    if(n==0 || n==1){
        return n;

    }
    return fib(n-1)+fib(n-2);
    
} 

//Recurssive function to find the number of digits

#include<stdio.h>
int count=-1;
int find_digits(int);
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int x=find_digits(n);
    printf("The number of digit is: %d",x);
}
int find_digits(int n){
    count++;

    if(n>0){
        find_digits(n/10);
    }
    return count;
} 

//Function to calculat power of any number
#include<stdio.h>
int find_power(int,int);
int main(){
    int n,power;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the power\n");
    scanf("%d",&power);
    int x=find_power(n,power);
    printf("The result is : %d",x);
}
int find_power(int n, int power){
    int result=1;
    if(power>0){
     result=n*find_power(n,(power-1));
    }
    return result;
}