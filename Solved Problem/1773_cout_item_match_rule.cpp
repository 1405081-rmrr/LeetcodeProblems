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
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int _count=0;
        if(ruleKey=="type")
        {
            for(int i=0;i<items.size();i++)
            {
                if(items[i][0]==ruleValue)
                {
                    _count++;
                }
            }
        }
        else if(ruleKey=="color")
        {
              for(int i=0;i<items.size();i++)
            {
                if(items[i][1]==ruleValue)
                {
                    _count++;
                }
            }
        }
          else if(ruleKey=="name")
        {
              for(int i=0;i<items.size();i++)
            {
                if(items[i][2]==ruleValue)
                {
                    _count++;
                }
            }
        }
        else
        {

        }
        return _count;
    }
};
int main()
{
    Solution *s=new Solution;
    vector<vector<string>>items;
    vector <string>v1;
    v1.push_back("phone");
    v1.push_back("blue");
    v1.push_back("pixel");
    items.push_back(v1);
    vector <string>v2;
    v2.push_back("computer");
    v2.push_back("silver");
    v2.push_back("lenovo");
    items.push_back(v2);
    vector <string>v3;
    v3.push_back("phone");
    v3.push_back("gold");
    v3.push_back("iphone");
    items.push_back(v3);
    int r=s->countMatches(items,"type","phone");
    cout<<r;
    return 0;
}

