#include<iostream>
#include<unordered_map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_map<string,vector<string>> phbook;
    phbook["rahul"].push_back("9110");
   phbook["rahul"].push_back("9112");
phbook["rahul"].push_back("9113");
phbook["rahul"].push_back("9114");
phbook["kajal"].push_back("8112");
phbook["kajal"].push_back("8113");
phbook["kajal"].push_back("8114");
phbook["kajal"].push_back("8115");
for(auto it:phbook){
    cout<< "Name "<<it.first <<"->";
 for(auto s:it.second){
     cout<<s<<",";
 }
 cout<<endl;
}
string name ;
cin>>name;
if(phbook.count(name)==0){
    cout<<"Absent"<<endl;
}
else
{
    for(string s: phbook[name]){
    cout<<s<<endl;        
    }
}

}
