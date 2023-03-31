#include<bits/stdc++.h>
using namespace std;
int sum_of_array(int*arr,int s,int i,int size)
{
    for(;i<size;i++)
    {
        s=s+arr[i];
    }
    return s;
}
int sum_of_arr_recursively(int*arr,int ans,int i,int size)
{
    if(i>=size)
    return 0;
    // return ans;
    // ans=ans+arr[i];
    // sum_of_arr_recursively(arr,ans,i+1,size);
    return arr[i]+sum_of_arr_recursively(arr,ans,i+1,size);

}
int main()
{
    int s=0,i=0,ans=0,chose;
    int arr[]={5,8,93,6,4,76,-78};
    int size=sizeof(arr)/sizeof(int);
    cout<<"chose 1.using iterative 2.recursive method "<<endl;
    cin>>chose;
    switch(chose)
    {
  case 1:
   cout<<" sum of array using iterative code " <<sum_of_array(arr,s,i,size)<<endl;
   break;
case 2:
    
 cout<<"sum of array using recusrion "<<sum_of_arr_recursively(arr,ans,0,size);
    }
    

}
