/*Chef published a blog post, and is now receiving many queries about it. On day i, he receives Qi queries. But Chef can answer at most k queries in a single day.

Chef always answers the maximum number of questions that he can on any given day (note however that this cannot be more than k). The remaining questions (if any) will be carried over to the next day.

Fortunately, after n days, the queries have stopped. Chef would like to know the first day during which he has some free time, i.e. the first day when he answered less than k questions.*/

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0)
    {
       long n,k,count=0;
       cin>>n>>k;
       long arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>q[i];
      }
        long i;
        for(i=0;i<n;i++)
        {
            if(arr[i]>=k)
            {
                count++;
                arr[i+1]+=(arr[i]-k);
            }
            if(arr[i]<k)
            {
                break;
            }
        }
        if(i==n)
        {
            count+=((arr[n-1]-k)/k);
        }
            cout<<count+1<<endl;
    }
}