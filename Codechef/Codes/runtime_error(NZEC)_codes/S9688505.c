
    #include<stdio.h>
    void main()
    {
    int even=0,i,odd=0,soldier_no,weapons_no[1001];
    scanf("%d",&soldier_no);
    for(i=0;i<soldier_no;i++)
    {
    scanf("%d",&weapons_no[i]);
    }
    for(i=0;i<soldier_no;i++)
    {
    if(weapons_no[i]%2==0)
    even++;
    else
    odd++;
    }
    if(even>odd)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    }

