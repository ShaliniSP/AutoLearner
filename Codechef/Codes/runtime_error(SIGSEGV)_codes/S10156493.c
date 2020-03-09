
    #include<stdio.h>
    int even(int n)
    {
    	if(n%2==0)
    	 return 1;
    	 else return -1;
    }
    
    int main()
    {int n,i=0,sum=0;
     int arr[n];
     
     scanf("%d",&n);
     
     for(i=0;i<n;i++)
     scanf("%d ",arr[i]);
     
     for(i=0;i<n;i++)
       sum = sum + even(arr[i]);
     
     if(sum>0) /*if sum<0 and sum=0 does this execute if(sum)*/
      printf("READY FOR BATTLE");
      else
       printf("NOT READY");
    
    return 0;
     
    }
    

