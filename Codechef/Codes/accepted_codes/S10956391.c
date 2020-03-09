
    #include<stdio.h>
    
    int main()
    
    {
    
    int N,A,i,count;
    scanf("%d",&N);
    for(i=0;i<N;i++)
     {
       count=0;
       scanf("%d",&A);
       if((A%2)==0)
        count++;
       else
        count--;
    
     }
    if(count<=0)
     printf("NOT READY\n");
    else
     printf("READY FOR BATTLE\n");
    
    return 0;
    
    
    }

