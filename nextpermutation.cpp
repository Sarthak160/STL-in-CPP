
#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a<=b;
}

int main(int argc, char const *argv[])
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
     // rotate function rotate the array after the  ith index 
     rotate(arr,arr+2,arr+n);
     for (int  i = 0; i < n; i++)
     {
         cout<<arr[i]<< " ";
     }
     cout<<endl;
     vector<int> v = {10,20,30,40,50};
     rotate(v.begin(),v.begin()+3,v.end());
    for (int  i = 0; i < v.size(); i++)
    {  
        cout<<v[i]<<endl;
        /* code */
    }
    cout<<endl;
    next_permutation(v.begin(),v.end()); //  yh function isse next permutation deta h 
    for(int x: v){
        cout<<x<< " ";
    }
    
    return 0;
}
