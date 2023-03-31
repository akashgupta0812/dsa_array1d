#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(string name,int ub,int lb)
{
  // cout<<"inside fun"<<endl;
  // cout<<name[lb]<<" "<<name[ub]<<endl;
  while(lb<ub)
  {
    if(name[lb]!=name[ub])
    {
    return false;
    }
    lb++;
    ub--;
  }
  return true;
}
int main()
{
  string s="MadAm";
  	transform(s.begin(),s.end(),s.begin(),::toupper);//convert string to uppercase totally
  // cout<<name<<" nname is printing "<<endl;
  // cout<<"hello "<<endl;
  int size=s.length();
  // cout<<"checking palindrome "<<endl;
  cout<<check_palindrome(s,size-1,0);

}