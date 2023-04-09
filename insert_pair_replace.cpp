#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>mp;

    mp.insert({2,30});
    mp.insert({3,40});
    mp.insert({4,50});
    mp.insert({5,60});

    for(auto it = mp.begin();it !=mp.end();it++)
    {
        cout<<it->first<<'\t'<<it->second<<endl;

    }
    mp[2] = 90;
    mp[3] = 100;

    cout<<"KEY ELEMENT\n";

    for(auto it = mp.begin();it != mp.end();it++)
    {
        cout<<it->first<<'\t'<<it->second<<endl;

    }
    return 0;

};