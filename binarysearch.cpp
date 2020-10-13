
#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {20,30,40,40 ,50,100,1100};
    int n = sizeof(arr)/sizeof(int);
    //search --> 
    int key;
    cin>>key;
    bool present  = binary_search(arr,arr+n,key);
    if(present==0){
        cout<<"element not found"<<endl;
    }
    else
    {
        cout<<"found"<<endl;
    }
    auto lb = lower_bound(arr,arr+n,40);
    cout<<*lb<<"  "<<lb-arr<<endl;
    if(lb-arr==n){
        cout<<"Element not present"<<endl;
    }
    auto ub = upper_bound(arr,arr+n,40);
    cout<<*ub<<"  "<<ub-arr<<endl;
    if(ub-arr==n){
        cout<< " Element is not present"<<endl;
    }

    // to find the no. of occurences in an array ;
   //    ... note array should be sorted

  cout<<ub-lb<<endl;

    return 0;
}
