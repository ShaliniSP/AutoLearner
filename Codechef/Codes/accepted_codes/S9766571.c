
    #include<stdio.h>
    int main()
    {
    int s,w,i,eve=0,od=0;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {scanf("%d",&w);
    if(w%2==0)
    eve++;
    else
    od++;
    }
    if(eve>od)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }  

