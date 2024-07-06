#include<iostream>
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
    bool flag = false; //doesn't contain duplicates
    for(int i = 0; i<=n-1; i++)
    {
        for(int j = i+1; j<=n-1; j++)
        {
            if(arr[i] == arr[j] )
            {
                flag =  true;
                cout<<"duplicates found";
                break;
            }
        }
    }
    
    if(flag==false) 
    {
        cout<<"No Duplicate found";
    }
}    
