#include<iostream>
using namespace std;
// int main(){
//     int arr[5];
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     cout<<"The elements of array are: ";
//     for(int i=0;i<5;i++){
//         cout<<2*arr[i]<<" ";
//     }
// } 



// void inc(int arr[],int size){
//     arr[0]=arr[0]+10;
//     arr[1]=arr[1]+7;
//     arr[2]=arr[2]+6;
// }
// void print(int arr[],int size){
//     cout<<"Array elements are: ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[10]={5,8,9};
//     int size=3;
//     inc(arr,size);
//     print(arr,size);
// }



bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
     }
    return false;
}
int main(){
    int arr[10]={5,81,9,45,23,100};
    int size=6;
    int key;
    cout<<"Enter the search element: ";
    cin>>key;
    if(find(arr,size,key)){
        cout<<"Element found";
    }
    else{
        cout<<"Not Found";
    }
}



// #include<limits.h>
// int main(){
//     int arr[]={2,3,4,5,8,78,4};
//     int size=7;

//     int max=INT_MIN;

//     for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Maximum no is "<<max<<endl;
// }



// int main(){
//     int arr[10]={10,20,30,40,50,60,70};
//     int size=7;
//     int start=0;
//     int end=size-1;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }