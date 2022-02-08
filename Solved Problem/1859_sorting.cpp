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
    string sortSentence(string s) {
        string word;
        string result="";
        string word_array[9];
        stringstream ss(s);
        int index=0;
        string final_result="";
        map<int,string>m;
        map<int,string>:: iterator itr;
        map<int,string> ::reverse_iterator ritr;
        while(ss>>word)
        {
            string temp="";
            for(int i=0;i<word.size()-1;i++)
            {
                temp+=word[i];
            }
            ///temp+=" ";
            m.insert({(int)(word[word.size()-1])-'0',temp});
        }

       /* for(itr=m.begin();itr!=m.end();itr++)
        {
            cout<< itr->first<<" "<<itr->second<<endl;
        }*/
        ritr=m.rbegin();
        int _max=ritr->first;
        int _count=0;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            _count++;
            if(_count<_max)
            {
                final_result+=itr->second+" ";
            }
            else
            {
                final_result+=itr->second;
                break;
            }
        }

        return final_result;
    }
};
int main()
{
    Solution s;
    string r=s.sortSentence("Myself2 Me1 I4 and3");
    cout<<r;
    return 0;
}

