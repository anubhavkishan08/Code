#include<stdio.h>
void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int low, int high)
{
    int pivot=arr[high];
    printf("%d\t",pivot);
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
            swap(&arr[i+1],&arr[high]);
            return(i+1);
        }
        void quicksort(int arr[],int low,int high)
        {
            if(low<high)
            {
                int pi=partition(arr,low,high);
                quicksort(arr,low,pi-1);
                quicksort(arr,pi+1,high);
            }
        }
        void printarray(int arr[],int size)
        {
            for(int i=0;i<size;i++)
                printf("%d",arr[i]);
            printf("\n");
        }
        int main()
        {

            int n,i;
            printf("enter size of array");
            scanf("%d",&n);
            printf("enter elements");
            int arr[n-1];
            for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
            printf("pivot element are:\n");
            quicksort(arr,0,n-1);
            printf("\n sorted array:\n");
            printarray(arr,n);
            return 0;
        }

