#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string s= to_string(num);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='6')
            {
                s[i]='9';
                break;
            }
        }
        num=stoi(s);
        return num;
    }
};
int main()
{
    Solution s =Solution();
    cout<< s.maximum69Number(9669)<<endl;
}
