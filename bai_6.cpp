#include <iostream>

using namespace std;

bool la_so_nguyen_to(int so_nguyen){
    bool check = true;

    for (int i=2;i<so_nguyen;i++){
        if(so_nguyen%i==0){
            check = false;
            break;
        }
    }

    return check;
}

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
        if(la_so_nguyen_to(mang[i]))
            cout<<mang[i]<<endl;
    }

    return 0;
}
