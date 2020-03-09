
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
    
    if((A[i]%2)==0)
    even=even+1;
    else
    odd=odd+1;
    
    }
    
    printf("\nno:of lucky soldiers is %d",even);
    printf("\nno:of unlucky soldiers is %d",odd);
    
    if(even>odd)
    printf("\nREADY FOR BATTLE\n");
    else
    printf("\nNOT READY\n");
    
    return 0;
    }
    
    

