//
//  Cpp.hpp
//  CtestC
//
//  Created by HuangMian on 2017/4/14.
//  Copyright © 2017年 HuangMian. All rights reserved.
//
#define MAXNN  10

#ifndef Cpp_hpp
#define Cpp_hpp


#include <stdio.h>


void initA(int a[],int n);
void printA(int a[],int n);

void zjInsert(int a[],int n);
void biInsert(int a[],int left,int right);
int partition(int a[],int s,int e);
void quickSort(int a[],int left,int right);
void selectSort(int a[],int n);
void mergeSort(int a[],int temp[],int start,int end);
void merge(int a[],int temp[],int start,int middle,int end);
void heapAjust(int a[],int i,int n);
void heapSort(int a[],int n);
#endif /* Cpp_hpp */
