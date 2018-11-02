#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int number,k=0;
    cout<<"\nEnter number : ";
    cin>>number;
    int size = sqrt(number) * 2,sq = sqrt(number);
    int arr[size]={};
    for(int i=1;i<=sq;i++)                                          // Trail division method                                    
      {
         if(number%i==0)
         {
               arr[k]=i;
               k++;
               if(i!=sqrt(number))
                {
		       arr[k]=number/i;
		       k++;
                }
         }
      }                                                                        // end of trail division method
       if(k>2)
        {
		    for(int i=0;i<k;i++)                                       //  Sorting for arrange the element in particular order
		    {
                         for(int j=i+1;j<k;j++)
                             {
			        if(arr[i]>arr[j])
                                          arr[j]=(arr[i]+arr[j]) - (arr[i]=arr[j]);
                              }
		    }
                    cout<<"\nFactors are :  ";
                     for(int i=0;i<k;i++)                                       // All factors of number in a increasing order 
		    {
			 cout<<arr[i]<<" ";
		    }
        }
      else
       {
   
              cout<<"\nThe "<<number<<" is prime number ";                       // print number if it is prime                 
       }
        cout<<"\n\n";
      return 0;
}
