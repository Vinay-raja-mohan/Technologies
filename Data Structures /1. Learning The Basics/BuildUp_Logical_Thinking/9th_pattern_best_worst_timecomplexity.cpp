void nStarDiamond(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout << "*";
        }
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }


        cout << endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout << " ";
        }
        for(int j=1;j<=2*(n-i)+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
