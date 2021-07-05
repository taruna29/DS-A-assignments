#include<bits/stdc++.h>
using namespace std;
bool is_valid(vector<vector<int>>& img,int i,int j,int k,int l)
{
if(i>=0 && i<k && j>=0 && j<l) return true;
return false;
}
int main()
{
int k,l;
cin>>k>>l
vector<vector<int>> img(k,vector<int> (l));
for(int i=0;i<k;i++)
{
for(int j=0;j<l;j++)
{
cin>>img[i][j];
}
}
vector<vector<int>> filter(k,vector<int> (l));
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
for(int i=0;i<k;i++)
{
for(int j=0;j<l;j++)
{
int sum=0,c=0,a,b;
sum+=img[i][j];
for(int m=0;m<8;m++)
{
a=i+dx[m];
b=j+dy[m];
if(is_valid(img,a,b,k,l))
{
sum+=img[a][b];
c++;
}
}
filter[i][j]=ceil(sum/(c+1));
}
}
for(auto i: filter)
{
for(auto j:i)
{
cout<<j<<" ";
}
cout<<endl;
}
return 0;
}
