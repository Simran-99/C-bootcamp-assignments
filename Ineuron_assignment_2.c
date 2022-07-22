//Question 1(Print Unit digit of a number)

#include<stdio.h>
int main(){
    int num;
    printf("Input a number\n");
    scanf("%d",&num);
    num=num%10;
    printf("The last digit is %d ",num);
    return 0;
} 

//---------------------------------------------------------------------------------------------------------------------

//Question 2(print a given number without last digit)

 #include<stdio.h>
int main(){
    int num;
    printf("Input a number\n");
    scanf("%d",&num);
    num=num/10;
    printf("The number except the last digit is %d ",num);
    return 0;
} 

//-------------------------------------------------------------------------------------------------------------------------

//Question 3(Swap values of two int variables)

# include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the two numbers\n");
    scanf("%d %d",&a,&b);
    printf("The actual numbers are %d, %d",a,b);
    printf("\n");
    temp=a;
    a=b;
    b=temp;
    printf("The swapped numbers are %d,%d",a,b);
    return 0;

} 

//---------------------------------------------------------------------------------------------------------------------------

//Question 4(swap values of two variables wothout use of third variable)




 #include<stdio.h>
int main(){
    int a,b;
    printf("Input the values");
    scanf("%d %d",&a,&b);
    printf("The current value of a is %d and b is %d",a,b);
    a=(a*b);
    b=(a/b);
    a=a/b;
    printf("The swapped value of a is %d and b is %d",a,b);
    return 0;
} 

//-------------------------------------------------------------------------------------------------------------------

//Question 5(to input a three-digit number and display the sum of the digits.)

#include<stdio.h>
int main(){
    int num,sum=0,digit;
    printf("Enter the number\n");
    scanf("%d",&num);
    digit=num%10;
    sum=sum+digit;
    num=num/10;

    digit=num%10;
    sum=sum+digit;
    num=num/10;

    sum=sum+num;
    printf("Sum is %d",sum);

}

//--------------------------------------------------------------------------------------------------------------------------
 //Question 6(takes a character as an input and displays its ASCII code.)

 #include<stdio.h>
int main(){
    char ch;
    int as;
    printf("Enter the character ");
    scanf("%c",&ch);
    as=ch;
    printf("The ascii value is %d",as);
    return 0;

} 

//----------------------------------------------------------------------------------------------------------------------------

//Question 7    (find the position of first 1 in LSB.)

#include<stdio.h>
int main(){
    int n,result=0,count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n!=0){
        result= n&1;
        count++;
        if(result==1){
            printf("%d",count);
            break;
        }
        n>>1;


    }
} 

//---------------------------------------------------------------------------------------------------------------

//Question8(check whether the given number is even or odd using a bitwise operator.)

#include<stdio.h>
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num & 1==1){
        printf("Odd\n");


    }
    else{
        printf("Even\n");
    }
    return 0;
}
//-----------------------------------------------------------------------------------------------------------------------

//Question 9(print size of an int, a float, a char and a double type variable)

 #include<stdio.h>
int main(){
    int i;
    float f;
    char c;
    double d;
    printf("Enter an integer");
    scanf("%d",&i);
    printf("\n");
    printf("%lu",sizeof(i));
    printf("\n");
    printf("Enter a float");
    scanf("%f",&f);
    printf("\n");
    printf("%lu",sizeof(f));
    printf("\n");
    printf("Enter an character");
    scanf("%c",&c);
    printf("\n");
    printf("%lu",sizeof(c));
    printf("\n");
    printf("Enter a double");
    scanf("%lf",&d);
    printf("\n");
    printf("%lu",sizeof(d));
    printf("\n");
    return 0;

} 

//--------------------------------------------------------------------------------------------------------------------------

//Question 10(make the last digit of a number stored in a variable as zero.)

#include<stdio.h>
int main(){
    int n,num,digit,new_num;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Enter a digit to append\n");
    scanf("%d",&digit);
    new_num=(n*10)+digit;
    printf("The new number with the appended digit is %d",new_num);

} 

//------------------------------------------------------------------------------------------------------------------------------






//Question 11(to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.)
 #include<stdio.h>
int main(){
    int num,z,zero_num;
    printf("Enter the number\n");
    scanf("%d",&num);
    z=num%10;
    zero_num=num-z;
    printf("%d",zero_num);


}

//-------------------------------------------------------------------------------------------------------------------

//Question12(program to take the amount in INR and convert it into USD.)

#include<stdio.h>
int main(){
    float inr;
    float usd;
    printf("Enter the amount in INR\n");
    scanf("%f",&inr);
    usd=inr/76.23;
    printf("The amount in usd is %f",usd);
    return 0;
}
//-------------------------------------------------------------------------------------------------------------------------------



//Question 13(program to take a three-digit number from the user and rotate its digits by  one position towards the right.)

#include<stdio.h>
int main(){
    int num,d,new_num=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    d=num%10;
    new_num=new_num+(d*100);
    num=num/10;
    d=num%10;
    new_num=new_num+(d*10);
    num=num/10;
    d=num%10;
    new_num=new_num+d;
    printf("%d",new_num);
}

//---------------------------------------------------------------------------------------------------------------------