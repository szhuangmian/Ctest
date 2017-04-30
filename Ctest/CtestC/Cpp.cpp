//
//  Cpp.cpp
//  CtestC
//
//  Created by HuangMian on 2017/4/14.
//  Copyright © 2017年 HuangMian. All rights reserved.
//

#include "Cpp.hpp"
#include "stdlib.h"
#include "time.h"

void initA(int a[],int n){
    srand((unsigned int)time(0));
    for(int i=0;i<n;i++){
        a[i] = rand() % MAXNN ;
    }
    
}

void printA(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%4d",a[i]);
    }
    printf("\n");
}

void zjInsert(int a[],int n){
    int i,j;
    for(i=1;i<n;i++){
        int k = a[i];
        for (j=i-1; j>=0; j--) {
            if(a[j]>k){
                a[j+1] = a[j];
            }else{
                
                break;
            }
        }
        a[j+1] = k;
    }
}

int biFind(int a[],int m,int low,int high){
    while (low <= high) {
        int middle = (low + high) / 2;
        if(a[middle] >m){
            high = middle -1;
        }else{
            low = middle + 1;
        }
    }
    
    
    return low;
}


void biInsert(int a[],int left,int right){
    for(int i = left +1;i<=right;i++){
        int temp = a[i];
        
        int k = biFind(a, temp, 0, i-1);
        
        for(int j=i-1;j>=k;j--){
            a[j+1] = a[j];
        }
        a[k] = temp;

    }
}



int partition(int a[],int s,int e){
    int i=s,j=e;
    int k = a[s];
    while (i<j) {

        while (i<j && a[j] >= k) {//注意这里的>=号，如果是>，当出现相等时，会死循环
            j--;
        }

        a[i] = a[j];

        while (i<j && a[i] <= k) {//注意这里的<=号，如果是<，当出现相等时，会死循环
            i++;
        }

        a[j] = a[i];
    }

    a[i] = k;
    return i;
}

void quickSort(int a[],int left,int right){
    if(left >= right){
        return;
    }
    int r = partition(a, left, right);
    quickSort(a, left, r-1);
    quickSort(a, r+1, right);
  
}


void selectSort(int a[],int n){
    for (int i = 0; i < n-1; i++) {
        
        int min = i;
        
        for (int j=i+1; j< n; j++) {
            
            if(a[j] < a[min]){
                min = j;
            }
        }
        
        if(min!=i){
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

void mergeSort(int a[],int temp[],int start,int end){
    if(start >= end){
        return;
    }
    int middle = (start + end) / 2;
    mergeSort(a, temp, start, middle);
    mergeSort(a, temp, middle+1, end);
    merge(a, temp, start, middle, end);
}


void merge(int a[],int temp[],int start,int middle,int end){
    int i=start,j = middle +1,k = start;
    while (i < middle + 1 && j < end + 1 ) {
        if(a[i] > a[j]){
            
            temp[k] = a[j];
            j++;
            k++;
            
        }else{
            temp[k] = a[i];
            i++;
            k++;
        }
    }
    
    while (i < middle + 1) {
        temp[k] = a[i];
        i++;
        k++;
    }
    
    while (j < end + 1) {
        temp[k] = a[j];
        j++;
        k++;
    }
    
    for(int k = start;k < end+1;k++){
        a[k] = temp[k];
    }
}

void heapAjust(int a[],int element,int n){
    int leftChild = 2*element + 1;
    int rightChild = leftChild +1;
    
    while (rightChild < n) {
        
        if(a[element] > a[leftChild] && a[element] > a[rightChild]){
            
            return;
            
        }else if(a[leftChild] >=a[rightChild]){
            
            int temp = a[element];
            a[element] = a[leftChild];
            a[leftChild] = temp;
            element = leftChild;
            
        }else{
            
            int temp = a[element];
            a[element] = a[rightChild];
            a[rightChild] = temp;
            element = rightChild;
        }
       leftChild = 2*element + 1;
       rightChild = leftChild +1;
    }
    
    if(leftChild < n && a[leftChild] > a[element]){
        int temp = a[element];
        a[element] = a[leftChild];
        a[leftChild] = temp;
    }
}

void heapSort(int a[],int n){
    for(int i = n-1;i>=0;i--){
        heapAjust(a, i, n);
    }
    
    for(int i= n-1;i>0;i--){
        int temp = a[i];
        a[i] = a[0];
        a[0] = temp;
        heapAjust(a, 0, i);
    }
}
