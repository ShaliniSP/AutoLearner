
    #include<stdio.h>
    #include<conio.h>
    
    int main()
    {
    int n,ar[100],i,e=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d ",&ar[i]);
    if((ar[i]%2)==0)
    e++;
    else
    o++;
    }
    if(e>o)
    printf("READY FOR BATTLE\n");
    else
    printf("NOT READY\n");
    return 0;
    }

