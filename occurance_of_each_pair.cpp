#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,int>mp;

    mp.insert({100,200});
    mp.insert({108,206});
    mp.insert({104,207});
    mp.insert({101,202});

    cout<<"key element\n";

    for(auto it = mp.begin(); it !=mp.end();it++)
    {
        cout<<it->first<<'\t'<<it->second<<endl;

    }
    return 0;

};