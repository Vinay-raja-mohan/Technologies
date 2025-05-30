void alphaHill(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        char temp='A';
        for(int j=1;j<=n-i;j++){
            cout << "  ";
        }
        for(int j=1;j<=i;j++){
            cout << temp << " ";
            temp++;
        }
        temp--;
        for(int j=1;j<=i-1;j++){
            temp--;
            cout << temp << " ";
        }
        for(int j=1;j<=n-i;j++){
            cout << "  ";
        }
        cout << endl;
    }
}
