#include<iostream>
using namespace std;
int main()
{
    int n,rem;
    cin>>n;
    if(n>9){
        rem=n%10;
        n=n/10;
        if(n==rem){
        cout<<"Palindrome"<<endl;
        }
        else{
            cout<<"Not a palindrome"<<endl;
        }
    }
    else{
        cout<<"Palindrone"<<endl;
    }

    return 0;
}
