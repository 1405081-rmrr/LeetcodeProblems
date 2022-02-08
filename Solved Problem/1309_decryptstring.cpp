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
    string freqAlphabets(string s) {
        map<int,char>mp;
        int temp;
        int string_to_int=0;
        string result="";
        int j=1;
        for(char c='a';c<='i';c++)
        {
            mp.insert({j,c});
            j++;
        }
        j=10;
        for(char c='j';c<='z';c++)
        {
            mp.insert({j,c});
            j++;
        }
        /*cout<<"Map key value "<<endl;
        for(int i=1;i<=26;i++)
        {
            cout<<mp[i]<<endl;
        }*/
        j=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='#')
            {
               temp=(int)(s[i-2])-'0';
               cout<<"Temp "<<temp<<endl;
               temp=temp*10+(int)(s[i-1])-'0';
               cout<<"s[i-2] "<<s[i-2]<<endl;
               cout<<"s[i-1] "<<s[i-1]<<endl;
               ///cout<< "String to int "<<string_to_int<<endl;
               result+=mp[temp];
               cout<<"Result "<<result<<endl;
               i-=2;
            }
            else
            {
               temp=(int)(s[i])-'0';
               result+=mp[temp];
               temp=0;

            }
        }
        int final_array_size=result.size();
        for(int i=0;i<result.size()/2;i++)
        {
            char t=result[i];
            result[i]=result[final_array_size-i-1];
            result[final_array_size-i-1]=t;
        }
        return result;
    }

};
int main()
{
    Solution *s=new Solution;
    string r=s->freqAlphabets("1326#");
    cout<<r;
    return 0;
}
