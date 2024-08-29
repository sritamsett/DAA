#include<iostream>
using namespace std;
int main()
{
    int arr[10], i,n, num, index,c=0;
    cout<<"Enter Size";
    cin>>n;
    cout<<"Enter Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            c++;
			break;
        }
    }
    if(c>0)
    cout<<"\nFound at Index No."<<index;
    else
    cout<<"Number not found";
    cout<<endl;
    return 0;
}
