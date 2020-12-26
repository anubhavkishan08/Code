#include<stdio.h>
void binary_search(int item,int arr[],int size)
{
    int end=size-1,mid,beg=0;
    mid=(beg+end)/2;
    while((end>=beg)&&(item!=arr[mid]))
    {
    if(item>arr[mid])
    {
        beg=mid+1;
        mid=(beg+end)/2;
    }
    else
        end=mid-1;
         mid=(beg+end)/2;
    }
        if(arr[mid]==item)
printf("item found at %d position",mid+1);
else
    printf("item not found ");

}
int main()
{
    int n,i,j,temp,item;
    printf("enter the size of ana array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }}
    printf("\n");
    printf("\n");
    printf("\n");
     for(i=0;i<n;i++)
            printf("%d\n",a[i]);
            printf("enter the no that to be searched");
            scanf("%d",&item);
    binary_search(item,a,n);
        return 0;
}
