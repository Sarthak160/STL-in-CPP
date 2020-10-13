#include <bits/stdc++.h>
using namespace std;
    // In maps keys are ordered and in unordered map it is unordered 

int main(int argc, char const *argv[])
{   
    map<string,int > mp;
    mp.insert(make_pair("Mango",20));
pair<string,int> p;
p.first = "Apple";
p.second = 120;
mp.insert(p);

 mp["Banana"] = 20;
 //2.search
 string fruit;
 cin>>fruit;
 auto it = mp.find(fruit);
 if(it!=mp.end()){
     cout<< "price of " << fruit << " is"<<mp[fruit]<<endl;
 }else
 {
     cout<< "fruit is not present"<<endl;
 }
  mp.erase(fruit);
  // we can use one value for a particular key in map
  if(mp.count(fruit)){
      cout<< "Price is " <<mp[fruit] << endl;
  } 
  else
  {
      cout<< "fruit id not present" <<endl;
  }
  mp["litchi"] = 60;
  mp["pineapple"] = 80;
  for (auto i = mp.begin(); i !=mp.end(); i++)
  {
    cout<< it -> first << "and" << it ->second<<endl;      
  }
  for(auto it : mp){
      cout<<it.first << " "<<it.second<<endl;
  }
  
}
