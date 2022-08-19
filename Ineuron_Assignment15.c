//Question 1

#include<stdio.h>
int print_greatest(int a[200],int);
int main(){
    int a[200],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x=print_greatest(a,n);
    printf("The greatest number is %d",x);

}
int print_greatest(int a[200],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
    

} 

//Question 2

#include<stdio.h>
int print_smallest(int a[200],int n);
int main(){
    int n,arr[200];
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=print_smallest(arr,n);
    printf("The smallest element is %d",x);
}
int print_smallest(int a[],int n){
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            }
    }
    return min;
}

//Question 3

#include<stdio.h>
int sort_the_array(int a[],int);
int main(){
    int n,arr[200],result[200];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort_the_array(arr,n);



    
}
int sort_the_array(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }


}

//Question 4
#include<stdio.h>
void rotate(int arr[200],int n);
int main(){
    
    int arr[200],n,pos,d;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elemnts of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    rotate(arr,n);
}

    void rotate(int arr[200],int n){
        int pos,d;

    printf("Positions you want to shift the array by\n");
    scanf("%d",&pos);
    printf("Enter the choice for direction\n");
    printf("1. Left rotation\n");
    printf("2.Right direction\n");
    scanf("%d",&d);
    switch(d){
        case 1: 
        for(int i=0;i<n;i++){
            arr[n+i]=arr[i];
        }
        for(int i=2;i<n+pos;i++){
            arr[i-pos]=arr[i];

        }
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        break;
        case 2:
        for(int i=n-1;i>=0;i--){
            arr[i+pos]=arr[i];
        }
        for(int i=0;i<pos;i++){
            arr[i]=arr[n+i];
        }
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        break;
    }
}

//Question 5
 #include<stdio.h>
int find_duplicate(int a[],int);
int main(){
    int a[200],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int x= find_duplicate(a,n);
    printf("The duplicate number is %d",x);

}
int find_duplicate(int a[200],int n){
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            return a[i];
        }
    }

}

//Question 6
 #include<stdio.h>
int array_reverse(int a[],int);
int main(){
    int a[200],n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    array_reverse(a,n);
}
int array_reverse(int a[200],int n){
    int temp;
    int num=n-1;
    for(int i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[num-i];
        a[num-i]=temp;
        

        
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
      
      
}





//Question 8

#include<stdio.h>
void print_unique(int a[],int);
int main(){
    int n,arr[200];
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    print_unique(arr,n);
}
void print_unique(int a[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count=count+1;

            }
        }
        if(count>1){
            continue;
        }
        else{
            printf("%d ",a[i]);

        }
    }
} 

//Question 7

#include<stdio.h>
void calculate_duplicate(int a[],int);
int main(){
    int n,arr[200];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    calculate_duplicate(arr,n);
}

void calculate_duplicate(int a[200],int num){
    int count=0;
    for(int i=0;i<num;i++){
        
        for(int j=i+1;j<num;j++){
            if(a[i]==a[j]){
                count=count+1;
                break;
            }
        }

        


                
                }
                printf("%d ",count);
            }
              
                 
                    
                    
                    
                        
                        
                    
//Question 9
#include<stdio.h>
void sort_two_array(int a[],int b[],int,int);
int main(){
    int n,arr[200],arr1[200],n2;
    printf("Enter the size of array 1\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the size of array 2\n");
    scanf("%d",&n2);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr1[i]);
    }
    sort_two_array(arr,arr1,n,n2);
}

void sort_two_array(int a[200],int b[200],int x,int y){
    int l=0;
    for(int i=x;i<x+y;i++){
        a[i]=b[l];
        l++;
    }
    for(int i=0;i<x+y;i++){
        for(int j=0;j<x+y;j++){
            if(a[i]>a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<x+y;i++){
        printf("%d ",a[i]);
    }


}

//Question 10

#include<stdio.h>
int main(){
    int n,a[10],b[10]={0,0,0,0,0,0,0,0,0,0};
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<10;j++){
            if(a[i]==j){
                b[j]++;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(b[i]!=0){
            printf("Frequency of %d is %d \n",i,b[i]);
        }
    }
}
              