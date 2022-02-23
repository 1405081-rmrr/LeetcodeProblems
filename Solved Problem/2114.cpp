#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int _max=1e-3;
        int _count=0;
        string temp="";
        for(int i=0;i<sentences.size();i++) //protita string nisi vector theke
        {
          temp=sentences[i]; //ekta string rakhsi
          for(int j=0;j<temp.length();j++) //string er length() nisi
          {
              if(temp[j]==' ')_count++; //space count korsi. 
          }
          ///cout<<_count+1<<endl;
          if(_count+1>=_max) _max=_count+1; //space jotogula ache word obsshoi tar ceye 1
		  //beshi thakbe. tai _count ke 1 baraisi.
          _count=0; //_count 0 banaisi karon porer string abar _count assign korsi
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
