#include <iostream>
using namespace std;

int binary_search(int *arr, int num, int key)
{
	int start = 0;
	int end = num -1;
	
	while(start <= end)
	{
		int mid = (start + end) / 2;
		
		if(arr[mid] == key)
		{
			return mid;
		}
		else if(arr[mid] < key)
		{
			start = mid + 1;
		}
		else
		{
			end = mid -1;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {12,13,44,55,62,75,89,90};
	
	int num = sizeof(arr)/sizeof(*arr);
	int key = -1;
	cout<<"ENTER KEY TO FIND"<<endl;
	cin>>key;
	
	int index = binary_search(arr,num,key);
	if(index != -1)
	{
		cout<<"KEY FOUND AT INDEX "<<index;
	}
	else
	{
		cout<<"KEY NOT FOUND";
	}
}
