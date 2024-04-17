#include<iostream>
using namespace std;
#define N 15
void insert(int arr[] , int )

{
	
	int i ,key,j,n;
	for(int i=1;i<n;i++)
	{
	
	key=arr[i];
	j=i-1;
	
	while(j>=0 && arr[j]>key)
	{
		arr[j+1]=arr[j];
		j=i-1;
		
	}
	arr[j+1]=key;
   }
}

int main()
{    int n,arr[N];
	cout<<"Enter the size of array:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
		for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}


