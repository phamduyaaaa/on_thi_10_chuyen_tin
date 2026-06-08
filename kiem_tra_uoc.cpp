#include <iostream>

using namespace std;



int main(){
    int n; cin>>n;

    int mang[n+1];
    int index = 0;

    for (int i=2; i<=n;i++){
        if (n % i == 0){
            mang[index] = i;
            index ++;
        }
    }

    for (int i=0;i<index;i++){
        cout<<"INDEX="<<i<<": "<<mang[i]<<"\n";
    }

    return 0;
}
