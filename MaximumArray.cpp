#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[10],max;
	max=arr[0];
		for(int i=0;i<10;i++)
		{
			cin>>arr[i];
		}
	for(int i=0;i<10;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<max;
	return 0;
}
