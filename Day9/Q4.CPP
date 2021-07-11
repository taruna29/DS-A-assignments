#include<bits/stdc++.h>
using namespace std;
int strStr(string hstack, string ndle)
{
if(ndle.size()==0 ) return 0;
if(hstack.find(ndle)!=-1)
{
return hstack.find(ndle);
}
return -1;
}
int main()
{
string hstack,ndle;
cin>>hstack;
cin>>ndle;
int position=strStr(hstack,ndle);
cout<<position<<endl;
return 0;
}
