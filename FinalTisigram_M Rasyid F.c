//Nama : M Rasyid F
//Deskripsi : menentukan peserta yang lolos final tisigram

#include <stdio.h>

void scan() ;
void inputValue() ;
void swap() ;
void sorting() ;
void printchoosen() ;

int main(){
    //n = jmlh peserta
    //r = kuota lolos
    int n, r ;
    int participants[1100] = {};
    scan(&n, &r) ;
    inputValue(participants, n) ;
    sorting(participants, n) ;
    printchoosen(participants, r) ;
    return 0 ;
}

void scan( int *n, int *r){
    scanf("%d %d", &(*n), &(*r)) ;
}

void inputValue(int arr[1100], int n){
    int i ;
    for (i=0 ; i<n ; i++){
        scanf("%d", &arr[i]) ;
    }
}

void swap(int *x, int *y){
    int temp ;
    temp = *x ;
    *x = *y ;
    *y = temp ;
}

void sorting(int arr[1100], int n){
    int i, j ;
    //using bubble sort
    for (i=0 ; i<n-1 ; i++){
        for (j=0 ; j<n-i-1 ; j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j], &arr[j+1]) ;
            }
        } 
    }
}

void printchoosen(int arr[1100], int r){
    int i ;
    for (i=0 ; i<r ; i++){
        printf("%d\n", arr[i]) ;
    }
}