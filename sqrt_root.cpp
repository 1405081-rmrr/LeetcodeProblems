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
    int mySqrt(long long int x)
    {
        if(x==1 || x==0) return x;

       long long int i=1;
       long long int result=i;
        while(result<=x)
        {
            i++;
            result=i*i;
        }
        i=(int)i;
        return i-1;
    }

};
int main()
{
    long long num= 11;
    Solution *s=new Solution();
    int result=s->mySqrt(num);
    cout<<result<<endl;
}
