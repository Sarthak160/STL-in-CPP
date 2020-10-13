#include<iostream>
#include<set>
using namespace std;
// insertion and rempvel in O(logn)
int main(int argc, char const *argv[])
{
    int arr[] = {10,20,11,9,8,11,10};
    int n = sizeof(arr)/sizeof(int);
    set<int> s;
    for (int  i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
      s.erase(10);
 auto it = s.find(11);
 s.erase(it);
    for (auto  i = s.begin(); i !=s.end() ; i++)
    {
        cout<< *i << " "; 
    }
    cout<<endl;
    
    return 0;
}
