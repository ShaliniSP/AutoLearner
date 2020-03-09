
    #include<iostream>
    using namespace std;
    int main(){
        int N, wep, wepCE = 0, wepCO = 0;
        cin >> N;
        while(N--){
            cin >> wep;
            if(wep % 2 == 0)
                wepCE++;
            else if(wep % 2 != 0)
                wepCO++;
        }
        if(wepCE > wepCO)
            cout << "READY FOR BATTLE" ;
        else
            cout << "NOT READY";
    }
    

