#include<stdio.h>
#include<stdlib.h>

void quicksort(int a[],int l,int h)
{
int j;
if(l<h)
{
    j = partition(a,l,h);
    quicksort(a,l,j-1);
    quicksort(a,j+1,h);
}
}

int partition(int a[],int l,int h)
{
 int i,j,k,temp;
 k=a[l];
 i=l;
 j=h+1;
 do
 {
     do
     {
         i++;
     } while (a[i]<k && i<h);
     do
     {
         j--;
     } while (k<a[j]);
     if(i<j)
     {
       temp=a[j];
       a[j]=a[i];
       a[i]=temp;
     }
     
 } while (i<j);
 a[l]=a[j];
 a[j]=k;
 return j;
}

int main()
{
    int i,n,a[20];

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    quicksort(a,0,n-1);

    printf("Sorted Array elements are:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    return 0;
}
