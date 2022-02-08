// C++ program to demonstrate array of strings using
// 2D character array
#include <iostream>
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
    int romanToInt(string s) {
        map<char,int> mp;

        mp.insert({'I' , 1});
        mp.insert({'V' , 5});
        mp.insert({'X' , 10});
        mp.insert({'L' , 50});
        mp.insert({'C' , 100});
        mp.insert({'D' , 500});
        mp.insert({'M' , 1000});

        int result= 0;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]<mp[s[i+1]]){
                result+=mp[s[i+1]]-mp[s[i]];
                i++;
            }else{
                result+=mp[s[i]];
            }
        }
        return result;
    }
};
int main()
{
    string input;
    while(true){
    cin>>input;
    if(input=="exit") return 0;
    Solution s;
    int result=s.romanToInt(input);
    cout<<"Result : "<<result<<endl;
    }
}


