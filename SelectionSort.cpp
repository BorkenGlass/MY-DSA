#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){

    int minIndex,temp;

    for(int i = 0; i<n-1 ; i++){
        minIndex = i;

        for(int j= i+1; j<n;j++){

        if(arr[j]< arr[minIndex]){
         minIndex = j;
        }
        }

        if(minIndex != i){

            temp = arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;


        }
    }

}
void PrintSort(int arr[],int n){

    for(int i=0 ;i<n; i++){

    cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){

        cin>>a[i];
    }
    selectionSort(a,n);
    PrintSort(a,n);

}