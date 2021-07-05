#include<bits/stdc++.h>
using namespace std;
int sumQuery(vector<int> arr,int l,int r){
int n=arr.size();
for(int i=1;i<n;i++)
{
arr[i]+=arr[i-1];
}
if(l==0)
{
return arr[r];
}
return arr[r]-arr[l-1];
}
int main()
{
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
int m;
cin>>m;
int l,r;
while(m--){
cin>>l>>r;
int ans=sumQuery(arr,left,right);
cout<<ans<<endl;
}
return 0;
}
