#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s_new;
        stack<char> t_new;
        s_new.push('-');
        t_new.push('-');
        string r_s="";
        string r_t="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')
            {
                s_new.push(s[i]);
            }
            else
            {
                if(s_new.top()!='-')
                s_new.pop();
            }
         cout << s_new.top()<<endl;

        }

      while(s_new.empty()==false)
      {

        r_s+=s_new.top();
        s_new.pop();
      }
        reverse(r_s.begin(),r_s.end());
        cout<<r_s<<endl;

          for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#')
            {
                t_new.push(t[i]);
            }
            else
            {
                if(t_new.top()!='-')
                t_new.pop();
            }

        }

      while(t_new.empty()==false)
      {

        r_t+=t_new.top();
        t_new.pop();
      }
        reverse(r_t.begin(),r_t.end());
        cout<<r_t<<endl;
        cout<< r_s <<" " <<r_t<<endl;
        return r_s==r_t;
    }
};
int main()
{
    Solution s=Solution();
    cout<< s.backspaceCompare("y#fo##f","y#f#o##f")<<endl;
}
