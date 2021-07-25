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
    string toLowerCase(string s) {
        string result="";
        int ascii;
        char convert_to_char;
        for(int i=0;i<s.size();i++)
        {
            ascii= s[i];
            if(ascii>=65 && ascii<=90)
            {
                ascii+='a'-'A';
                convert_to_char=ascii;
               /// convert_to_char=char(ascii); ///etao lekha jay
                result+=convert_to_char;
            }
            else result+=s[i];

        }
        return result;
    }
};
int main()
{
    Solution *s=new Solution;
    string r=s->toLowerCase("LOVELY");
    cout<<r;
}
