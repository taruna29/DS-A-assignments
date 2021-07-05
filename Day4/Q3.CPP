#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
vector<int> arr(num);
for(int i=0;i<num;i++){
cin>>arr[i];
}
vector<int> v(arr.begin(),arr.end());
sort(v.begin(),v.end());
int i=0;
int b=0;
while(i<num)
{
if(arr[i]!=v[i])
{
b++;
}
i++;
}
cout<<b<<endl;
return 0;
}
