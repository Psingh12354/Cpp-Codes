#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	int x;
	bool quit=false;
	cout<<"Enter the sorting techinique on give list : ";
	while(!quit)
	{	
		cout<<"\n********************************************************************\n";
		cout<<"Press any key \n 1-> Selection \n 2-> Insertion \n 3-> Bubble \n 4-> exit \n";
		cin>>x;
		switch(x)
		{	
			case 1:
				{	
					cout<<"\n********************************************************************\n";
					int arr[50],i,j,temp,n;
					cout<<"**** Selection Sort ****\n\n";
					cout<<"Enter the size of array : \n";
					cin>>n;
					cout<<"Enter the element in array : \n";
					for(i=0;i<n;i++)
					{
						cin>>arr[i];
					}
					for(i=0;i<n;i++)
					{
					for(j=i+1;j<n;j++)
					{
						if(arr[i]>arr[j])
						{
							temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
					cout<<"After selection sort complete your output is : \n";
				{
					for(j=0;j<n ;j++)
					{
						cout<<arr[j]<<" ";
					}
				}
				cout<<"\n********************************************************************\n";
				break;
				}
			case 2:
				{
						cout<<"\n********************************************************************\n";
						int a[50],i,j,temp,n;
						cout<<"**** Insertion Sort ****\n\n";
						cout<<"Enter the size of array : ";
						cin>>n;
						cout<<"\n Enter the array elements : \n";
					for(i=0;i<n;i++)
					{
						cin>>a[i];
					}
					for(i=1;i<n;i++)
					{
						temp=a[i];
						j=i-1;
						while((temp<a[j]) && (j>=0))
						{
							a[j+1]=a[j];
							j-=1;
						}
						a[j+1]=temp;
					}
					cout<<"After sorting : \n";
					for(i=0;i<n;i++)
					{
						cout<<a[i];
					}
					cout<<"\n********************************************************************\n";
					break;
				}
			case 3: 
			{	
					cout<<"\n********************************************************************\n";
					cout<<"**** Bubble Sort ****\n\n";
					int arr[50],n,i,j,temp;
					cout<<"Enter the numbers : \n";
					cin>>n;
					cout<<"Enter the array elements : \n";
				for(i=0;i<n;i++)
				{
					cin>>arr[i];
				}
				for(i=0;i<n-1;i++)
				{
					for(j=0;j<n-i-1;j++)
					{
						if(arr[j]>arr[j+1])
						{
							temp=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=temp;
						}
						}
					}
					cout<<"After sorting : \n";
					for(i=0;i<n;i++)
					{
						cout<<arr[i];
					}
						cout<<"\n********************************************************************\n";
						break;
				}
			case 4:
				quit=true;
				break;
		}
		cout<<"Now you are out of loop"<<endl;

	}
	return 0;
}
