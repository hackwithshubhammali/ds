#include<iostream> 
using namespace std; 
int findSmallest (int[],int); 
int main () 
{ 
int myarray[10] = {11,5,2,20,42,53,23,34,101,22}; 
int pos,temp; 
cout<<"\n Unsorted List of elements \n\n"; 
for(int i=0;i<10;i++) 
{ 
cout<<myarray[i]<<"\t"; 
} 
for(int i=0;i<10;i++) 
{ 
pos = findSmallest(myarray,i); 
temp = myarray[i]; 
myarray[i]=myarray[pos]; 
myarray[pos] = temp; 
} 
cout<<"\n\n Sorted list of elements is \n\n\n"; 
for(int i=0;i<10;i++) 
{ 
cout<<myarray[i]<<"\t"; 
} 
return 0; 
} 
int findSmallest(int myarray[],int i) 
{ 
int ele_small,position,j; 
ele_small = myarray[i]; 
position = i; 
for(j=i+1;j<10;j++) 
{ 
if(myarray[j]<ele_small) 
{ 
ele_small = myarray[j]; 
position=j; 
} 
} 
return position; 
}
