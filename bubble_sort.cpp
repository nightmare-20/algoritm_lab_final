#include<bits/stdc++.h>
using namespace std;
int a[100];


int input(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void swap1(int arr[],int x,int y)
{
    arr[x]=arr[x]+arr[y];
    arr[y]=arr[x]-arr[y];
    arr[x]=arr[x]-arr[y];
}

void swap(int j){
    a[j]=a[j]+a[j+1];
    a[j+1]=a[j]-a[j+1];
    a[j]=a[j]-a[j+1];
}
void swap2(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


int bubsort(int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]){
                swap1(a,j,j+1);
                //swap2(&a[j],&a[j+1]);
                flag=1;
            }
        }
        if(flag==0) break;
    }
}


int main()
{
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    cout<<"enter the array : ";
    input(n);
    bubsort(n);
    cout<<"The sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

