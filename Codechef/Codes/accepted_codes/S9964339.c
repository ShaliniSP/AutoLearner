
    #include<stdio.h>
     int main()
     {
     	int n,i,temp,e=0,o=0;
     	scanf("%d",&n);
     	for(i=0;i<n;i++)
     	{
     		scanf("%d",&temp);
     		if(temp%2==0)
     			e++;
     		else
     			o++;
     	}
     	if(e>o)
     		printf("READY FOR BATTLE");
     	else
     		printf("NOT READY");
     	return 0;
     }

