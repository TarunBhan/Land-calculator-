#include<bits/stdc++.h>
using namespace std;
main(){
int t;
cin>>t;
while(t)
{
    int flag=0;
long long int n,a,b,x=1;
cin>>n>>a>>b; 
  while(x<=n)
{
  
if((n-x)%b==0){
flag=1;
  break;   
} 
else{
  x*=a;  
} 
if(a==1) 
{ flag=0;
break;
}
}
if(flag==0)
{
    cout<<"No"<<endl;
}
if(flag==1)
{
    cout<<"Yes"<<endl;
}
t--;
}

return 0;
}

