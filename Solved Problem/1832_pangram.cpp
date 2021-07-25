#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <stdlib.h>
#include<stdio.h>
using namespace std;


class Solution {
public:
    bool checkIfPangram(string sentence) {
    map<char,bool>mp;
    int _count=0;
    int j=0;
    for(char x='a';x<='z';x++)
    {
        mp.insert({x,false});
    }
   /// map<char,bool> :: iterator itr;
    for(int i=0;i<sentence.size();i++)
    {
        if(mp[sentence[i]]==false)
        {
            mp[sentence[i]]=true;
            _count++;
        }
    }
    if(_count==26) return true;
    else return false;

    }
};

int main()
{

 Solution *s=new Solution();
 bool result =s->checkIfPangram("thequickbrownfoxjumpsoverthelazydog");
 cout<<boolalpha<<result;
}
