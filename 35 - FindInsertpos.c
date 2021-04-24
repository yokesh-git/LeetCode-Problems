#include<stdio.h>

int main()
{
    int d,arr[100],N,i,target,flag=0,found=0;
    char c;

    while(scanf("%d%c",&d,&c) && c!='\n')
        arr[N++] = d;
    arr[N++] = d;
    scanf("%d",&target);

    for(i=0;i<N;i++)
    {

        if(arr[i] == target)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        printf("%d",i);
    }
    else
    {
        for(i=0;i<N;i++)
        {
            if(arr[i]>target)
            {
                found = 1;
                break;
            }
        }
    }
    if(found == 1)
    {
        printf("%d",i);
    }
    else
    {
        printf("%d",N);
    }



    return 0;
}
