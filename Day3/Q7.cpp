#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
int k;
cin>>k;
string st;
for(auto i: s)
{
if(i==' ')
{
k--;
}
if(k==0)
{
break;
}
st+=i;
}
cout<<st<<endl;
return 0;
}
