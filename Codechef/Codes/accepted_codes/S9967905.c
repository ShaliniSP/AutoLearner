
    #include<stdio.h>
    int main()
    {
    unsigned int N, A[100];
    int i,e=0,o=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    
        if(A[i]%2==0)
        {
         e++;
        }
        else
        {
         o++;
        }
    } 
    
    if(e<o||e==o)
    {
        printf("NOT READY");
        
    }
    else
    {
        printf("READY FOR BATTLE");
        
    }
    return 0;
    }

