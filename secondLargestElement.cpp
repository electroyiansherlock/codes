#include<iostream>
using namespace std ;

int findSecondLargest(int arr[], int n)
{
	int max1 = - 1 ;
	
	for(int i=0; i<n; i++)
	{
		if(arr[i] > max1)
		max1 = arr[i] ;
	}
	
	cout<<"largest element : "<<max1<<endl ;
	
	int secondMax = -1 ;
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]>secondMax and arr[i]<max1)
		secondMax  = arr[i] ;
	}
	
	cout<<"Second max : "<<secondMax<<endl ;
	return secondMax ;
	
}

int main()
{
	int n ;
	cout<<"Enter the number of elements in array : " ;
	cin>>n ;
	
	int arr[n] ;
	
	for(int i=0; i<n; i++)
	cin>>arr[i] ;
	
	int ans = findSecondLargest(arr, n) ;
	
	/*
	
	n = 6 
	arr = {3 ,2, 1, 56, 1000, 167}
	
	
	*/
	
	cout<<"Second largest element is : "<<ans<<endl ;
	
}
