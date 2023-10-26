#include<stdio.h>
int  l_search(int* a,int n,int key)
{

	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("Key element was found at %d index location",i);
			return 0;
		}
	}
	printf("Element was not found\n");
}
int main()
{
	int arr[]={1,2,4,3,6,8,54};
	int SIZE=sizeof(arr)/sizeof(arr[0]);
	int key;
	printf("Enter key element you want to search in an array:");
	scanf("%d",&key);
	l_search(arr,SIZE,key);
	return 0;
}

//METHOD2:
#include <iostream>
using namespace std;

int l_search(int *a,int n,int val)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==val){return i;}
    }
    return -1;
    
}
int main() {
    int arr[]={1,2,3,5,6};
    int val=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=l_search(arr,n,val);
    cout<<index;
   
    
    return 0;
}
