#include<iostream> 
using namespace std; 
 main() 
{ 
 int a[5]={10,20,30,40,50}; 
 int lr=0,up=4,f=0,mid,item; 
 cout<<"\n Enter No. For Search => "; 
 cin>>item; 
 while(lr<=up) 
 { 
  mid=(lr+up)/2; 
  if(a[mid]==item) 
  { 
   f=1; 
   break; 
  } 
  if(a[mid]<item) 
    lr=mid+1; 
  else 
    up=mid-1; 
 } 
 if(f==1) 
    cout<<"\n Item is Found "; 
 else 
    cout<<"\n Item Not Found"; 
 
} 
 
 
