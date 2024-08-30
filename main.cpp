#include <iostream>

int main(){
    std::cout << "Fibo Fibo" << std::endl;

    int n = 40;
    int a[n+1];
    a[1] = 1;
    a[0] = 0;
    int temp;
    /* for(int i = 2; i <= n; i++){
        temp = pre;
        pre = pre +prepre;
        prepre = temp;
    } */
    for(int i = 2; i <=n; i++){
        a[i] = a[i-1] + a[i-2];
   }

    std::cout<< a[n] <<std::endl;
    return 0;
}