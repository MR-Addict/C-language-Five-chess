int Calculation()
{
	int i,x,y,c,d,e,f,k,number1,number2,space1,space2,max_score,score[3][3];
	extern int a[9],pos[3][3];
    score[0][0]=0,score[0][1]=0,score[0][2]=0,score[1][0]=0,score[1][1]=0,score[1][2]=0,score[2][0]=0,score[2][1]=0,score[2][2]=0;
    max_score=0;
	srand((int)time(0));
	i=random(9);//如果电脑先走，第一子走随机数,后面这个数据会被覆盖
	/***************************************************************
	**  下面是整个代码的核心和精髓，也是唯一一个考验算法的部分    **
	**  这里的算法也是可以推广到"五子棋的",用到的方法是"积分法"   **
	**  同时可以计算两步后的结果，从而计算出最优解                **
	**  核心思想如下：                                            **
	****************************************************************
	**  堵死玩家一个死棋子+10，填成自己一个死棋子+0               **
	**  堵死玩家一个活棋子+40，填成自己一个活棋子+70              **
	**  堵死玩家两个棋子+200， 填成自己一个两个棋子+500           **
    ****************************************************************/
	for(x=0;x<3;++x)
		for(y=0;y<3;++y)
			if(pos[x][y]==0)//寻找每一个空格
				for(c=-1;c<=1;c++)
					for(d=-1;d<=1;d++)
						if(!(c==0&&d==0))//排除自己的位置
						{
							number1=0,number2=0,space1=0,space2=0;
							//通过计分求出玩家走棋时当前棋局的最优解
							for(k=1;k<=2;k++)
							{
								if(x+c*k<3&&x+c*k>=0&&y+d*k<3&&y+d*k>=0)
								{
									if(pos[x+c*k][y+d*k]==1)number1++;
									else if(pos[x+c*k][y+d*k]==0){space1++;break;}
									else break;
								}
							}
							if(number1==1)
							{
								if(space1==0)score[x][y]+=10;
								else if(space1==1)score[x][y]+=40;
							}
							if(number1==2)score[x][y]+=200;
							//通过计分求出电脑走棋时当前棋局的最优解
							for(k=1;k<=2;k++)
							{
								if(x+c*k<3&&x+c*k>=0&&y+d*k<3&&y+d*k>=0)
								{
									if(pos[x+c*k][y+d*k]==2)number2++;
									else if(pos[x+c*k][y+d*k]==0){space2++;break;}
									else break;
								}
							}
							if(number2==1)
								if(space2==1)score[x][y]+=70;
						    	if(number2==2)score[x][y]+=500;
						}
	for(e=0;e<3;e++)
		for(f=0;f<3;f++)
			if(score[e][f]>max_score)
			{
				max_score=score[e][f];//合并结果计算当前棋局的最优解，并赋予数组
				i=e*3+f;
			}
	return i;
}
