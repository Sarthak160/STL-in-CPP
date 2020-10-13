#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {1,10,11,9,100};
    int n = sizeof(arr)/sizeof(int);
    //search --> 
    int key;
    cin>>key;
    auto it = find(arr,arr+n,key);
    int index = it - arr;
    if(index == n){
        cout<<"element not found"<<endl;
    }
    else
    {
        cout<<"found at"<<index<<endl;
    }
    

    return 0;
}
