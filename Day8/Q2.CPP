#include<bits/stdc++.h>
using namespace std;
string solve(vector<string>& vec)
{
string s="";
int a=vec.size();
if(a==1)
    {
return vec[0];
}
int c=0;
while(true)
{
for(int i=0;i<a-1;i++)
{
if(vec[i].size()==c || vec[i][c]!=vec[i+1][c])
{
return s;
}
}
s+=vec[0][c];
c++;
}
}
int main()
{
int a;
cin>>a;
vector<string> vec(a);
for(int i=0;i<a;i++)
{
cin>>vec[i];
}
string s=solve(vec);
cout<<s<<endl;
return 0;
}
