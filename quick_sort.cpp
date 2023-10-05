#include<bits/stdc++.h>
using namespace std;
int arr[100];


void swap5(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void swap(int arr[],int x,int y)
{
    int temp=arr[x];
    arr[x]=arr[y];
    arr[y]=temp;
}
void swap1(int arr[],int x,int y)
{
    arr[x]=arr[x]+arr[y];
    arr[y]=arr[x]-arr[y];
    arr[x]=arr[x]-arr[y];
}
void swap2(int arr[],int x,int y)
{
    arr[x]=arr[x]*arr[y];
    arr[y]=arr[x]/arr[y];
    arr[x]=arr[x]/arr[y];
}
void swap3(int arr[],int x,int y)
{
    arr[x]=arr[x]^arr[y];
    arr[y]=arr[x]^arr[y];
    arr[x]=arr[x]^arr[y];
}


void quicksort(int arr[],int first,int last)
{
    int i, j, pivot, temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(arr[i]<arr[pivot]&&i<last) // for decsecnding >=  for ascending <
                i++;
            while(arr[j]>arr[pivot]) // for decsecnding <  for ascending >
                j--;
            if(i<j)
            {
                swap3(arr, i, j);
            }
        }
        swap(arr, pivot, j);
        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);
    }
}

int main()
{
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    cout<<"enter the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr, 0, n - 1);
    cout<<"The sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

