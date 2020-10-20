/*Adit needs to create a survey report for his upcoming project. In this survey he needs to find the power consumed by each house near his locality. So Adit is given a list of N Houses containing the electric unit consumed by each house. The cost of 1 unit equals to Rs 8/- . Help Adit in finding the Electricity bill of each house.

Note: If electricity bill is less than 250 Rs. then the minumum bill amount i.e. 250 Rs. is charged.*/




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]*8;
        if(arr[i]<=250)
        {
            arr[i]=250;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
