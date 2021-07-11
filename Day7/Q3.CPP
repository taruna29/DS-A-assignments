#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
vector<vector<int>> vec(a,vector<int> (b));
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
cin>>vec[i][j];
}
}
int v,ans=0;
for(int i=0;i<vec.size();i++)
{
auto lwr=upper_bound(vec[i].rbegin(),vec[i].rend(),-1);
v=lwr-vec[i].rbegin();
ans+=v;
}
cout<<ans<<endl;
return 0;
}
