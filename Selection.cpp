#include<iostream>
using namespace std;
int main()
{
    int n, arr[50], i, j, temp, small, c, index;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(i=0; i<(n-1); i++)
    {
        c=0;
        small = arr[i];
        for(j=(i+1); j<n; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                c++;
                index = j;
            }
        }
        if(c!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
    }
    cout<<"\nSorted Array is:\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
