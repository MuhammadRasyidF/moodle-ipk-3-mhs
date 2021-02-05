//Nama : M Rasyid F
//Deskripsi : mencari nomor yang ditentukan dan berapa kali iterasi yang diperlukan

#include<stdio.h>

void scan(int *n, int *s) ;
void inputdata(int data[2100], int n) ;
void sortingascending(int n, int data[2100]) ;
int binarysearch(int data[2100], int n, int s, int *iteration) ;
void print(int result, int iteration) ;

int main(){
    //n = jmlh data
    //s = angka yang dicari
    int n, s ;
    int data[2100] ;
    int result, iteration = 0 ;
    scan(&n, &s) ;
    inputdata(data, n) ;
    sortingascending(n, data) ;
    result = binarysearch(data, n, s, &iteration) ;
    print(result, iteration) ;
    return 0;
}

void scan(int *n, int *s){
    scanf("%d %d", &(*n), &(*s)) ;
}

void inputdata(int data[2100], int n){
    int i ;
    for(i=0 ; i<n ; i++){
        scanf("%d", &data[i]) ;
    }
}


void sortingascending(int n, int data[2100]){
    int i, j, temp ;
    for (i=0 ; i<n ; i++){
        for (j=i+1 ; j<n ; j++){
            if(data[i]>data[j]){
                temp = data[i] ;
                data[i] = data[j] ;
                data[j] = temp ;
            }
        }
    }
}

int binarysearch(int data[2100], int n, int s, int *iteration){
    int left=0, right = n-1 ;

    while (left<=right){
        (*iteration)++ ;
        int mid = (left+right)/2 ;

        if(data[mid] == s){
            return 1 ;
        }

        if(data[mid]>s){
            right = mid - 1 ;
        }

        else{
            left = mid + 1 ;
        }
    }

    return 0 ;
}

void print(int result, int iteration){
    printf("%d\n%s", iteration, result==0 ? "not found" : "found" ) ;
}