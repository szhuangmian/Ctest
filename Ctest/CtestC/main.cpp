//
//  main.cpp
//  CtestC
//
//  Created by HuangMian on 2017/4/17.
//  Copyright © 2017年 HuangMian. All rights reserved.
//

//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//int test(int n,int base)
//{
//    int count=0;
//    while(n != 0){
//        if(n%base ==1){
//            count++;
//        }
//        printf("%d",n%base);
//
//        n /= base;
//    }
//    return count;
//}
//
//int main(){
//    test(113333,10);
//    return 0;
//}

//class Solution {
//public:
//    std::vector<std::vector<std::string> > solveNQueens(int n) {
//        std::vector<std::vector<std::string> > res;
//        std::vector<std::string> nQueens(n, std::string(n, '.'));
//        solveNQueens(res, nQueens, 0, n);
//        return res;
//    }
//private:
//    void solveNQueens(std::vector<std::vector<std::string> > &res, std::vector<std::string> &nQueens, int row, int &n) {
//        if (row == n) {
//            res.push_back(nQueens);
//            return;
//        }
//        for (int col = 0; col < n; ++col){
////            nQueens[row][col] = 'Q';
////            solveNQueens(res, nQueens, row + 1, n);
////            nQueens[row][col] = '.';
//            if (isValid(nQueens, row, col, n)) {
//                nQueens[row][col] = 'Q';
//                solveNQueens(res, nQueens, row + 1, n);
//                nQueens[row][col] = '.';
//            }
//        }
//    }
//    bool isValid(std::vector<std::string> &nQueens, int row, int col, int &n) {
//        //check if the column had a queen before.
//        for (int i = 0; i <= row; ++i)
//            if (nQueens[i][col] == 'Q')
//                return false;
//        //check if the 45° diagonal had a queen before.
//        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
//            if (nQueens[i][j] == 'Q')
//                return false;
//        //check if the 135° diagonal had a queen before.
//        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
//            if (nQueens[i][j] == 'Q')
//                return false;
//        return true;
//    }
//};
//
//int main(){
//    Solution *s = new Solution();
//    std::vector<std::vector<std::string>> res = s->solveNQueens(4);
//    std::vector<std::vector<std::string>>::iterator iter = res.begin();
//    int kCase = 0;
//    while (iter!=res.end()){
//        kCase++;
//        cout<<"#"<<kCase<<":\n";
//        vector<string> vstr = *iter;
//        std::vector<std::string>::iterator iter2 = vstr.begin();
//        while (iter2!=vstr.end()) {
//            cout<<*iter2;
//            cout<<"\n";
//            iter2++;
//        }
//        iter++;
//        cout<<"\n";
//    }
//    cout<<"\n";
//   
//    return 0;
//}

//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//    double vs,r,c,w,vr;
//    
//    int n;
//    while (scanf("%lf%lf%lf%d",&vs,&r,&c,&n) == 4) {
//        for(int i=0;i<n;i++){
//            scanf("%lf",&w);
//            vr =  c*r*w*vs / sqrt (1+ c*r*w * c*r*w);
//            printf("%.3lf\n",vr);
//        }
//    }
//    
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main(){
//    double balance=0;
//    double sum=0;
//    double average=0;
//    for(int i=0;i<12;i++){
//        scanf("%lf",&balance);
//        sum+=balance;
//    }
//    average = sum / 12.0;
//    printf("$%.2lf\n",average);
//    return 0;
//}

//#include <iostream>
//#include <map>
//#include <algorithm>
//#include <cmath>
//#include <string>
//using namespace std;
//
//char m[26] = {'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','0','7','7','8','8','8','9','9','9','0'};
//char decodeTelphone[100];
//
//void decode(char a[],int length){
//    int j=0;
//    for(int i=0;i<length;i++){
//    
//        if('0'<=a[i] && a[i]<='9'){
//            decodeTelphone[j] = a[i];
//            j++;
//        }else if ((int)'A'<=(int)a[i] && (int)a[i] <=(int)'Z' && a[i]!='Q' && a[i]!='Z'){
//            decodeTelphone[j] = m[a[i]-(int)'A'];
//            j++;
//        }
//        if(j==3){
//           decodeTelphone[j] = '-';
//           j++;
//        }
//    
//    }
//    decodeTelphone[j]='\0';
//  
//}
//
//int main(){
//    int n;
//    char telphone[100];
//    map<string,int,less<string>> telphones;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++){
//        scanf("%s",telphone);
//        int length = (int)strlen(telphone);
//        decode(telphone, length);
//        if(telphones.count(decodeTelphone)==0){
//            telphones.insert(pair<string,int>(decodeTelphone, 0));
//        }
//        telphones[decodeTelphone] = telphones[decodeTelphone] +1;
//    }
//    int k = 0;
//    for (map<string, int>::iterator iter = telphones.begin();iter != telphones.end();++iter) {
//        pair<string, int> pair = *iter;
//
//        if(pair.second>1){
//            k++;
//            printf("%s %d\n",pair.first.c_str(),pair.second);
//        }
//    }
//    if(k==0){
//        printf("No duplicates.\n");
//    }
//    return 0;
//}

//#include "stdio.h"
//#include <string>
//
//using namespace std;
//
//
//#define MAX 150
//
//char ans[MAX];
//char b[MAX];
//char c[MAX];
//
//void twobigMul(char a[],char b[]){
//    memset(c, '0',sizeof(&c));
//    int i=0;
//    int j=0;
//
//    for(i=0;i<strlen(a);i++){
//        int great = 0;
//        for (j=0; j<strlen(b); j++) {
//            int a1 = (a[i] - '0') ;
//            int b1 = (b[j]- '0');
//            int ab = a1 * b1;
//            int c1 = (c[i+j]- '0');
//            int result = ( ab+c1 +great);
//            int left = result % 10;
//            great =result/ 10;
//            c[i+j] =  left +'0';
//        }
//        c[i+j] = great + '0';
//    }
//    c[i+j] = '\0';
//    memset(ans,'0', sizeof(&ans));
//    strcpy(ans, c);
//}
//
//void printStr(char c[],int dot){
//    int len = (int)strlen(c);
//    int head = len-1;
//    int rear = 0;
//
//
//    for(int i=0;i<len;i++){
//        printf("%c",c[i]);
//    }
//    printf("\n");
//}
//
//int  findDot(char str[]){
//    int i=0;
//    int j = (int)strlen(str);
//    int dot=-1;
//    for (i=0; i<j; i++) {
//        if(str[i]=='.'){
//            dot = i;
//        }
//        if(dot >=0 && i>=dot){
//            str[i] = str[i+1];
//        }
//    }
//    str[i] = '\0';
//    return  dot;
//}
//
//void revStr(char str[]){
//    int i=0;
//    int j = (int)strlen(str);
//    j--;
//    while (i<=j) {
//        char t = str[i];
//        str[i++] =str[j];
//        str[j--] = t;
//    }
//
//}
//
//int main(){
//    int n=0;
//    while (scanf("%s%d",b,&n)!=EOF) {
//        int dot = findDot(b);
//        revStr(b);
//        if(n<=0){
//            printf("1\n");
//            return 0;
//        }
//        strcpy(ans, "1");
//        twobigMul(ans, b);
//        n--;
//
//        int i=0;
//        for(i=0;i<n;i++){
//            twobigMul(ans, b);
//        }
//        printStr(ans,dot);
//    }
//    return 0;
//}
//

#include <stdio.h>
using namespace std;

int main(){
    
    return 0;
}

