#include<stdio.h>
void merge(int a[],int i1,int j1,int i2,int j2);
void merge_sort(int a[],int i,int j);
int main()
{
    int i,n;
    printf("enter the no of element in array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    merge_sort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
}
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int i,j,k;
    int temp[50];
    i=i1;
    j=i2;
    k=0;
    while((i<=j1)&&(j<=j2))
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
            else
                temp[k++]=a[j++];
    }
    while(i<=j1)
    {
        temp[k++]=a[i++];
    }
     while(j<=j2)
    {
        temp[k++]=a[j++];
    }
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];

}
void merge_sort(int a[],int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        merge_sort(a,i,mid);
        merge_sort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
    }
}
