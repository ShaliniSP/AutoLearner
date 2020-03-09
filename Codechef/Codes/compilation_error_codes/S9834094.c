
    //#include<iostream.h>
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    int n,count1=0,count2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    if(a[i]%2==0)
    count++;
    else
    count2++;
    }
    if(count1>count2)
    cout<<"READY FOR BATTLE"<<endl;
    else
    cout<<"NOT READY"<<endl;
    return 0;
    } 

