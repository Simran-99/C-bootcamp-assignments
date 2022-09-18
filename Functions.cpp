//Question 1

#include<iostream>
using namespace std;
void return_prime(int);
int main(){
    int a;
    cout<<"Enter the number";
    cin>>a;
    return_prime(a);
}
void return_prime(int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>1){
        cout<<"Not Prime";
    }
    else{
        cout<<"prime";
    }
} 

// Question 2

#include<iostream>
void find_highest(int);
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    find_highest(n);
}
void find_highest(int n){
    int num=0;
    int temp;
    while(n>0){
        temp=n%10;
        if(temp>num){
            num=temp;
        }
        n=n/10;

    }
    cout<<"The highest value digit is"<<num;
}

//Question 3
#include<iostream>
#include<math.h>
using namespace std;
void calculate_power(int,int);
int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"Enter the power:";
    cin>>b;
    calculate_power(a,b);
}
void calculate_power(int x,int y){
    int product;
    product=pow(x,y);
    cout<<"The answer is:"<<product;
    
} 

//Question 4

#include<iostream>
using namespace std;
void print_pascal(int);
int main(){
    cout<<"Enter the value";
    int n;
    cin>>n;
    print_pascal(n);

}
void print_pascal(int n){
    int a[n][2*n];
    

    for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
            a[i][j]=0;
        }
    }



    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if((j==((n-1)+i)) || (j==((n+1)-i))){
                a[i][j]=1;
                }
                
            
            else if(j<((n-1)+i) && j>((n+1)-i)){
                a[i][j]=a[i-1][j-1]+a[i-1][j+1];
            }
                } 

            
            
        }
    

    
    
        
       
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(a[i][j]!=0){
                cout<<i;
                cout<<j;
            
                cout<<a[i][j]<<" ";
                cout<<endl;
            }
            
            
       
       
    } 
     cout<<endl;
    
    

}
}
    


//Question 5

 #include<iostream>
void find_term(int);
using namespace std;
int main(){
    int n;
    cout<<"Enter the number you want to search";
    cin>>n;
    find_term(n);
}
void find_term(int n){
    int a=0;
    int b=1;
    int c;
    for(int i=0;i<n*2;i++){
        c=a+b;
        a=b;
        b=c;
        if(c<n){
            continue;
        }
        else if(c==n){
            cout<<"The number exists";
            break;
        }
        else if(c>n){
            cout<<"The number does not exists";
            break;
        }
    }
    } 

    //Question 6

  #include<iostream>
    using namespace std;
    int swap_val(int &,int &);
    int main(){
        int a,b;
        cout<<"Enter two numbers";
        cin>>a>>b;
        cout<<"The values are:"<<a<<" "<<b;
        a,b=swap_val(a,b);
        cout<<"The new values are:"<<a<<" "<<b;

    }
    int swap_val(int &m,int &n){
        int temp;
        temp=m;
        m=n;
        n=temp;
        return m,n;

    } 

    //Question 7

    #include<iostream>
    using namespace std;
    int add(int,int);
    int add(int,int,int);
    
    int main(){
        int sum,sum_1;
        sum=add(5,6);
        sum_1=add(4,2,1);
        cout<<sum<<endl;
        cout<<sum_1;
        

    }
    int add(int a,int b){
        int sum=a+b;
        return sum;
    }
    int add(int a,int b,int c){
        int sum=a+b+c;
        return sum;
    } 

    //Question 8
   #include<iostream>
    using namespace std;
    float calculate_area(int);
    int calculate_area(int,int);
    double calculate_area(double,double);
    int main(){
        float a=calculate_area(4);
        int b=calculate_area(4,7);
        double c=calculate_area(7.6,8.9);
        cout<<a<<" "<<b<<" "<<c;
        


        
       

    }
    float calculate_area(int r){
        float area;
        area=3.14*r*r;
        return area;
    }
    int calculate_area(int l,int b){
        int area;
        area=l*b;
        return area;
    }
    double calculate_area(double b,double h){
        double area;
        area=0.5*b*h;
        return area;
    }

//Question 9

#include<iostream>
using namespace std;
int find_max(int,int);
double find_max(double,double);
int main(){
    int a;
    double b;
     a=find_max(7,9);
     b=find_max(5.7,9.4);
     cout<<a<<endl<<b;

}
int find_max(int x,int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }

}
double find_max(double x,double y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }

 }


//Question 10

#include<iostream>
using namespace std;
int add(int,int);
double add(double,double);
int main(){
    int a;
    double b;
     a=add(7,9);
     b=add(5.7,9.4);
     cout<<a<<endl<<b;

}
int add(int x,int y){
    return x+y;

}
double add(double x,double y){
    return x+y;

 }


