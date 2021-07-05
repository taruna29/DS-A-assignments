#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
vector<int> arr(num);
for(int i=0;i<num;i++){
cin>>arr[i];
}
int a=-1;
for(int i=1;i<num-1;i++){
if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
a=i;
break;
}
}
cout<<a<<endl;
return 0;
}
