//游戏结束
int End()
{
	char ch;
	extern int result;
	printf("************************\n");
	printf("*       游戏结束!!     *\n");
	//通过返回的参数判断最终结果
	switch(result)
	{
	case 1:printf("*    恭喜,红方获胜!!   *\n");break;
	case 2:printf("*    恭喜,蓝方获胜!!   *\n");break;
	case 3:printf("*  棋盘已满,双方平局!! *\n");break;
	case 4:printf("*     恭喜你获胜啦!!   *\n");break;
	case 5:printf("*     真遗憾你输了!!   *\n");break;
	case 6:printf("*  棋盘已满,双方平局!! *\n");break;
	}
	//提示是否再来一局
	printf("************************\n");
	printf("************************\n");
	printf("*     是否再来一局:    *\n");
	printf("*      是:Y ,否:N      *\n");
	printf("************************\n");
	printf("请输入:");
	fflush(stdin);
    scanf("%c",&ch);
	fflush(stdin);
    while(ch!='Y'&&ch!='y'&&ch!='N'&&ch!='n')
    {
        printf("选择错误，请重新选择:");
	    fflush(stdin);
        scanf("%c",&ch);
    }
    if(ch=='Y'||ch=='y')return 1;
	printf("************************\n");
	printf("*        谢谢!!        *\n");
	printf("*      下次再见!!      *\n");
	printf("************************\n");
	return 0;
}
