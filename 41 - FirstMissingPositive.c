#include<stdio.h>

int main()
{
    int d,arr[100],N,i,j,temp,flag;
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

    int count = 0;

    for(i=0;i<N;i++)
    {
        if(arr[i] == count++ || arr[i]<=0)
        {
            continue;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        if(count-1 == 0)
            count = count+1;
        printf("%d",count-1);
    }
    else
    {
        printf("%d",arr[N-1]+1);
    }

    return 0;
}
