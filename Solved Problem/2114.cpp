#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int _max=1e-3;
        int _count=0;
        string temp="";
        for(int i=0;i<sentences.size();i++)
        {
          temp=sentences[i];
          for(int j=0;j<temp.length();j++)
          {
              if(temp[j]==' ')_count++;
          }
          ///cout<<_count+1<<endl;
          if(_count+1>=_max) _max=_count+1;
          _count=0;
        }
        return _max;

    }
};

int main()
{
    Solution s=Solution();
    vector<string> sentence={"please wait", "continue to fight", "continue to win"};
    cout<<s.mostWordsFound(sentence);
    return 0;
}
