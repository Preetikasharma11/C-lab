//Implementation using array and perform insertion,deletion,updation,traverse and linear search
#include<stdio.h>
void main()
{
        int arr[100]={0};
        int i,pos,x,n,p,item;
        printf("Enter the size of array :");
        scanf("%d",&n);
        printf("Enter the elements of array ");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        printf("Enter the element you want to insert ");
        scanf("%d",&x);
        printf("Enter the position ");
        scanf("%d",&pos);
        n++;
        for(i=n-1;i>=pos;i--)
                arr[i+1]=arr[i];
        arr[pos-1]=x;
        printf("The updated array is:\n");
        for(i=0;i<n;i++)
                printf("%d ",arr[i]);
 printf("\n\tDELETION..........");
printf("\n\tEnter the element you want to delete :");
        scanf("%d",&p);
        for(i=0;i<n;i++)
        {
                if(arr[i]==p)
                {
                        pos=i;
                        break;
                }
        }
        for(i=pos;i<n-1;i++)
                arr[i]=arr[i+1];
        n--;
        printf("The updated array is:\n");
        for(i=0;i<n;i++)
                printf("%d ",arr[i]);
printf("\n\t LINEAR SEARCH!!!!!");
printf("\n\tEnter the element you want to search ");
        scanf("%d",&x);
        for(i=0;i<n;i++)
        {
                if(arr[i]==x)
                {
                        pos=i;
                        break;
                }
        }
        printf("The element %d is found at %d index ",x,pos);
printf("\nUPDATION****");
for(i = 0; i < 50; i++)
arr[pos-1]=item;
printf("\n\t array elements after updation :\n\t ");
for(i=0;i<5;i++)
{
    printf("\n\t arr[%d]=%d",i,arr[i]);
}
}

