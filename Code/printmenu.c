//打印选择菜单的函数
int printMenu()
{
    char ch;
	printf("************************\n");
	printf("*    请选择游戏模式:   *\n");
	printf("*   人机赛:S,友谊赛:D  *\n");
	printf("************************\n");
	printf("请选择:");
	fflush(stdin);//清空输入缓存，以免读取回车
    scanf("%c",&ch);
	fflush(stdin);
	//使用while循环来排除其他输入情况
    while(ch!='S'&&ch!='s'&&ch!='D'&&ch!='d')
    {
        printf("输入错误，请重新选择:");
	    fflush(stdin);//同理
        scanf("%c",&ch);
    }
    if(ch=='S'||ch=='s')return 0;
    else return 1;
}
