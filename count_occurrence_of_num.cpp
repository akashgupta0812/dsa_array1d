#include<bits/stdc++.h>
using namespace std;
void ans(int*copy_arr)
{    int i=0;
// cout<<"hi";
    for(;i<1000;i++)
    {
        if(copy_arr[i]!=0)
        cout<<"elemnt data  "<<i<<" "<<"cnt "<<copy_arr[i]<<endl;
    }

}
void  count_occurence(int *arr,int i,int size,int *copy_arr)
{
    for(;i<size;i++)
    {
    copy_arr[arr[i]]=copy_arr[arr[i]]+1;
    // cout<<copy_arr[arr[i]]<<" "<<endl;
    }
    // int size2=sizeof(copy_arr)/sizeof(int);
    // cout<<"size of a2 "<<size2<<endl;
    ans(copy_arr);
}
int main()
{
    int arr[]={2,5,6,2,5,8};
    int copy_arr[1000]={0};//copy array ;
    int size=sizeof(arr)/sizeof(int);
    count_occurence(arr,0,size,copy_arr);
}
