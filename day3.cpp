// accumulate=accumulate(arr_name,arr_name+length,initial_sum) return int
// *max_element(arr,arr+length)
// *min_element(arr,arr+length)

// You are given marks of n groups of students. Print the maximum marks of each group


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    cin>>n;
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        arr2[i]=*max_element(arr,arr+n);
        
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }




}