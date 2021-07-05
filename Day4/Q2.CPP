#include<bits/stdc++.h>
using namespace std;
int main()
{
int num;
cin>>num;
vector<int> arr(num);
for(int i=0;i<num;i++)
{
cin>>arr[i];
}
sort(arr.begin(),arr.end(),greater<int>());
int sum=0;
for(int i=1;i<num;i+=2)
{
sum+=arr[i];
}
cout<<sum<<endl;
return 0;
}

