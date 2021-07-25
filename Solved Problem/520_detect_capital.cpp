#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <stdlib.h>
#include<stdio.h>
using namespace std;
int AllCapital(string s);
int AllSmall(string s);
int FirstCapital(string s);
class Solution {
public:
    bool detectCapitalUse(string word) {

      /// bool result;
       if(FirstCapital(word)==1) return true;
       else if(AllCapital(word)==1) return true;
       else if(AllSmall(word)==1) return true;
       else return false;
    }

};
    int AllCapital(string s)
    {
        int string_length=s.size();
        int _count=0;
        int chaaterbal=0;
        for(int i=0;i<string_length;i++)
        {
            if(s[i]>='A' && s[i]<='Z') _count++;
        }
        if(_count==string_length)
        {
            chaaterbal=1;
            return chaaterbal;
        }
        else return chaaterbal;

    }
    int AllSmall(string s)
    {
        int string_length=s.size();
        int _count=0;
        int chaaterbal=0;
        for(int i=0;i<string_length;i++)
        {
            if(s[i]>='a' && s[i]<='z') _count++;
        }
          if(_count==string_length){
            chaaterbal=1;
            return chaaterbal;
          }
          else return chaaterbal;

    }
    int FirstCapital(string s)
    {
        int chaaterbal=0;
        if(s[0]>='A' && s[0]<='Z')
        {
            int _count=0;
            for(int i=1;i<s.size();i++)
            {
                if(s[i]>='a' && s[i]<='z') _count++;
            }
            if(_count==s.size()-1)
            {
                chaaterbal=1;
                return chaaterbal;
            }
            else return chaaterbal;
        }
        return chaaterbal;

    }
int main()
{
    Solution *s=new Solution;
    bool r=s->detectCapitalUse("CCFGG");
    cout<<boolalpha<<r;
    return 0;
}
