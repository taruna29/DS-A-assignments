#include<bits/stdc++.h>
using namespace std;
int value(char a)
{
if(a=='I') return 1;
if(a=='V') return 5;
if(a=='X') return 10;
if(a=='L') return 50;
if(a=='C') return 100;
if(a=='D') return 500;
if(a=='M') return 1000;
return 0;
}
int romanToInt(string m)
{
int a=m.size(),sum=0;
for(int i=0;i<a;i++)
{
if(value(m[i])<value(m[i+1]))
{
sum+=value(m[i+1])-value(m[i]);
i++;
}
else
{
sum+=value(m[i]);
}
}
return sum;
 }
int main()
{
string m;
cin>>m;
cout<<romanToInt(m)<<endl;
return 0;
}
