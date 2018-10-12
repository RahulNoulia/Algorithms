#include<iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
    int pivot = arr[end],pivot_index=start,i;
    for(i=start;i<end;i++)
    {
        if(arr[i] <= pivot)
        {
          arr[pivot_index]=(arr[pivot_index]+arr[i])-(arr[i]=arr[pivot_index]);
          pivot_index++;
        }
    }
    arr[pivot_index] = (arr[pivot_index]+arr[i]) - (arr[i]=arr[pivot_index]);
    return pivot_index;
}
void  quick_sort(int arr[],int start,int end)
{
    if (start < end )
    {
    int pivot_index = partition(arr,start,end);
        quick_sort(arr,start,pivot_index-1);
        quick_sort(arr,pivot_index+1,end);
    }
}
int main()
{
    int size;
    cout<<"Enter size of array - > ";
    cin>>size;
    int arr[size];
    cout<<"\n\nEnter Element in array -> "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,size-1);
    
    cout<<"\n\nSorted  Array -> "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
