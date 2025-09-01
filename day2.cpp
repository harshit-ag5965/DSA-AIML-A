#include <bits/stdc++.h>
using namespace std;

// int main()
// {
    
    
//     int x,y,z;
//     cin>>x>>y>>z;

//     float avg = (x+y)/2.0;
//     if(avg>z)
//         cout<<"Yes"<<endl;
//     else
//         cout<<"No"<<endl;

//     return 0;
    
    
// }

// IN PhoneLand a valid phone number consists of five digits with no leading zeroes. For eg 98765, 10000  adn 71823 are valid phone numbers while 04123,9231 and 872310 are not.
// Alex went to a store and purchased N items where the cost of each item is Y. Determine whether the total bill is equivalent to a valid phone number or not.

// int main()
// {
//     int n,y;
//     cin>>n>>y;
//     int total=n*y;
//     if(total>10000 && total<=99999)
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
// }

//Given a string s determine if it contains both the character '&' and '#' and the length of the string is even . If both conditions are satisfied print "Yes" else print "No".

// int main()
// {
//     string s;
//     cin >> s;
//     int len = s.length();

//     if (count(s.begin(), s.end(), '&') > 0 &&   count(s.begin(), s.end(), '#') > 0 &&   
//         len % 2 == 0)                           
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }
// }

//Given n integers.Find the sum of the first 2 elements and last 2 elements in seperate lines.You can assume that n>=4

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum1 = arr[0] + arr[1];
//     int sum2 = arr[n - 1] + arr[n - 2];
//     cout << sum1 << endl;
//     cout << sum2 << endl;

//     return 0;
// }
 
//Given N integers.Find the sum of first half and check whether it is greater than the sum of the second half.If it is greater print "YES" else print "NO".You can assume that N is even.

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum1 = 0, sum2 = 0;
//     for(int i=0;i<n/2;i++)
//     {
//         sum1+=arr[i];
//     }
//     for(int i=n/2;i<n;i++)
//     {
//         sum2+=arr[i];
//     }

//     if(sum1>sum2)
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
//     return 0;
// }
 

//Given a list of N integers. You need to find out the count of odd and even integers in the list.if the count of odd integers is greater than the count of even integers print "Odd" else print "Even".Print "Tie" if count of odd and even integers are equal.

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int sum1 = 0, sum2 = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]%2!=0)
//         {
//             sum1+=arr[i];
//         }
//         else
//         {
//             sum2+=arr[i];
//         }
//     }

//     if(sum1>sum2)
//         cout<<"Odd"<<endl;
//     else if(sum2>sum1)
//         cout<<"Even"<<endl;
//     else
//     {
//         cout<<"Tie"<<endl;
//     }
//     return 0;
// }
 
//Given N integers.Find the product of first,last and middle element of list where n is odd