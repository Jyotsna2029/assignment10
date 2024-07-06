#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    for(int i = 0; i<=n-1; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    cout<<"the max element is "<<max;
    int second_max = INT_MIN;
    for(int i = 0; i<=n-1; i++)
    {
        if(second_max < arr[i] && arr[i] != max )
        {
            second_max = arr[i];
        }
    }
    cout<<"the second element is "<<second_max;
}