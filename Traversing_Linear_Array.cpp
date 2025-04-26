// Algorithm:Traversing Linear __ARRAY
// Let LA be a linear array with lower bound LB and upper bound UB.
// This algorithm will apply process to each element.
// step 1: START.
// step 2: Initialize counter
// Set K=LB.
// step 3:(Repeat) repeat step 4 & 5 until K<=UB.
// step 4: (Visit element) Apply process to LA[k].
// step 5:Increase Counter K = K+1.
// [END OF LOOP]
// step 6:STOP.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int size = sizeof(a) / sizeof(a[0]); //to determine size of array
    cout<<"Elements of the array are :"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}