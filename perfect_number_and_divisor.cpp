//perfect number and divisor//

#include<iostream>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t>0)
  {
    int n,sum;
    cin>>n;
    sum=0;
    for(int i=1;i<n;i++)
    {
      if(n%i==0)
      {
        sum=sum+i;
      }
     
    }
    if(n==sum)
    {
      cout<<"true"<<endl;
    }
    else
    {
      cout<<"false"<<endl;
    }
    t--;
  }
  return 0;
}