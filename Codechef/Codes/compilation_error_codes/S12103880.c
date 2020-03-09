
    int main() {
        int n; cin >> n;
        int cnt = 0;
        for(int i=1; i<=n; i++) {
            int x; cin >> x;
            if( x % 2 == 0 ) cnt ++;
        }
        puts( cnt > n - cnt ? "READY FOR BATTLE" : "NOT READY" );
        return 0;
    }

