
    Home  » Mahasena » All Submissions » riya_bagaria [11116883]
    Solution: 11116883
    
    CodeChef submission 11116883 (C) plaintext list. Status: WA, problem AMR15A, contest CODECHEF. By riya_bagaria (riya_bagaria), 2016-08-10 15:33:30.
    
        #include<stdio.h>
        int main()
        {
        	int n,i,count=0,s=0;
        	scanf("%d",&n);
        	int a[1000];
        	for(i=1;i<=n;i++)
        	{
        		scanf("%d",&a[i]);
        		if(a[i]%2==0)
        			count++;
        		else
        			s++;
        	}
        	if(count>s)
        		printf("READY FOR BATTEL");
        	else
        		printf("NOT READY");
        	return 0;
        } 
    
    

