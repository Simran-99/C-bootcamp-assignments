//Question 1

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of times you want to print Mysirg\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("MysirG\n");
    }
} 

//Question 2
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of natural numbers you want to print\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d",i);
        printf("\n");
    }
} 

//Question 3

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of natural numbers you want to print in reverse order\n");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        printf("%d\n",i);
    }
} 

//Question 4
 #include<stdio.h>
 int main(){
    int n;
    printf("Enter the number of odd natural numbers you want to print\n");
    scanf("%d",&n);
    for(int i=1;i<=2*n;i=i+2){
        printf("%d\n",i);
    }
 } 

 //Question 5

#include<stdio.h>
 int main(){
    int n;
    printf("Enter the number of natural numbers you want to print in reverse order");
    scanf("%d",&n);
    for(int i=2*n;i>0;i=i-1){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
 } 

 //Question 6

 #include<stdio.h>
 int main(){
    int n;
    printf("Enter the number of even natural numbers you want to print\n");
    scanf("%d",&n);
    for(int i=1;i<=2*n;i=i+1){
        if(i%2==0){
        printf("%d\n",i);
        }
    }
 } 

 //Question 7

#include<stdio.h>
 int main(){
    int n;
    printf("Enter the number of even natural numbers you want to print in reverse order\n");
    scanf("%d",&n); 
    for(int i=2*n;i>0;i--){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
 } 

 //Question 8

#include<stdio.h>
 int main(){
    int n;
    printf("Enter the number of natural numbers for which you want to print the squares\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d\n",i*i);
    }
    
 } 

//Question 9

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number of natural numbers for which you want to print the cube\n");
    scanf("%d",&n);
    int cube;
    for(int i=1;i<=n;i++){
        cube=pow(i,3);
        printf("%d\n",cube);

    }
    return 0;
}

//Question 10

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number fow which you want to print the table\n");
    scanf("%d",&n);
    int prod;
    for(int i=1;i<=10;i++){
        prod=n*i;
        printf("%d * %d = %d\n",n,i,prod);


    }
}
