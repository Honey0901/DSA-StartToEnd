#include <iostream>
using namespace std;
void in(int size,int arr[]){
   
    for(int i=0;i<size;i++){
        cout<<"Enter the elements in array:";
        cin>>arr[i];
    }
}
void sum1(int arr[],int size){
    int sum=0,avg=0;
    for (int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<< sum <<endl;
    avg=sum/size;
    cout<<avg;
}

int main(){
    int n;
    
    cout<<"Enter the size of elements in array";
    cin>>n;
    int arr[n];
    in(n,arr);
    sum1(arr,n);

    return 0;
}
