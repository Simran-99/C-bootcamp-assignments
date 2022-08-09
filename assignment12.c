#include<stdio.h>
void print_natural(int );
int main(){
    int n;
    printf("Enter the number of natural numbers\n");
    scanf("%d",&n);
    print_natural(n);
}
void print_natural(int n){
    if(n>0){
    print_natural(n-1);
    printf("%d ",n);
    }
} 
//Question 2

#include<stdio.h>
void print_reverse_natural(int);
int main(){
    int n;
    printf("Enter the number of natural numbers\n");
    scanf("%d",&n);
    print_reverse_natural(n);
}
void print_reverse_natural(int n){
    if(n>0){
        printf("%d ",n);
        print_reverse_natural(n-1);
    }

}

//Question 3
#include<stdio.h>
void printN(int);
int main(){
    int n,num;
    printf("Enter n\n");
    scanf("%d", &n);
    num=2*n;
    num=num-1;
    printN(num);
    
}
void printN(int num){
    if(num>0) {
       
        printN(num-2);
        printf("%d",num);
        
    }
}

//Question 4

#include<stdio.h>
void print_odd_reverse(int);
int main(){
    int n,num;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    
    num=2*n;
    num=num-1;
    print_odd_reverse(num);
}
void print_odd_reverse(int num){
    if(num>0){
        printf("%d ",num);
        print_odd_reverse(num-2);
    }
} 

//Question 5
#include<stdio.h>
void print_even(int);
int main(){
    int n,num;
    printf("Enter value of n\n");
    scanf("%d",&n);
    num=n*2;
    print_even(num);



}
void print_even(int n){
    if(n>0){
        print_even(n-2);
        printf("%d ",n);
        
    }
}
//Question 6

#include<stdio.h>
void print_even(int);
int main(){
    int n,num;
    printf("Enter value of n\n");
    scanf("%d",&n);
    num=n*2;
    print_even(num);



}
void print_even(int n){
    if(n>0){
        printf("%d ",n);
        print_even(n-2);
        
        
    }
}

//Question 7

#include<stdio.h>
void print_square(int);
int main(){
    int n,num;
    printf("Enter value of n\n");
    scanf("%d",&n);
    print_square(n);



}
void print_square(int n){
    if(n>0){
        print_square(n-1);
        printf("%d ",n*n);
        
        
        
    }
}

//Question 8

 #include<stdio.h>
void calculate_binary(int);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    calculate_binary(n);
}
void calculate_binary(int n){
    if(n==1){
        printf("%d ",1);
    }
    if(n/2>0){
        
        printf("%d ",n%2);
        calculate_binary(n/2);
    }
}

//Question 9

#include<stdio.h>
void calculate_octal(int);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    calculate_octal(n);
}
void calculate_octal(int n){
    if(n<8){
        printf("%d ",n);
    }
    
    if(n/8>0){
        
        
        calculate_octal(n/8);
        printf("%d ",n%8);
    }
} 
//Reverse a number 

#include<stdio.h>
void reverse_num(int);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    reverse_num(n);
}
void reverse_num(int n){
    if(n<10){
        printf("%d ",n);
    }
    
    if(n/10>0){
        
        printf("%d ",n%10);
        reverse_num(n/10);
       
    }
}


