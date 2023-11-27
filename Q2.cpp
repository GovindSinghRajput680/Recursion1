#include<iostream>
using namespace std;
int step(int n){
    if(n == 1 || n == 2) return n;
    if(n == 3) return 4;
    if(n<=0) return 0;
    return  step(n-1)+step(n-2)+step(n-3);

}
int main(){int n;
cout<<"Enter number of stairs : ";
cin>>n;
cout<<"Number of ways : "<<step(n);





}