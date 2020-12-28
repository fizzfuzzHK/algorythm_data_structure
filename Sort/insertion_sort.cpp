#include <iostream>

using namespace std;

void insertion_sort(int A[], int n){
    int i, j, v;
    for(i = 1; i < n;i++){
        v = A[i];
        j = i - 1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] =v;
    }
}

int main(){
   
    int A[5] = {10, 13, 3, 6, 4};
    int n = 5;
    insertion_sort(A, n);
    
    for(int i = 0; i < n; i++){
        cout << A[i] << endl;
    }

    return 0;
}


