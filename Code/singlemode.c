//人机模式
void singleMode()
{
    int i;
	extern int a[9],count,pos[3][3];
	if(count%2==1)
	{
		printf("玩家请输入1-9以落子：");
        scanf("%d",&i);
		//while循环来考虑所有情况，这里全局变量的优势就体现出来了
		while(a[i-1]==circle||a[i-1]==cross||i<1||i>9)
		{
			if(i<1||i>9)printf("落子位置错误,玩家请重新输入:");
			else printf("该位置已落子,玩家请重新输入: ");
			scanf("%d",&i);
		}
		a[i-1]=circle,pos[(i-i%3)/3][i%3-1]=1;
		printPattern(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
	}
	else 
	{
		i=Calculation();
		a[i]=cross,pos[(i-i%3)/3][i%3]=2;//需要一番变换
	    printPattern(a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
	}
}
