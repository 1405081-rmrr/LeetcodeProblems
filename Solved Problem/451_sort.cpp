#include <iostream>
#include <bits/stdc++.h>

using namespace std;

     bool sortByVal(const pair<char, int> &a,
               const pair<char, int> &b)
               {
                   return (a.second > b.second);
               }
class Solution {
public:

    string frequencySort(string s)
    {
        map<char,int>m;
        vector<pair<char,int>> v;
        for(char c='a';c<='z';c++)
        {
            m.insert({c,0});
        }
        for(char c='A';c<='Z';c++)
        {
            m.insert({c,0});
        }
        for(char c='0';c<='9';c++)
        {
            m.insert({c,0});
        }
        int _count=0;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        map<char,int> :: iterator itr;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            v.push_back(make_pair(itr->first,itr->second));
        }
        sort(v.begin(),v.end(),sortByVal);
       /* for(int i=0;i<v.size();i++)
        {
            if(v[i].second>0)
            cout<<v[i].first <<" "<<v[i].second<<endl;
        }*/
        string r="";
        for(int i=0;i<v.size();i++)
        {
            char _char=v[i].first;
            int _num=v[i].second;
            r+=string(_num,_char);
        }
        ///cout<<r;
        return r;
    }

};
int main()
{
    Solution s;
    string r=s.frequencySort("cccaaa");
    cout<<r;
}
