#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int value;
    int position;
    cin>>value>>position;
    for(int i = n-1;i>=position-1;i--){
        a[i+1]=a[i];
    }
    a[position-1]=value;
    for(int i=0;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}