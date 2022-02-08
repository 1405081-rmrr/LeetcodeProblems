#include<iostream>
//#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cstdio>
#include <stdlib.h>
#include<stdio.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int original_number=x;
        if(x<0) return false;
        else if(x>=0 && x<=9) return true;
        else{
        long long int reverse_number=0;
        long long int remainder;
        while(x!=0)
        {
           remainder=x%10;
           reverse_number=reverse_number*10+remainder;
           x=x/10;
        }
        if(reverse_number==original_number)
        {
            return true;
        }
        else{
            return false;
        }
        }

    }
};
int main()
{
   /// cout<<sizeof(int)<<endl;
  ///  cout<<sizeof(long long int)<<endl;
   /// long long int x=;
   /// cout<<x<<endl;

   Solution s;
   bool result;
   result=s.isPalindrome(-2147483648);
   if(result) cout<<"true"<<endl;
   else cout<<"false"<<endl;
   return 0;
}

