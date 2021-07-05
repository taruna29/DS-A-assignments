#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
vector<vector<int>> arr(a,vector<int> (b));
for(int i=0;i<a;i++)
{
for(int j=0;j<b;j++)
{
cin>>arr[i][j];
}
}
int r,c;
cin>>r>>c;
if(r*c!=a*b)
{
for(auto i: arr)
{
for(auto j:i)
{
cout<<j<<" ";
}
cout<<endl;
}
}
else
{
vector<vector<int>> reshape(r,vector<int> (c));
for(int i=0;i<r*c;i++){
reshape[i/c][i%c]=arr[i/b][i%b];
}
for(auto i: reshape){
for(auto j:i){
cout<<j<<" ";
}
cout<<endl;
}
}
return 0;
}
