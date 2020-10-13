#include<iostream>
#include<queue>
using namespace std;


class Person {
public:
string name ;
int age;
Person(){

}
Person(string n , int a){
name = n;
age  = a;
}
};

 class PersonCompare{
     public:
  
     bool operator()(Person A, Person B){
         return A.age < B.age;
     }
 };
int main(int argc, char const *argv[])
{
   // priority_queue<int> pq;
    priority_queue<Person,vector<int>,PersonCompare> pq;
    int n;
    cin>>n;
    
    for (int  i = 0; i < n; i++)
    {
     string name;
     int age;
     cin>>name>>age;
     Person p(name,age);
     pq.push(p);
    }
    int k =3;
    for (int  i = 0; i < k; i++)
    {
        Person p = pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
    }
    

    return 0;
}
