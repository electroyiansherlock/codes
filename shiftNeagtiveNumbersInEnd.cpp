#include<iostream>
#include<vector>

using namespace std ;

void shiftNegativeNumbersInEnd(int arr[], int n)
{
	vector<int>temp ;
	int index =0;
	
	/*
	
	n = 8 
	
	arr = {1, -1, 3, 2, -7, -5, 11, 6 }
	
	O(n) --> T.C
	S.C --> O(n)
	
	arr = {1, 3, 2, 11, 6, -1, -7, -5}
	
	*/
	
	for(int i=0; i<n; i++)
	{
		if(arr[i] >= 0)
		{
			arr[index] = arr[i] ;
			index++ ;
		}
		
		else
		temp.push_back(arr[i]) ;
	}
	
	for(int i=0; i<temp.size(); i++)
	{
		arr[index] = temp[i] ;
		index++ ;
	}
	
	cout<<"Answer is : "<<endl ;
	
	for(int i=0; i<n; i++)
	cout<<arr[i]<<" " ;
	
	cout<<endl ;
	
	
	
}

int main()
{
	int n ;
	cout<<"Enter number of elements in Array : " ;
	cin>>n ;
	
	int arr[n] ;
	
	for(int i=0; i<n; i++)
	cin>>arr[i] ;
	
	/*
	
	n = 8 
	
	arr = {1, -1, 3, 2, -7, -5, 11, 6 }
	
	O(n) --> T.C
	S.C --> O(n)
	
	arr = {1, 3, 2, 11, 6, -1, -7, -5}
	
	*/
	
	shiftNegativeNumbersInEnd(arr, n) ;
	
	
	
}
