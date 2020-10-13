#include <bits/stdc++.h>
using namespace std;
    // In maps keys are ordered and in unordered map it is unordered 
class Student
{
 
 public:
string firstname ;
string lastname;
string rollno;
Student(string f, string l , string no){
firstname = f;
lastname =  l;
rollno = no;
}
bool operator ==(const Student &s)const{
    return rollno == s.rollno?true:false;
}
};
class Hashfun{
    public:
    // this is a type of unsigned int memory in c++
    size_t operator()(Student &s) const {
        return s.firstname.length() + s.lastname.length();
    }
};
int main(int argc, char const *argv[])
{   
   unordered_map<string,int > sm;
   Student s1("Prateek", "Narang","010");
  Student s2("Rahul", "Kumar","040");
  Student s3("Rahul", "Kumar","050");
 Student s4("Cool", "Sarthak","060");
 //Add Student - marks to hashmap
// //   sm[s1] = 100;
// //   sm[s2] = 200;
// //   sm[s3] = 300;
// //   sm[s4] = 400;
//  cout<< sm[s3] <<endl;
// for(auto s:sm){
//     cout<<s.first.firstname << " " << s.first.rollno<<endl << " Marks" <<s.second<<endl;
// }
}

