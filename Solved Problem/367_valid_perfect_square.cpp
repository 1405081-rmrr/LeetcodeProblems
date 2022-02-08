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
    bool isPerfectSquare(long long int x)
    {
        if(x==1 || x==0) return true;

       long long int i=1;
       long long int result=i;
        while(result<=x)
        {
            if(result==x) return true;
            i++;
            result=i*i;
        }

         return false;
    }

};
int main()
{
    long long num= 2147395600;
    Solution *s=new Solution();
    bool result=s->isPerfectSquare(num);
    if(result==true)
    cout<<"True"<<endl;
    else cout<<"False"<<endl;
}
