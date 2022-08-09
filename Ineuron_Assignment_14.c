//Question 1

#include<stdio.h>
int main(){
    int arr[10],sum=0;
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++){
        sum=sum+arr[j];
    }
    printf("The sum of the elements is %d",sum);

} 

//Question 2

#include<stdio.h>
int main(){
    int arr[10],sum=0;
    float average;
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++){
        sum=sum+arr[j];
    }
    average=sum/10;
    printf("The average of the elements is %f",average);

} 

//Question 3
#include<stdio.h>
int main(){
    int arr[10],sum_even=0,sum_odd=0;
    
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++){
        if(arr[j]%2==0){
            sum_even=sum_even+arr[j];

        }
        else{
            sum_odd=sum_odd+arr[j];
        }

        
    }
    
    printf("The sum of even elements is %d\n",sum_even);
    printf("The sum of odd elements is %d",sum_odd);

}

//Question 4

#include<stdio.h>
int main(){
    int arr[10],max;
    
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int j=1;j<10;j++){
        if(arr[j]>max){
            max=arr[j];
        }
        

        
    }
    
    printf("The greatest element is %d\n",max);
    
} 
//Question 5 

#include<stdio.h>
int main(){
    int arr[10],min;
    
    printf("Enter the elements of the array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(int j=1;j<10;j++){
        if(arr[j]<min){
            min=arr[j];
        }
        

        
    }
    
    printf("The smallest element is %d\n",min);
    
} 

//Question 6

#include<stdio.h>
int main(){
    int arr[10],temp;
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[i]<arr[j]){
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

        
        
    }
    for(int k=0;k<10;k++){
        printf("%d ",arr[k]);
    }   

}

//Question 7

#include<stdio.h>
int main(){
    int n,arr[200];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    printf("%d",arr[n-2]);
}

//Question 7

#include<stdio.h>
int main(){
    int n,arr[200];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);

    }
    printf("\n");
    printf("%d ",arr[1]);
}

//Reversing an array 

#include<stdio.h>
int main(){
    int n,num,temp,count=0;
    int arr[200];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<n;i++){
        count++;

    }
    printf("%d \n",count);
    for(int i=0;i<(count)/2;i++){
        temp=arr[i];
        arr[i]=arr[count-i-1];
        arr[count-i-1]=temp;
        
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    

} 

// Copying elements of one array to another

#include<stdio.h>
int main(){
    int arr[200],arr2[200];
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                arr2[j]=arr[i];
            }
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr2[j]);
    }
}


