//link: https://www.codingninjas.com/codestudio/problems/amazing-strings_893182
#include <bits/stdc++.h>
using namespace std;
void answer(string s, string w, string sw)
{
    int i=0;
    vector <int> s1(26,0); vector <int> w1(26,0);vector <int> sw1(26,0);
    for(i=0;i<s.size();i++)
       s1[s[i]-'A']++;
    for(i=0;i<w.size();i++)
       w1[w[i]-'A']++;
    for(i=0;i<sw.size();i++)
       sw1[sw[i]-'A']++;
    for(i=0;i<26;i++)
      if(s1[i]+w1[i]!=sw1[i])
      {
          cout<<"NO\n";
          break;
      }
    if(i==26)
      cout<<"YES\n";
}