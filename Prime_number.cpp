    

/* 
  prime number upto n number ,

  By using Sieve of Eratosthenes ,

  In mathematics, the sieve of Eratosthenes is a simple, ancient algorithm for finding all prime numbers up to any given limit.  

*/

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    long range;
    cout<<"Enter range : ";
    cin>>range;
    long arr[range+1]={};
    arr[0]=arr[1]=1;
    for(long i=2;i<=sqrt(range);i++)
    {
             if(arr[i]==0)
             {
                 for(long j=2;i*j<=range;j++)      // Complexity of this is O(nloglogn)
                 {
                     arr[i*j]=1;
                 }
             }
    }
    for(long i=0;i<range;i++)                       // complexity of this O(n)
    {
        if(arr[i]==0)
        {
            cout<<"Prime no. is : "<<i<<endl;
        }
    }

    return 0;
}
