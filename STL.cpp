#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    //Vector

    vector<int> v;

    //Iterator points to a position within range of elements
    //*it ->value of element
    // vector<int>::iterator it;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // for(it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    //else use normal i with v.size()

    //Strings

    string s = "Evogeek";
    string s1(s); //Copy String
    // cout<<s1<<endl;

    string s2(s, 3); //Substring
    // cout<<s2;

    string s3 = s.substr(0, 3);
    // cout<<s3;
    // if(s.compare(s1)==0)
    // {
    //     cout<<"Strings are equal\n";
    // }
    // cout<<s.compare(s3)<<endl;
    //Pair
    //Set of different datatypes

    pair<int, string> p;
    p = make_pair(8896, "Ronald");
    pair<int, char> p2(1, 'a');
    // cout<<p.first<<" "<<p.second<<endl;

    //Set -> Contain unique values
    set<int>set1;
    set1.insert(1);
    set1.insert(2);
    
    set<int>::iterator ir;

    for (ir = set1.begin(); ir != set1.end(); ir++)
    {
        cout<<*ir<<endl;
    }

    if(set1.find(3)==set1.end())//Returns iterator
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"found";
    }

    // MAP -> Key value pair
    //Stores frequency of elements
    map<int,int>m;
    int arr[]={1,2,3,4,5,6,5};
    for(int i=0;i<7;i++)
    {
        m[arr[i]]=m[arr[i]]+1;
    }
    map<int,int>::iterator im;
    m.erase(1);
    for(im=m.begin();im!=m.end();im++)
    {
        cout<<im->first<<" "<<im->second<<endl;
    } 
    //Unordered Map -> Hash table used
    

    return 0;
}
