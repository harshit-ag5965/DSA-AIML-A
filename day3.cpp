// accumulate=accumulate(arr_name,arr_name+length,initial_sum) return int
// *max_element(arr,arr+length)
// *min_element(arr,arr+length)

// You are given marks of n groups of students. Print the maximum marks of each group


#include <bits/stdc++.h>
using namespace std;

int main()
{

    // You are given marks of n groups of students. Print the maximum marks of each group

    // int n;
    
    // cin>>n;
    // int arr2[n];
    // for(int i=0;i<n;i++)
    // {
    //     int arr[n];
    //     for(int j=0;j<n;j++)
    //     {
    //         cin>>arr[j];
    //     }
    //     arr2[i]=*max_element(arr,arr+n);
        
    // }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr2[i]<<" ";
    // }



    // You are given marks of n groups of students in the format specified below. The strength of each group may not be the same. Print the maximum, minimum, total and average marks of each group.

    // int t;
    // cin>>t;
    // for(int k=0;k<t;k++)
    // {
    //     int n;
    //     cin>>n;
    //     int arr[n];
    //     int maxarr[n],minarr[n],sumarr[n],avgarr[n];
        
    //     for(int i=0;i<n;i++)
    //     {
    //         cin>>arr[i];
    //     }
    //     cout<<*max_element(arr,arr+n)<<" "<<*min_element(arr,arr+n)<<" "<<accumulate(arr,arr+n,0)<<" "<<fixed<<setprecision(1)<<(float)accumulate(arr,arr+n,0)/n<<endl;
    // }

    // Read this input and print the sum of integers (if the elemts are integers) or print the length of longest word if the elemts are strings.

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        string type;
        cin>>n>>type;
        if(type =="STRING")
        {
            string arr[n];
            for(int j=0;j<n;j++)
            {
                cin>>arr[j];
            }
            int maxlen=0;
            for(int j=0;j<n;j++)
            {
                maxlen=max(maxlen,(int)arr[j].length());
            }
            cout<<maxlen<<endl;
        }
        else if(type=="INT")
        {
            int arr[n];
            for(int j=0;j<n;j++)
            {
                cin>>arr[j];
            }
            cout<<accumulate(arr,arr+n,0)<<endl;
        }
        
    }

}