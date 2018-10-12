#include<iostream>
using namespace std;

void Bubble_sort(int arr[],int size)
{
     for(int j=0;j<size;j++)
    {
        for(int i=0;i<size-j-1;i++)
        {
                if(arr[i] > arr[i+1])
                {
                    arr[i+1]=(arr[i+1]+arr[i]) - (arr[i]=arr[i+1]);
                }
        }
    }
}


int main()
{
    int size;
    cout<<"\n\nEnter size of array -> ";
    cin>>size;
    int arr[size];
    cout<<"\n\nEnter Element in  array -> "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    Bubble_sort(arr,size);
    
    cout<<"\n\nSorted array -> "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
