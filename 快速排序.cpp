#include<bits/stdc++.h>
using namespace std;
int n,a[100005],k;

int Partition(int l,int r){
    int i=l,j=r;
    int key=l+rand()%(r-l+1);
    swap(a[key],a[l]);
    int temp=a[l];
    while(i!=j){
        while(i<j&&a[j]>=temp)j--;
        a[i]=a[j];
        while(i<j&&a[i]<=temp)i++;
        a[j]=a[i];  
    }
    a[i]=temp;
    return i;
}
void QuickSort(int s,int t){
    if(s<t){
          
        QuickSort(s,i-1);
        QuickSort(i+1,t);
    }
}
int main(){
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        scanf("%d",&n);
        for(int j=1;j<=n;j++){
            scanf("%d",&a[j]);
        }
        QuickSort(1,n);
        for(int j=1;j<=n;j++){
            if(j!=n){
                printf("%d ",a[j]);
            }else{
                printf("%d\n",a[j]);
            }
        }
    }
    
}
