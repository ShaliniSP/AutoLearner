
    #include <stdio.h>
    #include <stdlib.h>
    
    /* run this program using the console pauser or add your own getch, system("pause") or input loop */
    
    int main()
    {
    int n,i,arr[100],s=0,h=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
    	if(arr[i]%2==0)
    	s++;
    	else 
    	h++;
    }
    if(s>h)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
    
    
    	return 0;
    }

