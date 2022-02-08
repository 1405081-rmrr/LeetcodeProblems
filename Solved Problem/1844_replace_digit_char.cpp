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
    string replaceDigits(string s) {
        string result="";
        int next_char;
        int cast_to_int;
        char after_convert_to_char;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                ///result[i]=s[i];
                result+=s[i];
                cout<<"Even Result "<<result[i]<<endl;
            }
            else if(i%2==1)
            {
                cast_to_int=(int)s[i-1];
                cout<<"cast to int "<<cast_to_int<<endl;;
                cast_to_int+=(int) s[i]-'0';
                cout<<"Cast to int "<<cast_to_int<<endl;
                after_convert_to_char=char(cast_to_int);
                result[i]=after_convert_to_char;
                result+=after_convert_to_char;
               /// cout<<"After convert "<<result[i]<<endl;
            }
        }
        cout<<"Result in function "<<result<<endl;
        return result;
    }
};
int main()
{
    Solution s;
    string r=s.replaceDigits("a1b2c3d4e");
    cout<<"Result is "<<r;
}
