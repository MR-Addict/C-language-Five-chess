//互动模式
void doubleMode()
{
	int i;
	extern int a[9],count;
    if(count%2==1)
	{
		printf("红方请输入1-9以落子：");
        scanf("%d",&i);
		while(a[i-1]==circle||a[i-1]==cross||i<1||i>9)
		{
			if(i<1||i>9)printf("落子位置错误,红方请重新输入:");
			else printf("该位置已落子,红方请重新输入: ");
			scanf("%d",&i);
		}
		a[i-1]=circle;//赋值为O
		//结束一次输入就打印一次棋盘
		printPattern(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
	}
	else 
	{
		printf("蓝方请输入1-9以落子：");
        scanf("%d",&i);
		while(a[i-1]==cross||a[i-1]==circle||i<1||i>9)
		{
			if(i<1||i>9)printf("落子位置错误,蓝方请重新输入:");
			else printf("该位置已落子,蓝方请重新输入: ");
			scanf("%d",&i);
		}
		a[i-1]=cross;//赋值为X
	    printPattern(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
	}
}
