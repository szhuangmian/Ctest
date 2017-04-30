//
//  main.cpp
//  CtestC
//
//  Created by HuangMian on 2017/3/27.
//  Copyright © 2017年 HuangMian. All rights reserved.
//

//#include <stdio.h>
//#include <iostream>
//using namespace std;

#include <stdio.h>
#include <string.h>

//void print_a(int *a,int n);
//void swap(int *x,int *y);
//int kcase = 0;
//
//void perm(int *a,int n,int cur){
//   
//    if(cur == n -1){
//        kcase++;
//        printf("Case:%-4d ",kcase);
//        print_a(a, n);
//        return;
//    }
//    for(int i = cur; i < n; i++){
//            swap(&a[i], &a[cur]);
//            perm(a,n,cur+1);
//            swap(&a[i], &a[cur]);
//    }
//    
//}
//
//void swap(int *x,int *y){
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//void print_a(int *a,int n){
//    
//    for(int i= 0;i < n;i++){
//        printf("%-4d",a[i]);
//    }
//    printf("\n");
//}
//
//int main(){
//    
//    int n = 5;
//    int a[n];
//    
//    for(int i = 1;i<=n; i++){
//        a[i-1] = i;
//    }
//    //print_a(a, n);
//    kcase = 0;
//    perm(a, n, 0);
//    
//    return 0;
//}


//void print(int a[], int n ,int i){
//    cout<<i <<":";
//    for(int j= 0; j<8; j++){
//        cout<<a[j] <<" ";
//    }
//    cout<<endl;
//}
//
//
//void InsertSort(int a[], int n)
//{
//    for(int i= 1; i<n; i++){
//        if(a[i] < a[i-1]){               //若第i个元素大于i-1元素，直接插入。小于的话，移动有序表后插入
//            int j= i-1;
//            int x = a[i];        //复制为哨兵，即存储待排序元素
//            a[i] = a[i-1];           //先后移一个元素
//            while(x < a[j]){  //查找在有序表的插入位置
//                a[j+1] = a[j];
//                j--;         //元素后移
//            }
//            a[j+1] = x;      //插入到正确位置
//        }
//        print(a,n,i);           //打印每趟排序的结果
//    }
//    
//}
//
//int main(){
//    int a[8] = {3,1,5,7,2,4,9,6};
//    InsertSort(a,8);
//    print(a,8,8);
//}
//
//#include<stdio.h>
//
//int sum[5000010];   //为防越界
//
//int main()
//{
//    int i, j;
//    for (i = 0; i <= 10000; i++)
//        sum[i] = 1;  //1是所有数的真因数所以全部置1
//    
//    for (i = 2; i + i <= 10000; i++)  //预处理，预处理是logN（调和级数）*N。
//        //@litaoye：调和级数1/2 + 1/3 + 1/4......的和近似为ln(n)，
//        //因此O(n *(1/2 + 1/3 + 1/4......)) = O(n * ln(n)) = O(N*log(N))。
//    {
//        //5000000以下最大的真因数是不超过它的一半的
//        j = i + i;  //因为真因数，所以不能算本身，所以从它的2倍开始
//        while (j <= 10000)
//        {
//            //将所有i的倍数的位置上加i
//            sum[j] += i;
//            j += i;
//        }
//    }
//    
//    for (i = 220; i <= 10000; i++)   //扫描，O（N）。
//    {
//        // 一次遍历，因为知道最小是220和284因此从220开始
//        if (sum[i] > i && sum[i] <= 10000 && sum[sum[i]] == i)
//        {
//            //去重，不越界，满足亲和
//            printf("%d %d\n",i,sum[i]);
//        }
//    }
//    return 0;
//}
#define MAXN 100
int a[MAXN];
int counts = 0;

void comb(int m,int k,int K){
    int i,j;
    printf("111 %d%d\n",m,k);
    for(i=m;i>=k;i--){
        a[k-1] = i;
        if(k>1)
            comb(i-1,k-1,K);
        else{
            counts++;
//            for(j=K-1;j>=0;j--)
//                printf("%4d",a[j]);
//            printf("\n");
        }
    }
    printf("222 %d%d\n",m,k);

}


//int main(){
//    int m,k;
//    scanf("%d%d",&m,&k);
//    comb(m, k,k);
//    printf("counts %d\n",counts);
//    return 0;
//}

//不知对不对
int zheban(int a[],int s,int e,int k){
    
    int center = (s + e) / 2;
    if(a[center] < k && center + 1 <=e){
        return  zheban(a, center + 1, e,k);
    }else if(a[center] > k && s <=center-1 && s>=0){
        return  zheban(a, s, center-1,k);
    }else if(a[center] == k){
        return center ;
    }
    
    return -1;
}






//#include "Cpp.hpp"
//
//int ac[MAXNN];//,2,345,6,51,42,56};
//int b[MAXNN];
//
//
//
//int main(){
//    initA(ac,MAXNN);
//    printA(ac, MAXNN);
//    //zjInsert(ac, MAXNN);
//    //biInsert(ac,0,MAXNN - 1);
//
//    //printA(ac, MAXNN);
//    //partition(ac, 0, MAXNN-1);
//    //printA(ac, MAXNN);
//    //quickSort(ac,0,MAXNN-1);
//    //selectSort(ac, MAXNN);
//    //mergeSort(ac, b, 0, MAXNN - 1);
//    heapSort(ac, MAXNN);
//    printA(ac, MAXNN);
//
//    return 0;
//}

//
//#define N 5
//int map[5][5]={
//    {2,0,8,0,2},
//    {0,0,0,0,0},
//    {0,3,2,0,0},
//    {0,0,0,0,0},
//    {2,0,8,0,2}};
//int sumMax=0;
//int p1x=0;
//int p1y=0;
//int p2x=0;
//int p2y=0;
//int curMax=0;
//
//void dfs( int index){
//    if( index == 2*N-2){
//        if( curMax>sumMax)
//            sumMax = curMax;
//        return;
//    }
//    
//    if( !(p1x==0 && p1y==0) && !(p2x==N-1 && p2y==N-1))
//    {
//        if( p1x>= p2x && p1y >= p2y )
//            return;
//    }
//    
//    //right right
//    if( p1x+1<N && p2x+1<N ){
//        p1x++;p2x++;
//        int sum = map[p1x][p1y]+map[p2x][p2y];
//        curMax += sum;
//        dfs(index+1);
//        curMax -= sum;
//        p1x--;p2x--;
//    }
//    
//    //down down
//    if( p1y+1<N && p2y+1<N ){
//        p1y++;p2y++;
//        int sum = map[p1x][p1y]+map[p2x][p2y];
//        curMax += sum;
//        dfs(index+1);
//        curMax -= sum;
//        p1y--;p2y--;
//    }
//    
//    //rd
//    if( p1x+1<N && p2y+1<N ) {
//        p1x++;p2y++;
//        int sum = map[p1x][p1y]+map[p2x][p2y];
//        curMax += sum;
//        dfs(index+1);
//        curMax -= sum;
//        p1x--;p2y--;
//    }
//    
//    //dr
//    if( p1y+1<N && p2x+1<N ) {
//        p1y++;p2x++;
//        int sum = map[p1x][p1y]+map[p2x][p2y];
//        curMax += sum;
//        dfs(index+1);
//        curMax -= sum;
//        p1y--;p2x--;
//    }
//}
//
//int main(){
//    curMax = map[0][0];
//    dfs(0);
//    cout <<sumMax-map[N-1][N-1]<<endl;
//    return 0;
//}
//
//

//#include <stdio.h>
//#include <iostream>
//
//struct BSTreeNode
//{
//    int m_nValue; // value of node
//    BSTreeNode *m_pLeft; // left child of node
//    BSTreeNode *m_pRight; // right child of node
//};
//
//
//typedef struct BSTreeNode DoubleList;;
//DoubleList * pHead;
//DoubleList * pListIndex;
//
//void convertToDoubleList(BSTreeNode * pCurrent);
//// 创建二元查找树
//void addBSTreeNode(BSTreeNode * & pCurrent, int value)
//{
//    if (NULL == pCurrent)
//    {
//        BSTreeNode * pBSTree = new BSTreeNode();
//        pBSTree->m_pLeft = NULL;
//        pBSTree->m_pRight = NULL;
//        pBSTree->m_nValue = value;
//        pCurrent = pBSTree;
//        
//    }
//    else
//    {
//        if ((pCurrent->m_nValue) > value)
//        {
//            addBSTreeNode(pCurrent->m_pLeft, value);
//        }
//        else if ((pCurrent->m_nValue) < value)
//        {
//            addBSTreeNode(pCurrent->m_pRight, value);
//        }
//        else
//        {
//            //cout<<"重复加入节点"<<endl;
//        }
//    }
//}
//
//// 遍历二元查找树  中序
//void ergodicBSTree(BSTreeNode * pCurrent)
//{
//    if (NULL == pCurrent)
//    {
//        return;
//    }
//    if (NULL != pCurrent->m_pLeft)
//    {
//        ergodicBSTree(pCurrent->m_pLeft);
//    }
//    
//  
//    //cout<<pCurrent->m_nValue<<endl;//中序遍历
//    
//    // 节点接到链表尾部
//    //convertToDoubleList(pCurrent);
//    pCurrent->m_pLeft = pListIndex;//把convertToDoubleList直接写在这里更容易理解
//    if (NULL != pListIndex)
//    {
//        pListIndex->m_pRight = pCurrent;
//    }
//    else
//    {
//        pHead = pCurrent;
//    }
//    pListIndex = pCurrent;
//    //cout<<pCurrent->m_nValue<<endl;
//
//    // 右子树为空
//    if (NULL != pCurrent->m_pRight)
//    {
//        ergodicBSTree(pCurrent->m_pRight);
//    }
//}
//
//// 二叉树转换成list
//void  convertToDoubleList(BSTreeNode * pCurrent)
//{
//    pCurrent->m_pLeft = pListIndex;
//    if (NULL != pListIndex)
//    {
//        pListIndex->m_pRight = pCurrent;
//    }
//    else
//    {
//        pHead = pCurrent;
//    }
//    pListIndex = pCurrent;
//    cout<<pCurrent->m_nValue<<endl;
//   
//}
//
//int main()
//{
//    BSTreeNode * pRoot = NULL;
//    pListIndex = NULL;
//    pHead = NULL;
//    addBSTreeNode(pRoot, 10);//之前的写法不是平衡的二叉树，虽然可以按中序按顺序排列
//    addBSTreeNode(pRoot, 6);
//    addBSTreeNode(pRoot, 14);
//    addBSTreeNode(pRoot, 4);
//    addBSTreeNode(pRoot, 8);
//    addBSTreeNode(pRoot, 12);
//    addBSTreeNode(pRoot, 16);
//    ergodicBSTree(pRoot);
//    
//    BSTreeNode *p = pHead;
//    while (p!=pListIndex) {
//        cout<<p->m_nValue;
//        cout<<" ";
//        p=p->m_pRight;
//    }
//    cout<<p->m_nValue;
//    cout<<" ";
//    
//    cout<<"\n";
//
//    p = pListIndex;
//    while (p!=pHead) {
//        cout<<p->m_nValue;
//        cout<<" ";
//        p=p->m_pLeft;
//    }
//    cout<<p->m_nValue;
//    cout<<" ";
//
//
//    return 0;
//}


//#include<iostream>
//using namespace std;
//
//#define N 1000
//int main()
//{
//    int num,value,max=0;
//    int val[N];
//    int firstNum=0,lastNum=0;
//    cout<<"输入数的个数：";
//    cin>>num;
//    for(int i=0;i<num;i++)
//    {
//        cin>>val[i];
//    }
//    value=0;
//    for(int i=0;i<num;i++)
//    {
//        value=value+val[i];
//        if(value>max)
//        {
//            max=value;
//            lastNum=i;
//        }
//        if(value<0)
//        {
//            value=0;
//            firstNum=i+1;
//        }
//    }
//    if(max==0)
//    {
//        max=val[0];
//        firstNum=0;
//        lastNum=0;
//        for(int j=0;j<num;j++)
//        {
//            if(max<val[j])
//            {
//                max=val[j];
//                firstNum=j;
//                lastNum=j;
//            }
//        }
//    }
//    cout<<"最大子数组是：";
//    for(int i=firstNum;i<=lastNum;i++)
//    {
//        cout<<val[i]<<" ";
//    }
//    cout<<endl;
//    cout<<"最大子数组的和为：";
//    cout<<max<<endl;
//}



//#include <stdio.h>
//#include <string.h>
//
//#define OneSideMax 6 //一边硬币的最大数
//#define CoinMax 12  //最大的硬币个数
//#define StatusLen 4 //up，down，even的最大长度
//
//char left1[OneSideMax+1]; //左边硬币
//char right1[OneSideMax+1];
//char status[StatusLen+1];
//int coin[CoinMax+1]; //对应硬币的状态
//
//void MarkNormal(const char *str,int len)
//{
//    int i;
//    for(i=0;i<len;i++)
//        coin[str[i]-'A']=0;
//}
//
//void MarkLight(const char *str,int len)
//{
//    int i;
//    for(i=0;i<len;i++)
//    {
//        if(2==coin[str[i]-'A'])  //硬币状态不确定
//            coin[str[i]-'A']=-1;
//        if(1==coin[str[i]-'A']) //硬币以前可能比较重，现在比较轻，所以只能硬币是正常的
//            coin[str[i]-'A']=0;
//    }
//}
//
//void MarkHeavy(const char *str,int len)
//{
//    int i;
//    for(i=0;i<len;i++)
//    {
//        if(2==coin[str[i]-'A'])
//            coin[str[i]-'A']=1;
//        if(-1==coin[str[i]-'A'])
//            coin[str[i]-'A']=0;
//    }
//}
//
//void MarkRemainNormal(const char *str1,const char *str2,int len)
//{
//    int i;
//    int temp[CoinMax+1];
//    for(i=0;i<len;i++)
//    {
//        temp[str1[i]-'A']=1;
//        temp[str2[i]-'A']=1;
//    }
//    for(i=0;i<CoinMax;i++)
//    {
//        if(1!=temp[i])
//            coin[i]=0;
//    }
//}
//
//int main(){
//    int t;
//    int len;
//    int i;
//    scanf("%d",&t);
//    while(t--)
//    {
//        for(i=0;i<CoinMax;i++)
//            coin[i]=2;
//        for(i=0;i<3;i++)
//        {
//            memset(left1,'\0',sizeof(left1));
//            memset(right1,'\0',sizeof(right1));
//            memset(status,'\0',sizeof(status));
//            scanf("%s%s%s",left1,right1,status);
//            len = (int)strlen(left1);//左边的等于右边
//            if('e'==status[0])
//            {
//                MarkNormal(left1,len);
//                MarkNormal(right1,len);
//            }
//            else if('u'==status[0])  //右边轻
//            {
//                MarkLight(right1,len);
//                MarkHeavy(left1,len);
//                MarkRemainNormal(left1,right1,len);
//            }
//            else                     //右边重
//            {
//                MarkLight(left1,len);
//                MarkHeavy(right1,len);
//                MarkRemainNormal(left1,right1,len);
//            }  
//        }  
//        for(i=0;i<CoinMax;i++)  
//            if(coin[i]!=0)  
//                break;  
//        if(-1==coin[i])  
//        {  
//            printf("%c is the counterfeit coin and it is light.\n",i+'A');  
//        }  
//        else  
//        {  
//            printf("%c is the counterfeit coin and it is heavy.\n",i+'A');  
//        }  
//    }  
//    
// return 0;
//}
//
//


#define MAXCOINS 12
#define ONESIDE  6
#define STATUS 4

int coins[MAXCOINS];
char leftCoins[ONESIDE+1];
char rightCoins[ONESIDE+1];
char status[STATUS+1];


void markNormal(char str[],int len){
    for(int i=0;i<len;i++){
        coins[str[i]-'A'] = 0;
    }
}

void markHeavy(char str[],int len){
    for(int i=0;i<len;i++){
        if(coins[str[i]-'A']==2){
            coins[str[i]-'A'] = 1;
        }else if(coins[str[i]-'A']==-1){
            coins[str[i]-'A'] = 0;

        }
    }

}

void markLight(char str[],int len){
    for(int i=0;i<len;i++){
        if(coins[str[i]-'A']==2){
            coins[str[i]-'A'] = -1;
        }else if(coins[str[i]-'A']==1){
            coins[str[i]-'A'] = 0;
            
        }
    }

}

void markRemainNormal(char str1[],char str2[],int len){
    int temp[MAXCOINS];
    int i;
    for(i=0;i<MAXCOINS;i++){
        temp[i]=0;
    }
    for(i=0;i<len;i++){
        temp[str1[i] - 'A'] = 1;
        temp[str2[i] - 'A'] = 1;
    }
    for(i=0;i<MAXCOINS;i++){
        if(temp[i]!=1){
            coins[i] = 0;
        }
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while (t--) {
        int i;
        for (i=0; i<MAXCOINS; i++) {
            coins[i] = 2;
        }
        
        for(i=0;i<3;i++){
            memset(leftCoins, '\0', sizeof(leftCoins));
            memset(rightCoins, '\0', sizeof(rightCoins));
            memset(status,'\0',sizeof(status));
            scanf("%s%s%s",leftCoins,rightCoins,status);
            int len = (int)strlen(leftCoins);
            if(status[0]=='e'){
                markNormal(leftCoins, len);
                markNormal(rightCoins, len);
            }else if (status[0]=='u'){
                markHeavy(leftCoins, len);
                markLight(rightCoins, len);
                markRemainNormal(leftCoins, rightCoins,len);
            }else {
                markLight(leftCoins, len);
                markHeavy(rightCoins, len);
                markRemainNormal(leftCoins, rightCoins,len);
            }
        }
        
        for(i=0;i<MAXCOINS;i++){
            if(coins[i]!=0){
                break;
            }
        }
      
        if(coins[i]==-1){
            printf("%c is the counterfeit coin and it is light.\n",i + 'A');
        }else{
            printf("%c is the counterfeit coin and it is heavy.\n",i + 'A');

        }
        
    }
    
    
    return 0;
}

