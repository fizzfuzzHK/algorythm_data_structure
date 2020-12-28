#include <iostream>

using namespace std;

void selection_sort(int A[], int n){
    int i, s, t, minj;

    for (i = 0; i < n-1; i++){
        minj = i;
        for (int j = i; j < n; j++){     
            if (A[j] < A[minj]){
                minj = j;
            }
        t = A[i];
        A[i] = A[minj];
        A[minj] = t;
        }
    }
}

int main(){
    int A[5] = {10, 13, 3, 6, 4};
    int n = 5;

    selection_sort(A,n);

    for(int i = 0; i < n; i++){
        cout << A[i] << endl;
    }

    return 0;
}