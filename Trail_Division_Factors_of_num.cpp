#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++) 
#define foi(i,sq) for(i=1;i<=sq;i++)   
#define ll  long long int
typedef vector<ll>  vec;
vec vi;
int main(int argc, char const *argv[])
{
    ll number,sq;
    int k=0,i;
    cout<<"\nEnter number : ";
    cin>>number;
    sq = sqrt(number);
   // Trail division method     
    foi(i,sq){
         if(number%i==0){
               vi.push_back(i); k++;
               if(i!=sq)   vi.push_back(number/i); k++;
           }
      }  
    // end of trail division method 
      if(k > 2 ){                                                                
    	  sort(vi.begin(),vi.end());
    	  cout<<"Factors are : ";
    	  fo(i,vi.size()-1){  
                    cout<<vi[i];
                    if(i != vi.size()-2)   cout<<" , ";
          }
      }
      else  cout<<"Number is Prime ";
      cout<<"\n\n";
      return 0;
}
