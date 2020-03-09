
    #include<iostream>
     
    using namespace std;
    int main()
    {
    int n,a;
    cin>>n;
    int even=0,odd=0;
    while(n--)
    {
    cin>>a;
    if(a%2==0)
        even++;
    else
        odd++;
     
     
    }
     
     
    if(even>odd)
    cout<<"READY FOR BATTLE";
    else
    cout<<"NOT READY";
     
    }
     

