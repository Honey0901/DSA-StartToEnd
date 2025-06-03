//take input from user array and min and max
#include <iostream>
using namespace std;
void arr1(int arr[],int size){
    for (int i=0;i<size;i++)
    {
        cout<<"Enter the elemnts you want to enter:";
        cin>>arr[i];
       
       
    }
}
void min1(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"Minimum no is :" <<min;
}
void max1(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
        {
           max = arr[i];
        }
    }
     cout<<"maximum no is :" <<max;
}
int main()
{
    int n;
    cout<<"Enter the no of elements ";
    cin>> n;
    int arr[n];
    arr1(arr,n);
    min1(arr,n);
    max1(arr,n);

    
}
