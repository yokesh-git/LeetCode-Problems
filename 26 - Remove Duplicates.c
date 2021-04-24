#include<stdio.h>

int main()
{
    int d,arr[100],N,i;
    char c;

    while(scanf("%d%c",&d,&c) && c!='\n')
        arr[N++] = d;
    arr[N++] = d;
    int current = 0;
    for(i=0;i<N;i++)
    {
        if(i==N-1) break;
        if(arr[i] == arr[i+1])
            continue;
        else
        {
            //printf("\n %d %d \n",arr[i],arr[i+1]);
            arr[++current] = arr[i+1];
            //printf("\n C is %d \n",current);
        }

    }
    for(i=0;i<=current;i++)
        printf("%d ",arr[i]);

    return 0;
}
