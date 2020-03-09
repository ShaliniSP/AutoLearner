
    #include<stdio.h>
    int main(void)
    {
        int t,k,e=0,o=0;
        scanf("%d",&t);
        for(k=1;k<=t;k++)
        {
            int a;
            scanf("%d ",&a);
            a%2==0?e++:o++;
        }
        e>o?printf("READY FOR BATTLE"):printf("NOT READY");
    } 

