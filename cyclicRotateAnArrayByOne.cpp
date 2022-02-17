#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;


void rotateArrayByOneCyclic(int arr[], int n)
{
	/*

		n = 5 
		arr[] = {1,2,3,4,5}
		
		Last element (n-1)th index, will come at index=0 and 
		all the elements will shift right by 1
		
		arr[] = {5,1,2,3,4}

	*/
	
	int last = arr[n-1] ;
	
	for(int i=0; i<n; i++)
	{
		int temp = arr[i] ;
		arr[i] = last ;
		last = temp ;
	}
	
	cout<<"The elements in array are : "<<endl ;
	
	for(int i=0; i<n; i++)
	cout<<arr[i]<<" " ;
	cout<<endl ;
	
	
	
	
	
	
}




int main()
{
	int n ;
	cin>>n ;
	
	int arr[n]; 
	
	cout<<"Enter the Elements in array : "<<endl ;
	
	for(int i=0; i<n; i++)
	cin>>arr[i] ;
	

	rotateArrayByOneCyclic(arr, n) ;
	
	
}

