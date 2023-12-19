#include<bits/stdc++.h>
using namespace std;
const int N =1e5+5;
int n,a[N],b[N];

void Merge(int left,int right,int mid)
{
	int i=left,j=mid+1;
	int k=left;
	while(i<=mid&&j<=right)
	{
		if(a[i]<a[j])	
			b[k++]=a[i++];
		else 
			b[k++]=a[j++];
	}
	while(i<=mid)	b[k++]=a[i++];
	while(j<=right)	b[k++]=a[j++];
	for(i=left;i<=right;i++)	
		a[i]=b[i];
}

void Mergesort(int begin,int end)
{
	if(begin<end)
	{
		int mid=(begin+end)/2;
		Mergesort(begin,mid);
		Mergesort(mid+1,end);
		Merge(begin,end,mid);
	}
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)	cin>>a[i];
	Mergesort(1,n);
	for(int i=1;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}
