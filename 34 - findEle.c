#include<stdio.h>

int main()
{
    int d,arr[100],N,i,val,count=0,target;
    char c;
    int ans[2];
    while(scanf("%d%c",&d,&c) && c!='\n')
        arr[N++] = d;
    arr[N++] = d;
    scanf("%d",&target);
    int mark = 0;

    for(i=0;i<N;i++)
    {
        if(mark==0 && arr[i] == target)
        {
            ans[0] = ans[1] = i;
            mark = 1;
        }
        if(mark==1 && target == arr[i])
            ans[1] = i;
    }
    for(i=0;i<2;i++)
    {
        printf("%d ",ans[i]);
    }


    return 0;
}
