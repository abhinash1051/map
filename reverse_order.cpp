#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int>mp {
        {'a',1},
        {'b',2},
        {'c',3},
        {'d',4},
        {'e',5}
    };
    for(auto it = mp.begin(); it != mp.end();it++)
    {
        cout<<it->first<<" = "<< it ->second<<endl;

    }
    return 0;

}