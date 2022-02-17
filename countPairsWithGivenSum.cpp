#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std ;


void countPairsWithGivenSum(int arr[], int n, int k)
{
	/*

		n = 4, k = 6
		arr[] = {1, 5, 7, 1}
	
		n = 4,  k =2 	
		arr[] = {1, 1, 1, 1}

	*/
	
	map<int, int>m ;
	
	for(int i=0; i<n; i++)
	m[arr[i]]++ ;
	
	int ans = 0 ;
	
	for(int i=0; i<n; i++)
	{
		m[arr[i]]-- ;
		
		if(arr[i] > k)
		continue ;
		
		int find = k-arr[i] ;
		
		ans += (m[find]) ; 
		
	}
	
	cout<<"The pairs with given sum is : "<<ans<<endl ;
	
	
	
	
	
	
}




int main()
{
	int n,k ;
	cin>>n>>k ;
	
	int arr[n]; 
	
	cout<<"Enter the Elements in array : "<<endl ;
	
	for(int i=0; i<n; i++)
	cin>>arr[i] ;
	

	countPairsWithGivenSum(arr, n, k) ;
	
	
}

