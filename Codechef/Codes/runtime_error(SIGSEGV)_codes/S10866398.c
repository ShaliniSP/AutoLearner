
    #include<stdio.h>
    int main()
    {
    long int i,n;
    scanf("%ld",&n);
    long int a[i],count=0,sum=0;
    for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
     for(i=0;i<n;i++)
     {
      if((a[i]%2==0))
      count++;
      else 
      sum++;
     }
    if(count>sum)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    return 0;
    }

