#include <iostream>
using namespace std;
int main()
{
	int arr[100],min,max,mid, n,i,x,count=0;
	cout<<"Enter the size of the array: "<<endl;
	cin>>n;
	cout<<"Enter the elements of the array in assending order: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	min=0;
	max= n-1;
	cout<<"Enter the value to search: ";
	cin>>x;
	while (min <= max)
	{
 		mid = (min + max) / 2;
 		if (arr[mid] == x)
		{
			cout<<"Element is present in the array at index no.: "<<(mid)<<endl;
			count++;
			break;
 		}
 		else if (x > arr[mid])
 		min = mid + 1;
 		else if (x < arr[mid])
		{
 			max = mid - 1;
		}
	}
	if(count==0)
	cout<<"Number not found"<<endl;
 	return 0;
}
