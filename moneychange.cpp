
#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a<=b;
}

int main(int argc, char const *argv[])
{
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
   int n = sizeof(coins)/sizeof(int);
    int money ;
    cin>>money;
   while (money>0)
   {   
   int lb = lower_bound(coins,coins+n,money,compare)-coins-1;
   //cout<<lb<<" "<<coins[lb]<<endl;
   int m = coins[lb];
   cout<<m<<",";
   money = money - m;
   }
   cout<<endl;
    return 0;
}
