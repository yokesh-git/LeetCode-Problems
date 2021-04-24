#include<stdio.h>

int main()
{

    int d,arr[100],N,i,val,count=0;
    char c;

    while(scanf("%d%c",&d,&c) && c!='\n')
        arr[N++] = d;
    arr[N++] = d;

    scanf("%d",&val);
    int last = N-1;
    for(i=0;i<N;i++)
    {
        if(arr[i] != val)
        {
            arr[count++] = arr[i];
        }
    }
    printf("\nAns is %d\n",count);
    for(i=0;i<count;i++)
        printf("%d ",arr[i]);

    return 0;
}
