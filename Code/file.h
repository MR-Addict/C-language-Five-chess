#include <stdio.h>
#include<stdlib.h>//引用该库文件，以使用为伪随机数
#include<time.h>//引用该库文件，以为伪随机数提供"种子"
#define random(x) (rand()%x)//定义带参宏定义，以产生0-8的“真随机数”
#define spacebar 32
#define circle 79
#define cross 88
//包含若干函数
#include "printpattern.c"
#include "rule.c"
#include "head.c"
#include "printmenu.c"
#include "calculation.c"
#include "singlemode.c"
#include "doublemode.c"
#include "body.c"
#include "end.c"
//数组以存储棋盘的状态，count以决定那方先走，result以存储胜负结果
int a[9],pos[3][3],count,result;
