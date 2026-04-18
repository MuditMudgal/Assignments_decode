// 1. Which of the following is true about selection sort:
// a) In each iteration we find the minimum element in the unsorted part of the array.
// b) In each iteration we find the index of the minimum element in the unsorted part of the array.
// c) We swap the index of the minimum element with the first element of the array.
// d) It takes O(n^2) swaps.
// a and b options are correct 

// Which of the following examples represent the worst case input for an insertion sort?
// a) array in sorted order
// b) large array
// c) normal unsorted array
// d) array sorted in reverse order
//d is the correct option

// How many passes would be required during insertion sort to sort an array of 5 elements?
// a) 1
// b) Depends on order of elements
// c) 4
// d) 5
//c is the correct option

// Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of
// two numbers formed from digits of the array. Please note that all digits of the given array must be
// used to form the two numbers.

// arr[] = 0 1 2 3 4 5 6 7 8 9

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main() {

//     int arr[] = {5,1,5,5,2,3};
//     int n = sizeof(arr)/sizeof(int);
//     sort(arr,arr+n);
//     //printing arr before    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     //making arr to number(int)
//     int rev1 = 0;
//     for(int i=0;i<n;i++){
//         rev1 = rev1*10 + arr[i];
//     }
//     cout<<rev1<<endl;
    
//     //finding next permutation
//     int pivot = -1;
//     for(int i=n-2;i>=0;i--){
//         if(arr[i]<arr[i+1]){
//             pivot = i;
//             swap(arr[i],arr[i+1]);
//             break;
//         }
//     }

//     //printing arr[] after 
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;


//     //making arr to number(int)
//     int rev2 = 0;
//     for(int i=0;i<n;i++){
//         rev2 = rev2*10 + arr[i];
//     }
//     cout<<rev2<<endl;


//     cout<<"Minimum sum : "<<rev2+rev1;
    






// }


// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.

//sort string
#include<iostream>
#include<algorithm>
using namespace std;
int main() {

    string arr[5] = {"raghav", "sanket", "harsh", "urvi", "vishwa"};
    // int arr[] = {4,3,2,1};
    int n = 5;
    
    //bubble sort

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }




}