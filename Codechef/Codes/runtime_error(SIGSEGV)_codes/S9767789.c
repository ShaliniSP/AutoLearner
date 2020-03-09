
    #include<stdio.h>
    int main()
    {
    int N,even,odd,i;
    int A[N];
    even=0;
    odd=0;
    
    printf("No of soldiers?\n");
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
    {
    printf("no of weapons for %d soldier",i+1);
    scanf("%d",&A[i]);
    }
    
    for(i=0;i<N;i++)
    {
    
     if((A[i]%2)==0)
     {
      even=even+1;
     }
     else
     {
      odd=odd+1;
     }
    
    }
    
    if(even>odd)
    printf("\nREADY FOR BATTLE\n");
    else
    printf("\nNOT READY\n");
    
    return 0;
    }
    
    

