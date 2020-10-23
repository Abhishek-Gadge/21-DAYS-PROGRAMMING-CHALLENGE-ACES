#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t>0)
  {
    int h,m,hour,minute,diff;
    cin>>h>>m;
    hour=(h*360)/12+(m*360)/(12*60);
    minute=(m*360)/(60);
    diff=abs(hour-minute);
    if(diff>180)
    {
      cout<<endl<<360-diff;
    }
    else
    {
       cout<<endl<<diff;
    }
   
    t--;
  }
  return 0;
}