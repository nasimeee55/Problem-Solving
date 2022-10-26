#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector decleration
    vector<int>v;
    //vector initialisation
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //vector output
    cout<<v[0]<<" ";
    cout<<v[1]<<endl;
    //other ways
    cout<<v.at(0)<<" ";
    cout<<v.at(1)<<endl;
    //vector size
    cout<<v.size()<<endl;
    //vector print using for loop
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //front value
    cout<<v.front()<<endl;
    //back value
    cout<<v.back()<<endl;
    //vector clear
    v.clear();
    cout<<v.size()<<endl;
    //vector empty
    if(v.empty())cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;

    //pop back
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    v.pop_back();
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //Vector Erase
    v.erase(v.begin()+1,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //vector insert
    v.insert(v.begin(),10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    //multiple value insert
    v.insert(v.begin()+1,3,100);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>v1;
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(13);
    v1.push_back(14);
    v1.push_back(15);
    v1.push_back(16);
    v1.push_back(17);
    v1.push_back(18);

    //swapping
    swap(v,v1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    //vector sorting
    sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    //vector sorting
    reverse(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    //using iterator
    vector<int>::iterator it;
    it = v1.begin();
    cout<<*it<<endl;
    for(it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

}
