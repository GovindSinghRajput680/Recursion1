#include<iostream>
using namespace std;
// Q 3
bool check(int n){
    if(n == 1) return true;
    if(n<1) return false;
    if(n%2 == 0) return check(n/2);
    return false;
}
int main(){int n;
cout<<"Enter number : ";
cin>>n;
if(check(n)) cout<<"Enter number can be represent in the form of 2^p.";
else cout<<"Enter number can not be represent in the form of 2^p.";

}