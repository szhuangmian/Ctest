//
//  main.c
//  CtestC
//
//  Created by HuangMian on 2017/3/25.
//  Copyright © 2017年 HuangMian. All rights reserved.
//

//#include <stdio.h>
//int main()
//{
//    int height,chair,n,temp,max=0;
//    scanf("%d%d%d",&height,&chair,&n);
//    int i;
//    for(i=0;i<n;i++){
//        scanf("%d",&temp);
//        if(temp <= height + chair){
//            max ++;
//        }
//    }
//    
//    printf("%d\n",max);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int L,W,A[1000][1000],i,j,max=0,sum;
//    int regionL,regionW,regionX,regionY;
//    
//    scanf("%d%d",&L,&W);
//    for(i = 0; i < L;i++){
//        for(j = 0; j < W; j++){
//            
//            scanf("%d",&A[i][j]);
//        }
//    }
//    
//    scanf("%d%d",&regionL,&regionW);
//
//    for(regionX = 0; regionX + regionL <= L;regionX ++){
//        
//        for(regionY = 0;regionY + regionW <= W;regionY++){
//            sum = 0;
//            for( i = regionX; i < regionX + regionL && i < L; i++) {
//                for( j = regionY;j < regionY + regionW && j < W; j++){
//                    sum +=A[i][j];
//                }
//            }
//            if(sum > max){
//                max = sum;
//            }
//        }
//    }
//    printf("%d\n",max);
//
//    return 0;
//}

#include <stdio.h>
char map[4][4];
int best,n;
int CanPut(int row, int col)
/*
 *检测与前行或者与前列是否存在冲突,即原文中的
 *no two blockhouses are on the same horizontal row or vertical column in a map unless there is at least one wall separating them
 *如果bullets cannot run through，则返回1
 *否则bullets can run through，返回0
 */
{
    int i;
    for (i = row - 1; i >= 0; i--)
    {
        if (map[i][col] == 'O') return 0;
        if (map[i][col] == 'X') break;
    }
    for (i = col - 1; i >= 0; i--)
    {
        if (map[row][i] == 'O') return 0;
        if (map[row][i] == 'X') break;
    }
    return 1;
}
void solve(int k,int tot)
/*
 *calculates the maximum number of blockhouses that can be placed in the city in a legal configuration
 *k表示被检测的map单元个数
 *tot表示可以放置blockhouses的个数
 */
{
    int x,y;
    if(k==n*n)//保证整个地图都被检测过
    {
        if(tot>best)
        {
            best=tot;
            return;
        }
    }
    else
    {
        x=k/n; //先逐行进行检测
        y=k%n; //逐列进行检测
        if((map[x][y]=='.') && (CanPut(x,y) ) )//是open space，并且 bullets cannot run through
        {
            map[x][y]='O';//'0'表示已经检测过并且可放置blockhouses，即将tot+1
            solve(k+1,tot+1);//map[x][y]可以放置blockhouses，则从map[(k+1)/n][(k+1)%n]开始继续检测,即逐行进行检测，并且tot+1
            map[x][y]='.';//在恢复堆栈的时候，还原map原来的数据
        }
        solve(k+1,tot);//若map[k/n][k%n]存在bullets can run through，则继续从map[(k+1)/n][(k+1)%n]开始逐行检测
    }
}
int main()
{
    int i,j;
    scanf("%d",&n);
    while(n>0)
    {
        for(i=0;i< n;i++)
        {
            for(j=0;j< n;j++)
            {
                scanf("%1s",&map[i][j]);//输入单个字符并且忽略空白
            } 
        } 
        best=0; 
        solve(0,0); 
        printf("%d\n",best); 
        n=0;//预防scanf失败,reset n
        scanf("%d",&n); 
    } 
    return 0; 
}
