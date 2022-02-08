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
    int subtractProductAndSum(int n)
    {
        vector<int>digits;
        int rem=0;
        while(n!=0)
        {
            rem=n%10;
            digits.push_back(rem);
            n/=10;
        }
        int result=0;
        int _add=accumulate(digits.begin(),digits.end(),0);
        int _mul=1;
        for(int i=0;i<digits.size();i++)
        {
            _mul*=digits[i];
        }
        return _mul-_add;


    }
};

int main()
{
    Solution s;
    int r=s.subtractProductAndSum(4421);
    cout<<r;
}
