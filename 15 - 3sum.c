#include<stdio.h>

int main()
{

    int arr[100],N=0,d,i,j,k,temp,first,second,third;
    char c;

    while(scanf("%d%c",&d,&c) && c!='\n')
        arr[N++] = d;
    arr[N++] = d;

    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n Sorted is \n");
    for(i=0;i<N;i++)
        printf("%d ",arr[i]);
    printf("\n");
    for(i=0;i<N;i++)
    {
        first = arr[i];
        //printf("\n First is %d \n",first);

        for(j=i+1;j<N;j++)
        {
            second = arr[j];
            //printf("\n second is %d \n",second);
            for(k=j+1;k<N;k++)
            {
                third = arr[k];
                //printf("\n third is %d \n",third);
                if(first + second + third == 0)
                {
                    printf("\n%d %d %d\n",first,second,third);
                }
            }
        }
    }


    return 0;
}
