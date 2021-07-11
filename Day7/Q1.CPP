#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
vector<vector<int>> mat(y,vector<int> (x));
int p=0;
for(int i=0;i<y;i++)
{
for(int j=0;j<x;j++)
{
cin>>mat[i][j];
}
}
int m,n,o;
for(int i=0;i<n;i++){
m=INT_MIN,n=INT_MAX;
for(int j=0;j<x;j++)
{
if(n>mat[i][j]){
n=mat[i][j];
c=j;
}
}
for(int j=0;j<y;j++){
if(m<mat[j][o]){
m=mat[j][o];
}
}
if(m==n){
cout<<m<<endl;
break;
}
}
return 0;
}
