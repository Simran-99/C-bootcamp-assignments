//Question 1
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                printf("* ");

            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
} 

//Question 2

#include<stdio.h>
int main(){
    int lines;
    printf("Enter number of lines");
    scanf("%d",&lines);
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=lines;j++){
            if (j>=((lines+1)-i))
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
            
            
        }
        printf("\n");
    }

} 

//Question 3

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=(n-i)+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

//Question 4
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=i){
                printf("* ");

            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
} 

//Question 5

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if((j>=(n-i)+1) && (j<=(n+i)-1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}


//Question 6

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j>=i && j<=(2*n)-i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
} 

//Question 7

 #include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j<=n-(i-1)  ||  j>=n+i){
                printf("* ");
            }
            else{
                printf("  ");
            }

        }
        printf("\n");
    }
}

//Question 8

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=1;j<=2* n;j++){
            if(j>n-i && j<=n){
                count++;
                printf("%d ",count);
            
            }
            else if (j<n+i && j>n)
            {
                count--;
                printf("%d ",count);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
 
//Question 9

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=1;j<=2*n;j++){
            if(j<=(n-i)+1){
                count++;
                printf("%d ",count);
                
            }
            else if (j>(n+i)-1)
            {
                count--;
                printf("%d ",count);
            }
            else{
                printf("  ");
            }
            


        }
        printf("\n");
    }
} 

//Question 10

 #include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=1;j<=2*n-1;j++){
            if(i==1){if(j<=(n-i)+1){
                count++;
                printf("%d ",count);

            }
            else if(j>=n+i-1){
                count--;
                
                printf("%d ",count);
                
                
            }
            else{
                printf("  ");
            }


            }
            else{
            if(j<=(n-i)+1){
                count++;
                printf("%d ",count);

            }
            else if(j>=n+i-1){
                
                printf("%d ",count);
                count--;
                
            }
            else{
                printf("  ");
            }
            }

        }
        printf("\n");
    }
}

//Question 11

#include<stdio.h>
int main(){
    int n;
    char ch;
    
    printf("Enter the number of rows you want to print\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ch=64;
        
        for(int j=1;j<=2*n;j++){
            if((j>=(n-i)+1) && (j<=n)){
                ch++;
                
                printf("%c ",ch);
            }
            else if((j<=(n+i)-1)&&(j>n)){
                ch--;
                printf("%c ",ch);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}

//Question 12

#include<stdio.h>
int main(){
    int n;
    char ch;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ch=64;
        for(int j=1;j<=n*2;j++){
            if(j>=i &&j<=n){
                ch++;
                printf("%c ",ch);

            }
            else if(j>n && j<=2*n-i){
                ch--;
                printf("%c ",ch);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
} 

//Question 13
#include<stdio.h>
int main(){
    int n;
    int ch;
    printf("Enter the number of lines");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ch=64;
        for(int j=1;j<=2*n;j++){
            if(i==1){
                if(j>=i &&j<=n){
                    ch++;
                    printf("%c ",ch);

                }
                else if(j>n && j<=2*n-1){
                    ch--;
                    printf("%c ",ch);
                }
                else{
                    printf("  ");
                }
            }
            else{
                if(j<=(n-i)+1){
                    ch++;
                    printf("%c ",ch);
                    
                }
                else if(j>=n+i-1 && j<2*n){
                    
                    printf("%c ",ch);
                    ch--;
                }
                else{
                    printf("  ");
                }

            }
        }
        printf("\n");
    }
}

//Question 14

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<n){
                if(j==1 || j==i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else if(i==n){
                printf("* ");
            }
        }
        printf("\n");
    }
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<n){
                if(j==n ||j==(n-i)+1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else if(i==n){
                printf("* ");
            }
        }
        printf("\n");
    }
}


//Question 18

#include<stdio.h>
int main(){
    int n,bound;
    printf("Enter the number of lines for the diamond");
    scanf("%d",&n); 
    bound=n/2+1;
    for(int i=1;i<=bound;i++){
        for(int j=1;j<=bound*2;j++){
            if((j<=((bound+i)-1)) && (j>=((bound-i)+1))){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=bound;i++){
        for(int j=1;j<=bound*2;j++){
            if(i==1){
                continue;
            }

            
            if(j>=i && j<=bound*2-i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        if(i>1){

        printf("\n");\
        }
    }
}

//Heart shaped pattern

#include<stdio.h>
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=19;j++){
            if((j>=2-i && j<=6+i)||(j>=12-i && j<=16+i)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<19;j++){
            if(i==0 && j==8){
                printf("Mysirg");
            }
            if(i==0 && (j>8 && j<12)){
                continue;
            }
            if(j>=i && j<=18-i){
                
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}