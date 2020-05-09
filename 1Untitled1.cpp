#include<bits/stdc++.h>
using namespace std;

int isSorted(long long int a[],long long int n)
{   long long int arr[n];
	for(long long int i=0;i<n;i++)
	arr[i]=a[i];	
	int l=0;
	sort(arr,arr+n);
	for(long long int i=0;i<n;i++)
	{
		if(arr[i]==a[i])
		  l=1;
		else {
			l=0; break;
		}  
	}
	if(l==1)  return 1;
	else if(l==0)  return 0;
}

int main()
{	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{	
		long long int n,k;
		cin>>n>>k;
		long long int a[n];
		for(long long int j=1;j<=n;j++)
		  cin>>a[j];

		
			for(long long int j=1;j<=n-k+1;j++)
			{ if(a[j]>a[j+k])
				{
				 long long int temp;
				 temp=a[j];
				 a[j]=a[j+k];
				 a[j+k]=temp;
			    }
			}
		if(isSorted(a,n))   
		cout<<"yes";
		else cout<<"no";
	}
	return 0;
}
