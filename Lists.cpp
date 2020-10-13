
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l1 = {1,2,3,10,8,5};
    list<string> l2{"apple","guava","mango","banana"};
    l2.push_back("pineapple");
    l2.sort();
    l2.reverse();
    cout<<l2.front()<<endl;
    l2.pop_front();
    l2.push_back("kiwi");
    cout<<l2.back()<<endl;
    for (string s : l2)
    {
   cout<<s<< "-->";
    }
    l2.push_back("guava");
    l2.push_back("grapes");
    l2.push_back("guava");
 string s;
 cin>>s;
 // when we have to remove any element by value
 l2.remove(s);
 for(auto it : l2){
     cout<<it<<" ";
 }
 cout<<endl;
//   we can erase one or more elemnts from the list b ythat index
auto it = l2.begin();
it++;
it++;
l2.erase(it);
for(auto it : l2){
     cout<<it<<" ";
 }
 cout<<endl;
it = l2.begin();
it++;
l2.insert(it,"FruitJuice"); // first parameter should be the position and seconnd parameter should be the name of the object
for(auto it : l2){
     cout<<it<<" ";
 }
 cout<<endl;

}
