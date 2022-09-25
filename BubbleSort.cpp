//Author : Md.Rafayet Hossen
//BSCSE UIU 223
//Bubble Sort Dsa Inplemantation;

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int size){

    int temp;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    
}

void Print_bubble_sort(int arr[],int size){

    for (int i = 0; i < size ; i++)
    {
         cout<<arr[i]<<" ";
    }
    
    cout<<endl;
}
int main(){

    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

    bubble_sort(a,n);

    Print_bubble_sort(a,n);

    return 0;
}