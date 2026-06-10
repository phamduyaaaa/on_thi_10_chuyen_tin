#include <iostream>

using namespace std;

int main(){
    int n; cin>>n;

    int tong = 0;
    while(n!=0){
        int giai_thua = 1;
        int hang_don_vi = n%10;
        if (hang_don_vi == 0);
        else{
        for(int i=1;i<=hang_don_vi;i++) giai_thua *=i;
        }
        tong += giai_thua;
        n/=10;
    }

    cout<<tong;



    return 0;
}
