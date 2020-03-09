
    #include<stdio.h>
    void main()
    {
      int i,n,wp,even=0,odd=0;
      printf("Enter Number Of Soldiers:");
      scanf("%d",&n);
     for(i=0;i<=n;i++)
     {
        scanf("%d",&wp);
        if(wp%2==0)
        even++;
        else
        odd++
        }
        if(even>odd)
        printf("\nReady For Battle");
        else
        printf("\nNot Ready For Battle");
        } 

