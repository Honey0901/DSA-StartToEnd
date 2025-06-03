#include <iostream>
using namespace std;
void ser(int size,int arr1[]){
    int freq;
    
    for (int i=0;i<size;i++){
        freq=0;
        for (int j = 0;j<size;j++)
        {
            if(arr1[i]==arr1[j])
            {
                freq++;
            }
        }
        cout<<arr1[i]<<freq <<endl;
    }
    
}
int main(){
   int n=8;
   int arr1[8]={7,9,9,7,3,2,4,3}; 
    ser(n,arr1);
    return 0;
}
