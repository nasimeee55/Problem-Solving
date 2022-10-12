#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"1st quadrant"<<endl;
    }
    else if(x>0 && y<0){
        cout<<"2nd quadrant"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"3rd quadrant"<<endl;
    }
    else{
        cout<<"4th quadrant"<<endl;
    }
    return 0;
}
