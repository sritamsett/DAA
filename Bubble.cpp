#include<iostream>
using namespace std;
class Bubble
{
	private: int A[100],flag=0,temp,i,p,n;
	public:	
		void read()
		{
			cout<<"Enter the size of the array ";
			cin>>n;
			cout<<"\nEnter the elements of the array ";
			for(i=0;i<n;i++)
			{
				cin>>A[i];
			}
		}
		void display()
		{
			cout<<"\nThe elements of the array are ";
			for(i=0;i<n;i++)
				{
					cout<<A[i]<<" ";
				}	
		}
		void bubble()
		{
			flag=0;
			for(p=1;p<=n-1;p++)
			{
				for(i=0;i<n-p;i++)
				{
					if(A[i]>A[i+1])
					{
						temp=A[i];
						A[i]=A[i+1];
						A[i+1]=temp;
						flag=1;						
					}
				}
			if(flag==0)
			break;	
			}
			
		}
		
};
int main()
{
	Bubble b;
	b.read();
	cout<<"\nBefore sorting ";
	b.display();
	b.bubble();
	cout<<"\nAfter sorting ";
	b.display();
	return 0;
}

