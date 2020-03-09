
    #include<stdio.h>
    #include<conio.h>
    void main()
    { int n,i,c=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { scanf("%d",&x);
    if(x%2==0)
    c++;
    else
    c--;}
    if(c>0)
    printf("READY FOR BATTLE");
    else printf("NOT READY");
    }
    

