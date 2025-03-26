//enter the number aand check whether it is a palindrome number or not

#include<iostream>
using namespace std;

bool palindrome(int num){
    
    if(num<0) return false;
    int original=num;
    int rev=0;

    while(num>0){
        int digit=num%10;
        rev=rev*10+digit;

        num=num/10;

    }
    if(rev==original) return true;
    else return false;
}

int main(){
    int num;
    cout<<"enter the number to check it is palindrome ";
    cin>>num;

    
    cout<<palindrome(num);
}