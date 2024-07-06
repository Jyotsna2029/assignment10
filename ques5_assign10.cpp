//  WAP to find the smallest missing positive element in the sorted Array that contains only 
// positive elements.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    // sort(arr[n], arr[n]+n);
    int min = arr[0];
    for(int i = 1; i<=n-1; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"the minimum value out of all elements in the array is "<<min;
}