//
//  main.cpp
//  CtestC
//
//  Created by HuangMian on 2017/3/27.
//  Copyright © 2017年 HuangMian. All rights reserved.
//

#include <stdio.h>

void print_a(int *a,int n);
void swap(int *x,int *y);
int kcase = 0;

void perm(int *a,int n,int cur){
   
    if(cur == n -1){
        kcase++;
        printf("Case:%-4d ",kcase);
        print_a(a, n);
        return;
    }
    for(int i = cur; i < n; i++){
            swap(&a[i], &a[cur]);
            perm(a,n,cur+1);
            swap(&a[i], &a[cur]);
    }
    
}

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void print_a(int *a,int n){
    
    for(int i= 0;i < n;i++){
        printf("%-4d",a[i]);
    }
    printf("\n");
}

int main(){
    
    int n = 5;
    int a[n];
    
    for(int i = 1;i<=n; i++){
        a[i-1] = i;
    }
    //print_a(a, n);
    kcase = 0;
    perm(a, n, 0);
    
    return 0;
}
