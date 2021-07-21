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
    string defangIPaddr(string address)
    {
        string result="";
        string temp="";
        for(int i=0;i<address.length();i++)
        {
            if(address[i]=='.') result+="[.]";
            else
            {
                result+=temp+address[i];
            }
            temp="";
        }
        return result;
    }
};
int main()
{
    Solution s;
    string rr;
    string input="255.100.50.0";
    rr=s.defangIPaddr(input);
    cout<<rr<<endl;


}
