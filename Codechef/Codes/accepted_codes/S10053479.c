
    #include<stdio.h>
    int main()
    {
    int arr[100],i,num,c1=0,c2;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
    if(arr[i]%2==0)
    c1++;
    }
    c2=num-c1;
    if(c1>c2)
    {
    printf("READY FOR BATTLE\n");
    }
    else
    {
    printf("NOT READY\n");
    }
    return 0;
    }
    

