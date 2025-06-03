#include <iostream>
using namespace std;
void arr1(int arr[],int size){
    for (int i=0;i<size;i++)
    {
        cout<<"Enter the elemnts you want to enter:";
        cin>>arr[i];
       
       
    }
}
void rev1(int arr[],int size){
    int start =0;
    int rev=size-1;

    for(int i=0; i<size;i++){
        if(start<rev){
            int temp = arr[start];
            arr[start]=arr[rev];
            arr[rev]=temp;
        }
        start++;
        rev--;
    }
    for (int i=0;i<size;i++){
        cout<<arr[i];
    }

}
int main(){
    int n;
    cout<<"Enter the no of elements ";
    cin>> n;
    int arr[n];
    arr1(arr,n);
    rev1(arr,n);
    return 0;
}
