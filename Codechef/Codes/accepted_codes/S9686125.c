
    #include<stdio.h>
    #include<string.h>
    int main()
    {
     	int i,n,a[100],m,t;
     	scanf("%d",&n);
     	m=0;
     	t=0;
     	
     		for(i=0;i<n;i++)
     		{
     		 scanf("%d",&a[i]);
     		  if((a[i]%2)==0)
     		   m++;
     		   else
     		   t++;
     		}
     		 if(m>t)
     		 printf("READY FOR BATTLE\n");
     		 else 
     		 printf("NOT READY\n");
     		 return 0;
     	
     	
     		
    
    
    
    }

