//Nama : M Rasyid F
//Deskripsi : menghitung banyak acara menyusun buku

#include <stdio.h>

void scan() ;
int permutation(int n, int r) ;
void print(int many_ways) ;

int main(){
    int slots, books ;
    //algorithm
    scan(&slots, &books) ;
    print(permutation(slots, books)) ;
    return 0 ;
}

void scan(int *n, int *r){
    scanf("%d %d", &(*r), &(*n)) ;
}

int permutation(int n, int r){
    //using permutation theorythm --> C(n, r) = n!/(n-r)!
    // n = banyak tempat pada rak
    // r = banyak buku
    int a = 1, b = 1, c = 1, C, d, e, i ;
    int res ;
    d = n ;
    e = r ;
    C = d-e ;
    for (i = n ; i>0 ; i--){
        a *= n;
        n -= 1 ;
    }
    for (i = C ; i>0 ; i--){
        c *= C ;
        C -= 1 ;
    }

    res = a/c ;
    return res;
}

void print(int many_ways){
    printf("%d", many_ways) ;
}