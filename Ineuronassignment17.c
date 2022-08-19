//Question 1
#include <stdio.h>
int main(){
    char str[20];
    int count=0,i,j;
    for(i=0;str[i];i++){
        scanf("%c",&str[i]);
    }
    for(j=1;str[j];j++){
    }
    printf("The length is %d ",j-1);

}

//Question 2
#include<stdio.h>
int main(){
    char str[100],ch;
    int count=0;
    printf("Enter a string\n");
    fgets(str,100,stdin);
    printf("Enter a character\n");
    scanf("%c",&ch);
    for(int i=0;str[i]!=0;i++){
        if(str[i]==ch){
            count++;
        }

    }
    printf("The occurance of letter %c is %d",ch,count);

}

//Question 3
#include<stdio.h>
int main(){
    char str[100];
    int count=0;
    printf("Enter a string\n");
    fgets(str,100,stdin);
    for(int i=0;str[i];i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count=count+1;
        }
    }
    printf("The occurance of vowel is %d:",count);
}


//Question 4
 #include<stdio.h>
int main(){
    char str[200];
    printf("Enter a string\n");
    fgets(str,200,stdin);
    for(int i=0;str[i];i++){
        int c=str[i];
        int diff=c-97;
        char upper=65+diff;
        printf("%c ",upper);
    }
}

//Question 5
#include<stdio.h>
int main(){
    char str[200];
    printf("Enter a string\n");
    fgets(str,200,stdin);
    for(int i=0;str[i];i++){
        int c=str[i];
        int diff=c-65;
        char lower=97+diff;
        printf("%c ",lower);
    }
}

//Question 6

#include<stdio.h>
int main(){
    char str[200];
    int count=0;
    printf("Enter string");
    fgets(str,200,stdin);
    for(int i=0;str[i];i++){
        count++;
        }
    for(int j=count;j>=0;j--){
        printf("%c",str[j]);

    }


}

//Question 7

#include<stdio.h>
int main(){
    int x,count_alphabet=0,count_digit=0,count_special=0;
    char ch[200];
    printf("Enter a string\n");
    fgets(ch,200,stdin);
    for(int i=0;ch[i];i++){
         x=ch[i];

    
    
    if((x>=65 && x<=90)|| (x>=97 && x<=120)){
        count_alphabet++;
        

    }
    else if((x>=32 && x<=47)|| (x>=58 && x<=64) || (x>=91 && x<=96)|| (x>=123 && x<=126)){
        count_special++;
        
    }
    else{
        count_digit++;
        
    }
    }
    printf("Alphabet: %d\n",count_alphabet);
    printf("Special character: %d\n",count_special);
    printf("Digit: %d \n",count_digit);
}


// Question 8
#include<stdio.h>
int main(){
    char str1[200],str2[200];
    int len_str1=0,len_str2=0,l=0;
    printf("Enter the string 1");
    fgets(str1,200,stdin);
    printf("ENter string 2:");
    fgets(str2,200,stdin);
    for(int i=0;str1[i];i++){
        len_str1++;

    }
    for(int j=0;str2[j];j++){
        len_str2++;
    }
    for(int k=len_str1;k<len_str2+len_str1;k++){
        str1[k]=str2[l];
        l++;

    }
    for(int i=0;i<(len_str1+len_str2)-1;i++){
        printf("%c",str1[i]);
    }
}
//Question 9

#include<stdio.h>
int main(){
char str[200];
int c,a[200],length=0,temp;
printf("Enter string\n");
fgets(str,200,stdin);
for(int i=0;i<str[i];i++){
    c=str[i];
    
    a[i]=c;
    length++;
    
    
}
for(int j=0;j<length;j++){
    for(int k=0;k<length;k++){
        if(a[j]<a[k]){
            temp=a[k];
            a[k]=a[j];
            a[j]=temp;
        }
    }

}
for(int i=0;i<length;i++){
    char x=a[i];
    str[i]=x;

    printf("%c ",str[i]);
}
}

//Question 10

#include<stdio.h>
int main(){
    int freq[150];
    char a[20];
    printf("Enter the string\n");
    fgets(a,20,stdin);
    for(int i=0;i<150;i++){
        freq[i]=0;
    }
    for(int i=0;a[i]!=0;i++){
        for(int j=0;j<150;j++){
            int val=a[i];
            if(val==j){
                freq[j]++;
            }
        }

    }
    for(int i=0;i<150;i++){
        if(freq[i]!=0){
            char c=i;
            printf("The frequency for %c is  %d\n",c,freq[i]);

        }
    }
}
