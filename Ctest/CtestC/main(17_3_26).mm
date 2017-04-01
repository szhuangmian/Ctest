//
//  main.c
//  CtestC
//
//  Created by HuangMian on 2017/3/20.
//  Copyright © 2017年 HuangMian. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h> /*for memset and memcpy*/

//#include "graphics.h"

//int main(int argc, const char * argv[]) {
    // insert code here...
//    printf("Hello, World!\n");
//    int a,b,t;
//    scanf("%d%d",&a,&b);
//    t = a;
//    a = b;
//    b = t;
//    printf("%d %d\n",a,b);
    
//    int n;
//    scanf("%d",&n);
//    int bai = n / 100;
//    int sh = n / 10 % 10;
//    int g = n % 10;
//    //printf("%d%d%d\n",g,sh,bai);
//    int rn = g * 100 + sh * 10 + bai;
//    printf("%3d\n",rn);
//    return 0;
    
//    int h = 0;int canD = 0;
//    for(int i=101;i<=200;i++){
//        canD = 0;
//        for(int j=2;j<sqrt(i)+1;j++){
//            if(i%j==0){
//                canD = 1;
//                break;
//            }
//        }
//        if(!canD){
//            printf("%-4d",i);
//            h++;
//            if(h%10==0){
//                printf("\n");
//                h = 0;
//            }
//        }
//    }
//    printf("\n");

//    int h = 0;
//    for(int i=100;i<1000;i++){
//        int bai = i / 100;
//        int shi = i / 10 % 10;
//        int ge = i % 10;
//        if(i == pow(bai, 3) + pow(shi, 3) + pow(ge, 3)){
//            printf("%-5d",i);
//            h++;
//            if(h % 10 == 0){
//                printf("\n");
//                h = 0;
//            }
//        }
//    }
//    if(h % 10 != 0){
//        printf("\n");
//    }
    
//    int n;
//    scanf("%d",&n);
//    for(int i=2;i<=n;i++){
//        while (n % i == 0) {
//            n = n / i ;
//            printf("%-4d",i);
//        }
//        
//    }
//    //printf("%d",n);
//
//    printf("\n");
    
//    int a,b,num1,num2,temp;
//     scanf("%d%d",&num1,&num2);
//    if(num1 < num2) {
//        temp=num1;
//        num1=num2;
//        num2=temp;
//    }
//    a=num1;b=num2;
//    while(b!=0){/*利用辗除法，直到b为0为止*/
//        
//         temp=a%b;
//          a=b;
//          b=temp;
//        }
//    printf("%-4d%-4d\n",a,num1*num2/a);
    
//    int x0,y0,y1,x1,driver,mode,i;
//    driver=VGA;mode=VGAHI;
//    initgraph(&driver,&mode,"");
//    setbkcolor(YELLOW);
//    x0=263;y0=263;y1=275;x1=275;
//    for(i=0;i<=18;i++)
//        　　{
//            　　 setcolor(1);
//            　　 rectangle(x0,y0,x1,y1);
//            　　 x0=x0-5;
//            　　 y0=y0-5;
//            　　 x1=x1+5;
//            　　 y1=y1+5;
//            　　}
//    settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
//    outtextxy(150,40,"How beautiful it is!");
//    line(130,60,480,60);
//    setcolor(2);
//    circle(269,269,137);
    
//    int a,b,c,d;
//    scanf("%x",&a);
//    printf("%d %o %x\n",a,a,a);
//
//    b=a>>4;
//    c=~(0xff<<4);
//    d=b&c;
//    printf("%x\n%x\n",a,d);
    
//    int a,b;
//    a=234;
//    b=~a;
//    printf("\40: The a's 1 complement(decimal) is %d %x\n",b,b);
//    a=~a;
//    printf("\40: The a's 1 complement(hexidecimal) is %x \n",a);
//    printf("~0 %x",~1 << 4);
//    
//    float a[3][3],sum=0;
//    int i,j;
//    printf("please input rectangle element:\n");
//    for(i=0;i<3;i++)
//        for(j=0;j<3;j++)
//            scanf("%f",&a[i][j]);
//    
//    for(i=0;i<3;i++){
//        for(j=0;j<3;j++)
//            printf("%-6.2f",a[i][j]);
//        printf("\n");
//    }
//    for(i=0;i<3;i++)
//        sum=sum+a[i][i];
//    
//    printf("duijiaoxian he is %6.2f\n",sum);
//    sum = 0;
//    j=2;
//    for(i=0;i<3;i++){
//        sum = sum + a[i][j-i];
//    }
//    printf("duijiaoxian he is %6.2f\n",sum);
//    
//    
//    
//
//    return 0;
//}
//i am a student --->-->  student a am i
#include<iostream>
using namespace std;

/*翻转函数--->利用交换*/
void words_reverse(char str[],int left,int right)
{
    while(left < right)
    {
        str[left] += str[right];
        str[right] = str[left] - str[right];
        str[left] -= str[right];
        left++;
        right--;
    }
}

//int main()
//{
//    char str[] = "student a am i";
//    /*找到数组的（最左边）和（最右边）后整体翻转*/
//    int left = 0;
//    int right = 0;
//    while(str[right] != '\0')
//    {
//        right++;
//    }
//    words_reverse(str,left,right-1);
//    
//    /*找到各个单词的（最左边）和（最右边），将各个单词分别翻转*/
//    int lowflag = 0; //状态标志位：要反转的字符串的左边是否找到
//    int highflag = 0;//状态标志位：要反转的字符串的右边是否找到
//    int i = 0;
//    while(str[i] != '\0')
//    {
//        /*寻找单词的最左边即低位*/
//        if(str[i] != ' ' && lowflag == 0)//在没有找到单词最左边的前提下，如果发现一个非空格字符表示最左边找到
//        {
//            lowflag = 1;
//            left = i;
//        }
//        
//        /*if(str[i] == ' ' && highflag == 0)//char str[] = "i am a student   "情况不适宜(最后面有空格)
//         {
//         highflag = 1;
//         right = i-1;
//         }*/
//        
//        /*寻找单词的最右边即低位*/
//        if(lowflag == 1 && str[i] == ' ' && highflag == 0)//char str[] = "student a am i";情况不适宜（第一个单词没翻转）
//        {
//            highflag = 1;//在没有找到单词最右边的前提下，如果发现一个空格字符，则空格前一个是单词最右边字符
//            right = i-1;
//        }
//        /*最左边（低位）和最右边（高位）都找到了之后完成翻转*/
//        if(lowflag == 1 && highflag == 1)
//        {
//            words_reverse(str,left,right);
//            lowflag  = 0;
//            highflag = 0;
//        }
//        i++;
//    }
//    cout<<str<<endl;
//    return 0;
//}

// 1：构造二叉查找树；
// 2：中序遍历二叉查找树，因此结点按从小到大顺序访问，假设之前访问过的结点已经调整为一个双向链表，那么
//       只需要将当前结点连接至双向链表的最后一个结点即可，访问完后，双向链表也就调整完了
#include <iostream>
using namespace std;
struct BSTreeNode
{
    int m_nValue; // value of node
    BSTreeNode *m_pLeft; // left child of node
    BSTreeNode *m_pRight; // right child of node
};

void addBSTreeNode(BSTreeNode *&pCurrent,int value);
void inOrderBSTree(BSTreeNode* pBSTree);
void convertToDoubleList(BSTreeNode* pCurrent);

BSTreeNode *pHead=NULL;//指向循环队列头结点
BSTreeNode *pIndex=NULL;//指向前一个结点

//int main()
//{
//    BSTreeNode *pRoot=NULL;
//    addBSTreeNode(pRoot,10);
//    addBSTreeNode(pRoot,6);
//    addBSTreeNode(pRoot,14);
//    addBSTreeNode(pRoot,4);
//    addBSTreeNode(pRoot,8);
//    addBSTreeNode(pRoot,12);
//    addBSTreeNode(pRoot,16);
//    inOrderBSTree(pRoot);
//    return 0;
//}
/************************************************************************/
/* 建立二叉排序树                                                               */
void addBSTreeNode(BSTreeNode *&pCurrent,int value)//在这个函数中会要改变指针值，一定要记得使用引用传递
{
    if (pCurrent==NULL)
    {
        BSTreeNode* pBSTree=new BSTreeNode();
        pBSTree->m_nValue=value;
        pBSTree->m_pLeft=NULL;
        pBSTree->m_pRight=NULL;
        pCurrent=pBSTree;
    }
    else if (pCurrent->m_nValue<value)
    {
        addBSTreeNode(pCurrent->m_pRight,value);
    }
    else if (pCurrent->m_nValue>value)
    {
        addBSTreeNode(pCurrent->m_pLeft,value);
    }
    else
    {
        cout<<"node repeated"<<endl;
    }
    
}
/************************************************************************/

/************************************************************************/
/* 中序遍历二叉树，同时调整结点指针                                                                     */
void inOrderBSTree(BSTreeNode* pBSTree)
{
    
    if (NULL==pBSTree)
    {
        return;
    }
    if (NULL!=pBSTree->m_pLeft)
    {
        inOrderBSTree(pBSTree->m_pLeft);
    }
    
    //  if (NULL!=pBSTree)
    //  {
    //      cout<<pBSTree->m_nValue;
    //  }
    convertToDoubleList(pBSTree);
    
    if (NULL!=pBSTree->m_pRight)
    {
        inOrderBSTree(pBSTree->m_pRight);
    }
    
}
/************************************************************************/

/************************************************************************/
/* 调整结点指针                                                                   */
void convertToDoubleList(BSTreeNode* pCurrent)
{
    pCurrent->m_pLeft=pIndex;//使当前结点的左指针指向双向链表中最后一个结点
    if (NULL==pIndex)//若最后一个元素不存在，此时双向链表尚未建立，因此将当前结点设为双向链表头结点
    {
        pHead=pCurrent;
    }
    else//使双向链表中最后一个结点的右指针指向当前结点
    {
        pIndex->m_pRight=pCurrent;
    }
    
    pIndex=pCurrent;//将当前结点设为双向链表中最后一个结点
    
    cout<<pCurrent->m_nValue<<" ";
    
}

int findmax(int a,int b){
    return  a > b ? a : b;
}

int findmin(int a,int b){
    return a > b ? b : a;
}

//int main(){
//    int n;
//    scanf("%d",&n);
//    for(int i=2;i<=n;i++){
//        
//        
//        while (n % i == 0) {
//            n = n / i;
//            printf("%4d",i);
//            if(n == 1){
//                break;
//            }
//        }
//    }
  
//    int n;
//    scanf("%d",&n);
//    
//    int total = 2 * n - 1;
//    for (int i = 1; i <= n; i++) {
//        int white = i - 1;
//        int star = 2 * (n - i + 1) - 1;
//        
//        for(int j = 1;j <= total;j++){
//            if(j <= white){
//                printf("%s"," ");
//            }else if(j <= white + star){
//                printf("%s","*");
//            }else{
//                printf("%s"," ");
//            }
//        }
//        printf("\n");
//        
//    }
//    int a,b,c,kcase = 0;
//    int min = 1000000,max = -1000000;
//    float avergae,sum;
//    while (scanf("%d",&a) == 1) {
//        max = findmax(max, a);
//        min = findmin(min, a);
//        scanf("%d",&b);
//        max = findmax(max, b);
//        min = findmin(min, b);
//        scanf("%d",&c);
//        max = findmax(max, c);
//        min = findmin(min,c);
//        sum = a + b + c;
//        avergae = sum * 1.0 / 3;
//        kcase ++;
//        printf("Case %d: %d %d %.3f %.3f\n",kcase,max,min,sum,avergae);
//        min = 1000000;
//        max = -1000000;
//        sum = 0;
//    }
//    int f3 = 4,f2 = 2,f1 = 1;
//    int fn = 0,fn_1 = f3,fn_2 = f2,fn_3 = f1;
//    int n;
//    scanf("%d",&n);
//    if(n <= 3){
//        if(n == 1){
//            printf("%d\n",f1);
//        }else if (n == 2){
//            printf("%d\n",f2);
//        }else if(n == 3){
//            printf("%d\n",f3);
//        }
//    }else{
//        for (int i = 1; i <= n - 3; i++) {
//            fn = fn_1 + fn_2 + fn_3;
//            fn_3 = fn_2;
//            fn_2 = fn_1;
//            fn_1 = fn;
//        }
//    }
//    printf("%d\n",fn);
    
    
    
    
    
//    return 0;
//}



#define X_SIZE 5
#define Y_SIZE 5

/////////////////////////////////////////深度////////////////////////////////////////////////////
int dir[][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int matrix[X_SIZE][Y_SIZE] =
   {0,1,1,1,1,
    0,0,0,0,0,
    0,0,1,1,0,
    1,0,0,0,0,
    0,1,1,0,0};
int used[X_SIZE][Y_SIZE] = {0};

// 属于排序树
void dfs(int x,int y)
{
    if(x == X_SIZE - 1 && y == Y_SIZE - 1)
    {
        //used[x][y] = 1;
        matrix[x][y] = 8;
        for(int i=0; i<X_SIZE; i++){
            for(int j=0; j<Y_SIZE; j++){
                if(used[i][j]==1){
                    printf("# ");
                }else{
                    printf("%d %s",matrix[i][j],"");
 
                }
            }
            printf("\n");
        }
        printf("--------------\n");
        matrix[x][y] = 0;

        return ;
    }
  
        if(matrix[x][y] == 0 //&& used[x][y] == 0
           && x >=0 && x < X_SIZE
           && y >=0 && y < Y_SIZE ){
            
            // 这一条件是为了避免当 matrix[X_SIZE-1][Y_SIZE-1] = 0 时输出两次！是否还有其他解决方法呢？知道的同学请回复
//            if(x+dir[k][0] == X_SIZE-1 && y+dir[k][1] == Y_SIZE){
//                
//            }
//            else
//            {
            
            for(int k=0; k<4; k++)
            {
                //used[x][y] = 1;
                matrix[x][y] = 8;
            
            
                dfs(x+dir[k][0],y+dir[k][1]);
                matrix[x][y] = 0;
                //used[x][y] = 0;
//            }
        }
    }
}

/////////////////////////////////////////深度////////////////////////////////////////////////////


/////////////////////////////////////////广度////////////////////////////////////////////////////

#define QUEUE_LENGTH 10000
#define CHECK_RET(ret,info) \
if((ret) < 0) {printf("%s\n",info);continue;}

typedef struct Point
{
    int x;
    int y;
    struct Point* pre;  // 保存路径中的上一个节点
}Point;
typedef struct Queue
{
    int head;
    int tail;
    Point path[QUEUE_LENGTH];
}Queue;

// 队列的函数被放到后面
void queue_initial(Queue *que);
int queue_empty(Queue * que);
int queue_full(Queue * que);
int queue_push(Queue * que,Point point);
int queue_top(Queue * que,Point *point);
int queue_pop(Queue * que,Point *point);
void queue_test(Queue * que);

// 递归地输出路径
void print_path(Point *point)
{
    if(point->pre == NULL)
        return;
    else
    {
        print_path(point->pre);
        printf("x:%d y:%d\n",point->x,point->y);
    }
    
}

void bfs(int x,int y,Queue * que)
{
    if(x >=0 && x < X_SIZE && y >=0 && y < Y_SIZE && used[x][y] == 0 && matrix[x][y] == 0)
    {
        
        Point point;
        point.x = x;
        point.y = y;
        point.pre = NULL;
        used[x][y] = 1;
        queue_push(que,point);
    }
    
    int path_index = 0;
    while(!queue_empty(que))
    {
        Point point2;
        queue_pop(que,&point2);
        if(point2.x == X_SIZE-1 || point2.y == Y_SIZE-1)
        {
            //printf("x:%d, y:%d\n",point2.x,point2.y);
            print_path(&point2);
            printf("====================\n");
            continue;
        }
        for(int k=0; k<4; k++)
        {
            int new_x = point2.x+dir[k][0];
            int new_y = point2.y+dir[k][1];
            if( new_x >=0 && new_x < X_SIZE
               && new_y >=0 && new_y < Y_SIZE
               && matrix[new_x][new_y] == 0 && used[new_x][new_y] == 0 )
            {
                
                Point point3;
                point3.x = new_x;
                point3.y = new_y;
                
                Point * save_point = (Point * )malloc(sizeof(Point));
                memcpy(save_point,&point2,sizeof(Point));
                point3.pre = save_point;
                
                used[new_x][new_y] = 1; // 只有一次机会成为扩展机会
                queue_push(que,point3);
            }
        }
    }
}

/////////////////////////////////////////广度////////////////////////////////////////////////////

//int main()
//{
//    //Queue queue;
    //queue_initial(&queue);
    //queue_test(&queue);
//    for(int i=0;i<X_SIZE;i++){
//        for(int j=0;j<Y_SIZE;j++){
//            printf("%d ",matrix[i][j]);
//        }
//        printf("\n");
//    }
//    printf("--------------\n");
//    dfs(0,0);
//    
//    printf("ee--------------ee\n");
//    printf("ee--------------ee\n");
//
//    for(int i=0; i<X_SIZE; i++){
//        for(int j=0; j<Y_SIZE; j++){
//        
//            printf("%d %s",matrix[i][j],"");
//                
//        }
//        printf("\n");
//    }
//    printf("--------------\n");
    //bfs(0,0,&queue);
//    int a,b;
//    scanf("%d%d",&a,&b);
//    printf("%d\n",a+b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a,b;
//    scanf("%d%d",&a,&b);
//    printf("%d\n",a+b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int height,chair,n,temp,max=0;
//    scanf("%d%d%d",&height,&chair,&n);
//    
//    for(int i=0;i<n;i++){
//        scanf("%d",&temp);
//        if(temp <= height + chair){
//            max ++;
//        }
//    }
//
//    printf("%d\n",max);
//    return 0;
//}


#include <iostream>
using namespace std;


int a[10][10],maxx,cunt,n;


int find(int x,int y) // .为0，碉堡为1，墙为2 判断是否能放
{
    for(int i=y;i>=1;i--) //4个方向 ！每行每列的进行判断
    {
        if(a[x][i]==1 )
            return 0;
        if(a[x][i]==2 )
            break;
    }
    for(int i=y;i<=n;i++)
    {
        if(a[x][i]==1 )
            return 0;
        if(a[x][i]==2 )
            break;
    }
    for(int i=x;i>=1;i--)
    {
        if(a[i][y]==1)
            return 0;
        if(a[i][y]==2)
            break;
    }
    for(int i=x;i<=n;i++)
    {
        if(a[i][y]==1)
            return 0;
        if(a[i][y]==2)
            return 1;
    }
    return 1;
}
void dfs()
{
    if(cunt>maxx)
        maxx=cunt;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(!a[i][j] && find(i,j))
            {
                a[i][j]=1;
                cunt++;
                dfs();
                a[i][j]=0;
                cunt--;
                
                
                
            }
}
//int main()
//{
//    char str[10];
//    int num=0,num1,b[10];
//    while(cin>>n &&n)
//    {
//        maxx=0;
//        cunt=0;
//        for(int i=1;i<=n;i++)
//        {
//            cin>>str;
//            for(int j=0;j<n;j++)
//                a[i][j+1]=(str[j]=='X'?2:0);
//        }
//        dfs();
//        b[num++]=maxx;
//        
//        
//    }
//    for(num1=0;num1<num;num1++)
//        cout<<b[num1]<<endl;
//}
#include <stdio.h>
#include <math.h>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

const int size=1000;  //每幅图片的pair上限
int width;  //Map的宽
int total=0;  //像素点总个数

typedef class OutMapPix
{
public:
    int pos;    //OutMap中每个像素点的顺序位置，pos从1开始
    int code;   //OutMap中每个像素点对应InMap的编码
}Pix;

int InMapPair[size][2];  //InMapPair[][0]为像素值，InMapPair[][1]为InMapPair[][0]连续出现的个数
Pix OutMap[size*8];    //每个pix都依赖其周围的8个点编码

int cmp(const void* a,const void* b);  //快排比较规则
int GetValue(int pos);  //返回第pos个像素点的像素值
int GetCode(int pos);   //返回第pos个像素点的编码

int main(int k)
{
    while(cin>>width && width)
    {
        int pairv,pairt;
        k=total=0;
        while(cin>>pairv>>pairt && pairt)
        {
            InMapPair[k][0]=pairv;
            InMapPair[k++][1]=pairt;
            total+=pairt;
        }
        int PairNum=k;  //pair的个数
        
        cout<<width<<endl;
        
        int pos=1;  //当前处理的像素点的位置
        k=0; //OutMap[]指针
        for(int p=0;p<=PairNum;p++)
        {
            int row=(pos-1)/width;  //得到pos在二维图对应的坐标
            int col=(pos-1)%width;
            
            for(int i=row-1;i<=row+1;i++)        //枚举(row,col)周围及其自身共9个点(x,y)
                for(int j=col-1;j<=col+1;j++)
                {
                    int tpos=i*width+j;  //得到(x,y)的顺序位置
                    
                    if(i<0 || j<0 || j>=width || tpos>=total)
                        continue;
                    
                    OutMap[k].pos=tpos+1;
                    OutMap[k++].code=GetCode(tpos+1);  //对发生变化的像素点的附近8个点编码
                }
            
            pos+=InMapPair[p][1];  //跳跃，确定下一个像素发生变化的点的位置
        }
        
        qsort(OutMap,k,sizeof(Pix),cmp);  //对OutMap根据顺序位置
        
        /*OutPut*/
        
        Pix temp=OutMap[0];
        for(int i=0;i<k;i++)
        {
            if(temp.code==OutMap[i].code)
                continue;
            cout<<temp.code<<' '<<OutMap[i].pos-temp.pos<<endl;
            temp=OutMap[i];
        }
        cout<<temp.code<<' '<<total-temp.pos+1<<endl;
        cout<<"0 0"<<endl;
        
    }
    cout<<0<<endl;
    
    return 0;
}


/*快排比较规则*/
int cmp(const void* a,const void* b)
{
    Pix* x=(Pix*)a;
    Pix* y=(Pix*)b;
    return x->pos - y->pos;
}

/*返回第pos个像素点的像素值*/
int GetValue(int pos)
{
    int i=0,p=0;
    while(p<pos)
        p+=InMapPair[i++][1];
    
    return InMapPair[i-1][0];
}

/*返回第pos个像素点的编码*/
int GetCode(int pos)
{
    int code=GetValue(pos);
    int MaxAbs=0;
    
    int row=(pos-1)/width;
    int col=(pos-1)%width;
    
    for(int i=row-1;i<=row+1;i++)
        for(int j=col-1;j<=col+1;j++)
        {
            int tpos=i*width+j;
            
            if(i<0 || j<0 || j>=width || tpos>=total || tpos==pos-1)  //tpos==pos-1为中心的像素点，即当前待编码的点
                continue;
            
            int tcode=GetValue(tpos+1);
            
            if(MaxAbs<abs(tcode-code))   //注意取绝对值
                MaxAbs=abs(tcode-code);  
        }  
    
    return MaxAbs;  
}  


//int main(){
//    long  p,e,i,d;
//    long  tripleDay = 0;
//    int k,index = 0;
//    const int lcm=21252;//23,28,33的最小公倍数
//
//    while (scanf("%ld%ld%ld%ld",&p,&e,&i,&d)==4 && p!=-1 && e!=-1 && i!=-1 && d!=-1) {
//        index++;
//        tripleDay = 0;
//        k = 0;
//        
//        long firstP = p % 23;
//        long firstE = e % 28;
//        long firstI = i % 33;
//  
//        for(k=0;;k++){
//            
//            tripleDay = firstI + 33 * k;
//            if(tripleDay % 23 == firstP && tripleDay % 28 == firstE && tripleDay > d){
//                break;
//            }
//        }
//        if(tripleDay - d > lcm){
//            tripleDay = (tripleDay - d) % lcm + d;
//        }
//        tripleDay -=d;
//        printf("Case %d: the next triple peak occurs in %ld days.\n",index,tripleDay);
//        
//    }
//    
//    return 0;
//}

//float caculateR(double area){
//    float pi =  acos(-1.0);
//    float r = sqrt(area * 2.0 / pi);
//    return r;
//}
//int main(){
//    double X,Y,area = 0.0,r = 0.0;
//    int n = 0,i =0,year = 0;
//    scanf("%d",&n);
//    while (i < n && scanf("%lf%lf",&X,&Y) == 2) {
//        i++;
//        while (1) {
//            year ++;
//            area += 50.0;
//            r = caculateR(area);
//            if(pow(X, 2) + pow(Y, 2) - r * r < 0){
//                break;
//            }
//        }
//        printf("Property %d: This property will begin eroding in year %d.\n",i,year);
//        year = 0;
//        area = 0;
//    }
//    printf("END OF OUTPUT.\n");
//    return 0;
//}



//int main(){
//    double balances,average,sum = 0.0;
//    int n = 0;
//    while (scanf("%lf",&balances) == 1) {
//        n ++;
//        sum += balances;
//        if(n==12){
//            average = sum / (n * 1.0);
//            printf("$%.2lf\n",average);
//            n = 0;
//            sum = 0.0;
//        }
//    }
//    
//    return 0;
//}
//int main(){
//    double over,sum=0.0;
//    int i;
//    while (scanf("%lf",&over)==1 && over != 0.00) {
//        if(over >5.20)continue;
//        sum = 0.0;
//        for(i=1;i<1000;i++){
//            sum += 1.0 / ((i+1)*1.0);
//            if(sum >= over){
//                break;
//            }
//        }
//        printf("%d card(s)\n",i);
//    }
//    return 0;
//}

/////////////////////////////////////////队列////////////////////////////////////////////////////
void queue_initial(Queue *que)
{
    que->head = que->tail = 0;
    memset(que->path,0,sizeof(que->path));
    que->path->pre = NULL;
}

int queue_empty(Queue * que)
{
    return que->head == que->tail;
}

int queue_full(Queue * que)
{
    return (que->tail+1)%QUEUE_LENGTH == que->head;
}

int queue_push(Queue * que,Point point)
{
    if(queue_full(que))
        return -1;
    que->path[(que->tail++)%QUEUE_LENGTH] = point;
    return 0;
}

int queue_top(Queue * que,Point *point)
{
    if(queue_empty(que))
        return -1;
    *point = que->path[que->head];
    return 0;
}

int queue_pop(Queue * que,Point *point)
{
    if(queue_empty(que))
        return -1;
    *point = que->path[(que->head++)%QUEUE_LENGTH];
    return 0;
}

void queue_test(Queue * que)
{
    int i,j;
    i=j=0;
    while(1)
    {
        int choice;
        Point point;
        printf("%s","1 for push,2 for pop,3 for top,4 for exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                point.x = i++;
                point.y = j++;
                point.pre = NULL;
                CHECK_RET(queue_push(que,point),"full");
                break;
            case 2:
                CHECK_RET(queue_pop(que,&point),"empty");
                printf("x:%d y:%d\n",point.x,point.y);
                break;
            case 3:
                CHECK_RET(queue_top(que,&point),"empty");
                printf("x:%d y:%d\n",point.x,point.y);
                break;
            case 4:
                goto L;
                break;
            default:
                break;
        }
    }
L:
    ;
}

