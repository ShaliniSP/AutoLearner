
    #include<stdio.h>
    
    
    int main()
    {int a[1000],i,j=0,k,flag=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {scanf("%d",&a[i]);
    }for(i=0;i<k;i++)
    	if(a[i]%2==0)
    	{flag++;}
    	else
    		j++;
    if(flag>j)
    	printf("\nREADY FOR BATTLE");
    else
    	printf("\nNOT READY");
    
    return 0;
    }
    

