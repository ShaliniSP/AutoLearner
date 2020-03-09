
    #include<stdio.h>
    void main()
    {
    int a,o=0,e=0;
    int N[10];
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    scanf("%d",&N[i]);
    for(i=0;i<a;i++)
    {
    if(N[i]%2==0)
       e++;
    else
       0++;
    }
    if(e>o)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }

