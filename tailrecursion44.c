#include <stdio.h>

int rsum(int n, int sum){
    if(n==0)
        return sum;
    else 
        return rsum(n-1,sum+n);


}


int main(){
    int i;

    scanf("%d",&i);
    printf("%d",rsum(i,0));
}