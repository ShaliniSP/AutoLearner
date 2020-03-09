
    #include<iostream>
    using namespace std;
    int main(){
        int N, wepCE = 0, wepCO = 0;
        cin >> N;
            int* wep = new int[N];
            for(int  i = 0; i < N; i++)
            cin >> wep[i];
            for(int i = 0; i < N; i++){
            if(wep[i] != 0){
            if(wep[i] % 2 == 0)
                wepCE++;
            else if(wep[i] % 2 != 0)
                wepCO++;
            }
        }
        if(wepCE > wepCO)
            cout << "READY FOR BATTLE" ;
        else
            cout << "NOT READY";
    }
    

