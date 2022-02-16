#include<iostream>
using namespace std ;

int findSecondLargest(int arr[], int n)
{
	int firstLargest = -1 ;
	int secondLargest = -1 ;
	
	for(int i=0; i<n; i++)
	{
		if(arr[i] >= firstLargest)
		{
			secondLargest = firstLargest ;
			firstLargest = arr[i] ;
		}
		
		else if(arr[i] > secondLargest)
		secondLargest = arr[i] ;
		
	}
	
	return secondLargest ;
	
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
