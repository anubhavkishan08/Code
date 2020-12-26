#include<stdio.h>
int knapsack(int n,float weight[],float profit[],float capacity)
{
    float x[20],tp=0;
    int i,j,u;
    for(i=0;i<n;i++)
    {
        x[i]=0.0;
    }
    for(i=0;i<n;i++)
    {
        if(weight[i]>u)
            break;
        else
        {
            x[i]=1.0;
            tp=tp+profit[i];
            u=u-weight[i];
        }
}
if(i<n)
    x[i]=u/weight[i];
    tp=tp+(x[i]*profit[i]);
    printf("\n the result is:-");
    for(i=0;i<n;i++)
        printf("\n %f\t",x[i]);
    printf("\n the max profit is %f",tp);
}
int main()
{
    float weight[20],profit[20],capacity;
    int num,i,j;
    float ratio[20],temp;
    printf("enter the no of object");
    scanf("%d",&num);
    printf("enter the profit and weights of object");
    for(i=0;i<num;i++)
        scanf("%f",&profit[i]);
    for(i=0;i<num;i++)
        scanf("%f",&weight[i]);
    printf("enter the capacity");
    scanf("%f",&capacity);
    for(i=0;i<num;i++)
        ratio[i]=profit[i]/weight[i];
      for(i=0;i<num;i++)
      {
          for(j=i+1;j<num;j++)
          {
              if(ratio[i]<ratio[j])
              {
                  temp=ratio[i];
                  ratio[i]=ratio[j];
                  ratio[j]=temp;

                  temp=weight[i];
                  weight[i]=weight[j];
                  weight[j]=temp;

                  temp=profit[i];
                  profit[i]=profit[j];
                  profit[j]=temp;
              }
          }
      }
      knapsack(num,weight,profit,capacity);
      return 0;
}

