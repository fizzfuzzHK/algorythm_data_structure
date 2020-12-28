#include <iostream>

using namespace std;

void bubblesort(int A[], int n){
    bool flag = true;
    
    while (flag) {
        flag = false;
        for (int j= n-1;j>= 0;j--){
            if (A[j-1] > A[j]){
                swap(A[j-1], A[j]);
                flag = true;
            }
        }
    }
}

int main(){
    int A[5] = {10, 13, 3, 6, 4};
    int n = 5;

    bubblesort(A,n);

     for(int i = 0; i < n; i++){
        cout << A[i] << endl;
    }

    return 0;
}