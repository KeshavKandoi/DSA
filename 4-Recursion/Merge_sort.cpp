#include<iostream>
using namespace std;

void Merge(int arr[] ,int low,int mid,int high )
{ 
  int left=low; 
  int right=mid+1;
   int temp[100] ;
   int k=0;
    while(left<=mid && right<=high)
     { 
      if(arr[left]<=arr[right])
      { 
        temp[k++]=arr[left++];
      
  }
  else{
   temp[k++]=arr[right++];
  
  }
     }
  while(left<=mid){
    temp[k++]=arr[left++];
  }
  while(right<=high){
     temp[k++]=arr[right++];
     }
    
     for (int i = 0; i < k; i++) {
    arr[low + i] = temp[i];
}

}


void MergeSort(int arr[], int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    MergeSort(arr, low, mid);      
    MergeSort(arr, mid + 1, high); 
    Merge(arr, low, mid, high);    
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}