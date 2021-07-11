#include<bits/stdc++.h>
using namespace std;
bool solve(vector<vector<int>>& mat1,vector<vector<int>>& mat2)
{
int k=4;
int a=mat1.size();
while(k--)
{
for(int i=0;i<a;i++)
{
for(int j=0;j<i;j++)
{
swap(mat1[i][j],mat1[j][i]);
}
}
for(int i=0;i<a;i++)
{
reverse(mat1[i].begin(),mat1[i].end());
}
if(mat1==mat2) return true;
}
return false;
}
int main()
{
int a;
cin>>a;
vector<vector<int>> mat1(a,vector<int> (a));
vector<vector<int>> mat2(a,vector<int> (a));
for(int i=0;i<a;i++)
{
for(int j=0;j<a;j++)
{
cin>>mat1[i][j];
}
}
for(int i=0;i<a;i++)
{
for(int j=0;j<a;j++)
{
cin>>mat2[i][j];
}
}
if(solve(mat1,mat2))
{
cout<<"true"<<endl;
}
else{
cout<<"false"<<endl;
}
return 0;
}
