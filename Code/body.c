//游戏的主体部分
void Body()
{
	//游戏提示选择游戏模式
	//互动模式
    char ch;
	extern int a[9],result,count;
	if(printMenu())
	{
		result=Rule(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
	    printPattern(32,32,32,32,32,32,32,32,32);
		count=0;
		//其他情况下一直保持在下棋状态
	    while(result==0)
		{
		    count++;
			doubleMode();
		    result=Rule(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
		}
	}
	//人机模式
	else
	{
	    printf("************************\n");
	    printf("*       是否先走:      *\n");
	    printf("*       是:Y,否:N      *\n");
	    printf("************************\n");
	    printf("请选择:");
	    fflush(stdin);//清空输入缓存，以免读取回车
        scanf("%c",&ch);
	    fflush(stdin);
	    //使用while循环来排除其他输入情况
        while(ch!='Y'&&ch!='y'&&ch!='N'&&ch!='n')
		{
            printf("输入错误，请重新选择:");
	        fflush(stdin);//同理
            scanf("%c",&ch);
		}
		if(ch=='Y'||ch=='y')count=0;
		else count=1;
	    printf("************************\n");
	    printf("*      游戏开始!!      *\n");
	    printf("************************\n");
		result=Rule(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8])+3;
		printPattern(32,32,32,32,32,32,32,32,32);
		while(result==3)
		{
		    count++;
			singleMode();
		    result=Rule(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8])+3;
		}
	}
}
