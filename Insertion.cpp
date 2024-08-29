#include<iostream>
using namespace std;
class Insertion
{
	private: int A[100],flag=0,temp,i,p,n,j,k;
	public:	
		void read()
		{
			cout<<"Enter the size of the array ";
			cin>>n;
			cout<<"\nEnter the elements of the array ";
			for(i=1;i<=n;i++)
			{
				cin>>A[i];
			}
		}
		void display()
		{
			cout<<"\nThe elements of the array are ";
			for(i=1;i<=n;i++)
				{
					cout<<A[i]<<" ";
				}	
		}
		void insertion()
		{
			for(i=2;i<=n;i++)
			{
				j=i-1;
				k=A[i];
				A[0]=k;
				while(k<A[j])
				{
					A[j+1]=A[j];
					j=j-1;						
				}
				A[j+1]=k;
			}	
		}
		
};
int main()
{
	Insertion b;
	b.read();
	cout<<"\nBefore sorting ";
	b.display();
	b.insertion();
	cout<<"\nAfter sorting ";
	b.display();
	return 0;
}

