//binary search
#include <iostream>
#include<algorithm>
using namespace std;
bool binarysearch(int *a,int n,int key)
{
    int start=0;
   int end=n-1;
   while(start<=end)
   {
     int mid=(start+end)/2;
     if(a[mid]==key)
     {
         return true;
     }
     else if(a[mid]>key)
     {
         end=mid-1;
     }
     else{
         start=mid+1;
     }
   }
   return false;
}
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   int key;
   cin>>key;
   sort(a,a+n);
   binarysearch(a,n,key)?cout<<"key is present"<<endl:cout<<"key is not present"<<endl;
   
}
