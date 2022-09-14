//Question 1

#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World";
    return 0;

}

//Question 2

#include<iostream>
using namespace std;
int main(){
    cout<<"Hello";
    cout<<endl;
    cout<<"World";
    return 0;
} 

//Question 3

#include<iostream>
using namespace std;
int main(){
    int a,b,sum=0;
    cout<<"Enter the two number";
    cin>>a>>b;
    sum=a+b;
    cout<<"The sum is"<<sum;
    return 0;

} 

//Question 4

#include<iostream>
using namespace std;
#define pi 3.14
int main(){
    float r,area;
    cout<<"Enter the radius";
    cin>>r;
    area=pi*r*r;
    cout<<"The area is: "<<area;
    return 0;

} 

//Question 5

#include<iostream>
using namespace std;
int main(){
    int l,b,h;
    float vol;
    cout<<"Enter the length, breadth and height";
    cin>>l>>b>>h;
    vol=l*b*h;
    cout<<"The volume is"<<vol;
    return 0;


}

//Question 6
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    float average;
    cout<<"Enter the three numbers";
    cin>>a>>b>>c;
    average=(a+b+c)/3;
    cout<<"The average is:"<<average;
    return 0; 

}


//Question 7

#include<iostream>
using namespace std;
int main(){
    int n,sq;
    cout<<"Enter a number";
    cin>>n;
    sq=n*n;
    cout<<"The square is"<<sq;
    return 0;

}

//Question 8

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"a and b is "<<a<<" "<<b;

}

//Question 9

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    if(a>b){
        return a;

    }
    else{
        return b;

    }
}

//Question 10

#include<iostream>
using namespace std;
int main(){
    int a[10],sum=0;
    cout<<"Enter the elements";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        sum=sum+a[i];
    }
    cout<<"The sum is"<<sum;

}