#include <stdio.h>

int main ()
{
    int arr[] = {1,2,3,4,5};
    int i,sum,avg,count;
    sum = 0;
    avg = 0;
    count = 0;
    for (i=0;i<5;i++)
    {
        printf("element %d is:%d\n",i+1,arr[i]);
        sum = sum+arr[i];
        count++;
    }
    printf("the sum of array elements is :%d\n",sum);
    printf("the average of array elements is %d\n",sum/count);

    return(0);
}
