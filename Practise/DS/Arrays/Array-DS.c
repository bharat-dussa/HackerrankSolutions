#include<stdio.h>
int main()
{

    int arr[9999],b[9999];
    int n,ctr=0;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for( i=0, j=n-1;i<n && j>=0;j--,i++){
        b[i]=arr[j];
    }

    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}

