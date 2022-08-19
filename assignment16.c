//Question 1

#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("Enter values for matrix one\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 1 :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
    printf("Enter values for matrix 2: \n");
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);

    }

}
printf("Matrix 2: \n");
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++){
        printf("%d ",b[i][j]);

    }
    printf("\n");
}
printf("The sum matrix is \n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        c[i][j]=a[i][j]+b[i][j];
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
} 

//Question 2

#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],j;
    printf("Enter values for matrix one\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 1 :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }
    printf("Enter values for matrix 2: \n");
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);

    }

}
printf("Matrix 2: \n");
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++){
        printf("%d ",b[i][j]);

    }
    printf("\n");
}
printf("The product matrix is \n");
for(int i=0;i<3;i++){
    
    for(j=0;j<3;j++){
        c[i][j]=0;
        for(int k=0;k<3;k++){

        
        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        
        }
    }
    
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
}

//Program 3

#include<stdio.h>
int main(){
    int a[200][200],row,column;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    printf("Enter the number of columns\n");
    scanf("%d",&column);
    printf("Enter the matrix: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("The matrix is \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose matrix is\n");
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

} 

//Question 4

#include<stdio.h>
int main(){
    int a[200][200],row,column;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    printf("Enter the number of columns\n");
    scanf("%d",&column);
    printf("Enter the matrix: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("The matrix is \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    if(row==column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(i==j){
                sum=sum+a[i][j];
            }
        }
    }
    }
    printf("Sum of right diagnol is %d: ",sum);

}


//Question 5

 #include<stdio.h>
int main(){
    int a[200][200],row,column;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    printf("Enter the number of columns\n");
    scanf("%d",&column);
    printf("Enter the matrix: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("The matrix is \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    if(row==column){
    int j=column-1;
    int i=0;
    while (i<row && j>=0)
    {
       sum=sum+a[i][j];
       i++;
       j--;
    }
    
    }
    printf("Sum of right diagnol is %d: ",sum);

} 

//Question 6
 #include<stdio.h>
int main(){
    int a[200][200],row,column;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    printf("Enter the number of columns\n");
    scanf("%d",&column);
    printf("Enter the matrix: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("The matrix is \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    
    
    for(int i=0;i<row;i++){
        int sum_row=0;
        for(int j=0;j<column;j++){
            
                sum_row=sum_row+a[i][j];
            
        }
        printf("Sum of row Number %d is %d\n",i+1,sum_row);
    }

    for(int i=0;i<column;i++){
        int sum_column=0;
        for(int j=0;j<row;j++){
            sum_column=sum_column+a[j][i];


        }
        printf("The sum of column number %d is %d \n",i+1,sum_column);
    }
    
   
    

}

//Question 7

#include<stdio.h>
int main(){
    int a[200][200],row,column;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    printf("Enter the number of columns\n");
    scanf("%d",&column);
    printf("Enter the matrix: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("The matrix is \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if(row==column){

    
    
    
    
    for(int i=0;i<row;i++){
        
        for(int j=0;j<column;j++){
            
                if(j<=i){
                    printf("%d ",a[i][j]);
                }
            
        }
        printf("\n");
    }
    }
    
    
   
    

}

//Question 8

#include<stdio.h>
int main(){
    int a[200][200],row,column;
    printf("Enter the number of rows\n");
    scanf("%d",&row);
    printf("Enter the number of columns\n");
    scanf("%d",&column);
    printf("Enter the matrix: \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("The matrix is \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if(row==column){

    
    
    
    
    for(int i=0;i<row;i++){
        
        for(int j=0;j<column;j++){
            
                if(j<=(row-1)-i){
                    printf("%d ",a[i][j]);
                }
            
        }
        printf("\n");
    }
    }
    
    
   
    

}


//Question 9

#include<stdio.h>
int main(){
    int a[20][20],count=0,total_elements;
    int rows,columns;
    float avg_percent;
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&rows,&columns);
    printf("Enter the elements\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(a[i][j]!=0){
                count++;

            }
        }
        

    }
    total_elements=rows*columns;
    avg_percent=(count/total_elements)*100;
    if(avg_percent>50){
        printf("Not a sparse matrix");
    }
    else{
        printf("It is a sparse matrix");
    }
}




//Question 10

#include<stdio.h>
int main(){
    int i,j,a[200][200],b[200],r,c;
    printf("Enter rows\n");
    scanf("%d",&r);
    printf("Enter columns\n");
    scanf("%d",&c);
    printf("Enter the elements\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }

    }
    printf("The matrix is \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        int count =0;
        for(j=0;j<c;j++){
            if(a[i][j]==1){
                count=count+1;
            }
        }
        b[i]=count;
    }

    int max=b[0];
    int k;
    for(k=0;k<r;k++){
        if(b[k]>max){
            max=b[k];
        }
    }
    for(k=0;k<r;k++){
        if(b[k]==max){
            break;
        }
    }
    printf("Row number %d",k+1);

}




