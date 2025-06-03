#include <iostream>
using namespace std;
void arr1(int arr[],int size){
    for (int i=0;i<size;i++)
    {
        cout<<"Enter the elemnts you want to enter for i:";
        cin>>arr[i];
       
       
    }

}
void arr2(int arr12[],int size){
    cout<<"Enter element for j";
    for (int j=0;j<size;j++)
    {
        cout<<"Enter the elemnts you want to enter for j:";
        cin>>arr12[j];
       
       
    }
    
}
void inter1(int arr[],int size,int arr12[]){
    // int inter;

    for(int i=0;i<size;i++){
        
        for(int j=0;j<size;j++)
        {
            
            if (arr[i]==arr12[j]){
               cout<<arr[i];
               break; 
            }
            // cout<<arr12[j];
        }
       
    }
   
}
int main()
{
    int n;
    cout<<"Enter the no of elements ";
    cin>> n;
    int arr[n];
    int arr12[n];
    arr1(arr,n);
    arr2(arr12,n);
    inter1(arr,n,arr12);

    
}