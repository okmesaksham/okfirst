#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, target,i;
    cin>>n;
    vector<int>v;
    for(i=0; i<n; i++)
    {
        int b;
        cin>>b;
        v.push_back(b);
    }
    cin>>target;
    for(i=0; i<n; i++)//i>=n
    {
        if(v[i]==target){
            cout<<"target";
            break;//i<n
        }
    }
    if(i>=n){
        cout<<"Not Found";
    }

    return 0;
