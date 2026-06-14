#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout <<"===BEFORE:\n";

    for(int i = 0; i < n; i++){
        cout <<a[i] << endl;
    }

    int max1 = a[0];
    int max2 = -INFINITY;

    for(int i = 0; i < n; i++){
        if(max1 <= a[i]){
            max2 = max1;
            max1 = a[i];
        }
        else if (max2 < a[i]){
            max2 = a[i];
        }
    }

        cout <<"===AFTER:\n";

    for(int i = 0; i < n; i++){
        cout <<a[i] << endl;
    }

    cout<<"So lon nhat trong mang la: "<<max1<<endl;
    cout<<"SO lon thu hai trong mang la: "<<max2<<endl;


    return 0;
}
