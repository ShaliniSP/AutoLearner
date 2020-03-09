
    #include<stdio.h>
    #include<stdlib.h>
    int main()
    {
    int evenS,oddS,i,N;
    int a[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
    scanf("%d",&a[i]);
    }
     
    for(i=0;i<N;i++)
    {
    if(a[i]%2==0)
    evenS++;
    else
    oddS++;
    }
    if(evenS>oddS)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }

