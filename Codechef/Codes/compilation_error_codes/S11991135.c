
    #include<iostream.h>
    using namespace std;
    int main()
    {
    int a[100],n,i,count=0,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    count++;
    else
    flag++;
    }
    if(count>flag)
    cout<<"READY FOR BATTLE";
    else
    cout<<"NOT READY";
    return 0;
    }
    

