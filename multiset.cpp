#include <iostream>
#include <set>
using namespace std;
// insertion and rempvel in O(logn)
typedef multiset<int>::iterator It;

int main(int argc, char const *argv[])
{
    //multiset - it can store multiple elements that have same value
    //stored in a specific -> sorted according to internal comparison object
    //values once inserted cannot be modified
    //associative container - elements are reffered by their value not by their index
    // underlying datastructure  - binary search tree
    int arr[] = {10, 20, 30, 20, 30, 30, 30, 10, 30};
    int n = sizeof(arr) / sizeof(int);
    multiset<int> m(arr, arr + n);

    //  erasing
    m.erase(20);
    //insert 80
    m.insert(80);
    for (int x : m)
    {
        cout << x << ", ";
    }
    cout << endl;
    //Count
    cout << "Count " << m.count(10) << endl;
    //find
    auto it = m.find(30);
    cout << (*it) << endl;
    //Get all elements which are equal to 30
    pair<It, It> range = m.equal_range(30);
    for (auto it = range.first; it != range.second; it++)
    {
        cout << *it << " - ";
    }
    cout << endl;
    //lowerbound and upperbound
    for (auto i = m.lower_bound(10); i != m.upper_bound(77); i++)
    {
        cout << *it << " - ";
    }
    return 0;
}
