#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char const *argv[])
{
   // priority_queue<int> pq;
    priority_queue<int,vector<int>,greater<int>>pq;
    int n,num;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        cin>>num;
        pq.push(num); //O(logn)
    }
    // Remove the elements from the heap
    while (!pq.empty())
    {
        cout<< pq.top()<<" ";
        pq.pop();   
        /* code */
    }
    
    
    return 0;
}
