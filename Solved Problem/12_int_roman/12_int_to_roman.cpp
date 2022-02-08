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
    string intToRoman(int num)
    {
    map<int,string> roman_num_list;
    roman_num_list.insert({1,"I"});
    roman_num_list.insert({4,"IV"});
    roman_num_list.insert ({5,"V"});
    roman_num_list.insert({9,"IX"});
    roman_num_list.insert({10,"X"});
    roman_num_list.insert({40,"XL"});
    roman_num_list.insert({50,"L"});
    roman_num_list.insert({90,"XC"});
    roman_num_list.insert({100,"C"});
    roman_num_list.insert({400,"CD"});
    roman_num_list.insert({500,"D"});
    roman_num_list.insert({900,"CM"});
    roman_num_list.insert({1000,"M"});
    map<int,string> :: reverse_iterator itr;
        int index=0;
        char arr[20];
        int n;
        char *roman_symbol_convert_character;
        while(num!=0){
        for(itr=roman_num_list.rbegin();itr!=roman_num_list.rend();itr++)
        {
            if(num-(itr->first)>=0)
            {
                n= itr->second.length();
              /// char roman_symbol_convert_character[itr->second.length()];
               roman_symbol_convert_character=new char[itr->second.length()];
                strcpy(roman_symbol_convert_character,itr->second.c_str());
                num=num-itr->first;
                for(int i=0;i<n;i++)
                {
                    arr[index]=roman_symbol_convert_character[i];
                    index++;
                }
               /// index++;
                break;
            }

        }
            delete roman_symbol_convert_character;
        }
        string s="";
        for(int i=0;i<index;i++)
        {
            s=s+arr[i];
        }
        return s;
    }


};
int main()
{
    Solution s;
    string r=s.intToRoman(1994);
    cout<<r;
}
