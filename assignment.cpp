#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int m,int n,int arr[])
{
    int i,j,tmp;
    for(i=m;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            {
                 ///Using temp
                 tmp=arr[j];
                 arr[j]=arr[i];
                 arr[i]=tmp;
            }
        }
    }

}

void rev_bubble_sort(int m,int n,int arr[])
{
    int i,j,tmp;
    for(i=m;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j])
            {
                 ///Using temp
                 tmp=arr[j];
                 arr[j]=arr[i];
                 arr[i]=tmp;
            }
        }
    }

}

int main(){
    int siz, pick;
    cout << "Enter the Array size : ";
    cin >> siz;
    int arr[siz];
    cout << "Enter the numbers of Array : ";
    for(int i = 0; i < siz; i++){
        cin >> arr[i];
    }
    rev_bubble_sort(0, siz, arr);
    cout << "Enter the starting index : ";
    cin >> pick;
    bubble_sort(0, pick, arr);
    bubble_sort(pick, siz, arr);


    cout << "After sorting from index no " << pick << "\nThe final Array is : ";
    for(int i = 0; i < siz; i++) cout << arr[i] << ' ';
    cout << '\n';
}
