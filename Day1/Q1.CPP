#include<bits/stdc++.h>
using namespace std;
int removeingduplicates(vector<int>& b){
int a=0;
int c=1;
int n=b.size();
while(c<n){
if(b[a]!=b[c]){
a++;
b[a]=b[c];
}
c++;
}
return a+1;
}
int main(){
int n;
cin>>n;
vector<int> b(n);
for(int a=0;a<n;a++){
cin>>b[a];
}
int answer=removeingduplicates(b);
for(int a=0;a<ans;a++){
cout<<b[a]<<" ";
}
return 0;
}
