#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s)
{
 int dcm = 0;
 int sz = s.size() - 1;
 for(int i = 0; i < s.size(); i++)
 {
  int a = s[i] - '0';
  dcm += a*pow(2,sz);
  sz--;
 }
 return dcm;
}


int main()
{
 int tc; cin >> tc;
 while(tc--)
 {
  string s1, s2;
  cin >> s1 >> s2;
  int dcm1 = binaryToDecimal(s1);
  int dcm2 = binaryToDecimal(s2);
  cout << dcm1 * dcm2 << endl;
 }
}
