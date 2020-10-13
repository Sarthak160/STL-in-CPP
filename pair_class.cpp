
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  pair<int , char> p;
  p.first = 10;
  p.second = 's';
  pair<int,char> p2(p);
  cout<<p.first<<" "<<p.second<<endl;
  pair<int, string> p3 = make_pair(100," Audi");
  cout<<p3.first<< " "<< p3.second<<endl;
  // take input
  int a,b;
  cin>>a>>b;
  pair<int,int> p4 = make_pair(a,b);
  // array of pairs
  // vector of pairs 
  pair<pair<int, int > , string> car;
  car.first.first  = 100;
  car.first.second = 200;
  car.second  = "BMW";
  cout<< car.first.first << endl;
  cout<<car.first.second<<endl;
  cout<<car.second<<endl;
}
