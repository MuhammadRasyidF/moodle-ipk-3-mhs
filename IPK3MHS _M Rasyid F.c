//nama : M Rasyid F
//deskripsi : menghitung ipk mhs

#include <stdio.h>

float scanandcount(char x) ;
void print (char name[3][255], float skor[3]) ;

int main(){
    float n_mhs[3] = {} ;
    char n, i ;
    char name[3][255] ;
    for (i= 0 ; i<3 ; i++){
        scanf("%s", &name[i]) ;
        n_mhs[i] = scanandcount(n) ;
    }
    print (name, n_mhs) ;
    return 0 ;
}

float scanandcount(char x){
    int i ; 
    float skor = 0;
    for (i = 0 ; i < 4 ; i++){
        scanf("%s", &x) ;
        switch (i){
            case 0 : {
                if (x == 'A'){
                    skor += 4*4 ;
                    break ;
                }
                if (x == 'B'){
                    skor += 3*4 ;
                    break ;
                }
                if (x == 'C'){
                    skor += 2*4 ;
                    break ;
                } 
                if (x == 'D'){
                    skor += 1*4 ;
                    break ;
                } 
                if (x == 'E'){
                    skor += 0*4 ;
                    break ;
                }
            }
            case 1 : {
                if (x == 'A'){
                    skor += 4*3 ;
                    break ;
                }
                if (x == 'B'){
                    skor += 3*3 ;
                    break ;
                }
                if (x == 'C'){
                    skor += 2*3 ;
                    break ;
                } 
                if (x == 'D'){
                    skor += 1*3 ;
                    break ;
                } 
                if (x == 'E'){
                    skor += 0*3 ;
                    break ;
                }
            }
            case 2 : {
                if (x == 'A'){
                    skor += 4*3 ;
                    break ;
                }
                if (x == 'B'){
                    skor += 3*3 ;
                    break ;
                }
                if (x == 'C'){
                    skor += 2*3 ;
                    break ;
                } 
                if (x == 'D'){
                    skor += 1*3 ;
                    break ;
                } 
                if (x == 'E'){
                    skor += 0*3 ;
                    break ;
                }
            }
            case 3 : {
                if (x == 'A'){
                    skor += 4*2 ;
                    break ;
                }
                if (x == 'B'){
                    skor += 3*2 ;
                    break ;
                }
                if (x == 'C'){
                    skor += 2*2 ;
                    break ;
                } 
                if (x == 'D'){
                    skor += 1*2 ;
                    break ;
                } 
                if (x == 'E'){
                    skor += 0*2 ;
                    break ;
                }
            }
        }
    }
    skor = (float)skor/12 ;
    return skor ;
}

void print (char name[3][255], float skor[3]){
    int i ;
    for (i = 0 ; i < 3 ; i++){
        printf("%s %.2f", name[i], skor[i]) ;
        if (i<2){
            printf("\n") ;
        }
    }
}