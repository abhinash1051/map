#include<iostream>
#include<map>
using namespace std;
string findnumber(string s,int n)
{
    string ans = "";

    map<char,int>mp;

    for(int i = 0;i<n;i++)
    {
        mp[s[i]]++;

    }
    while(mp['z']&& mp['r']&& mp['o'])
    {
        mp['z']--;
        mp['e']--;
        mp['r']--;
        mp['0']--;
        ans += '0';

    }
    while(mp['o'] && mp['n'] && mp['e'])
    {
         mp['o']--;
        mp['n']--;
        mp['e']--;
        ans += '1';
    }
    while(mp['t'] && mp['w'] && mp['o'])
    {
         mp['t']--;
        mp['w']--;
        mp['o']--;
        ans += '2';
    }
}
int main()
{
    string s = "zerootwneozeroc";
    int n =  s.size();
    cout<<findnumber(s,n);

    return 0;
}