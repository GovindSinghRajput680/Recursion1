#include<iostream>
using namespace std;
int sum(int a,int b){
    if(a+1>=b) return 0;
    if((a+1)%2 != 0) {
        return 1+a+(sum(1+a,b));
    }
    else return sum(1+a,b);
    }
    

int main(){int a,b;
cout<<"Enter the values for a and b respectively : ";
cin>>a>>b;
cout<<"Sum of odd numbers between these two numbers is "<<sum(a,b);
}