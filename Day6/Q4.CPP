#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
int a=arr.size();
for(int i=0;i<a;i++)
{
reverse(arr[i].begin(),arr[i].end());
}
for(int i=0;i<a;i++)
{
for(int j=0;j<a;j++)
{
arr[i][j]=1^arr[i][j];
}
}
return arr;
}
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
vector<vector<int>> ans=flipAndInvertImage(arr);
for(auto i: ans)
{
for(auto j:i)
{
cout<<j<<" ";
}
cout<<endl;
}
return 0;
}
