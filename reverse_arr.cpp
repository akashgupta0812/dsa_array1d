#include<bits/stdc++.h>
using namespace std;
// void print_arr(int*arr)
// {
//     for(auto e : arr)
//     {
//         cout<<e<<" ";
//     }
// }
void reverse_arr(int*arr,int lb,int ub)
{
while(lb<ub)//lb is always less than ub
{
    swap(arr[lb],arr[ub]);
    lb++;
    ub--;
}
}
void reverse_arr_recusrvily(int *arr,int lb,int ub)
{
   if(lb>=ub)
   {
    return ;
   } 
   swap(arr[lb],arr[ub]);
   reverse_arr_recusrvily(arr,lb+1,ub-1);
}
int main()
{
    int arr[]={10,8,9,36,1505};
    int size=sizeof(arr)/sizeof(int),chose;
    cout<<"choose 1.reverse using iterative method 2.using recursion "<<endl;
    cin>>chose;
    // reverse_arr(arr,0,size-1);
    switch(chose)
    {
        case 1:
         reverse_arr(arr,0,size-1);
        break;
        case 2:
        reverse_arr_recusrvily(arr,0,size-1);

    }
    // print_arr(arr);
    for(auto e: arr)
    {
        cout<<e<<" ";
    }
    // reverse_arr_recusrvily();
}