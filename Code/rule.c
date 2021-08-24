//判断胜负的函数，返回值决定不同的胜负类型
int Rule(int a,int b,int c,int d,int e,int f,int g,int h,int i)
{
	if((a==circle&&b==circle&&c==circle)||(d==circle&&e==circle&&f==circle)||(g==circle&&h==circle&&i==circle)||
		(a==circle&&d==circle&&g==circle)||(b==circle&&e==circle&&h==circle)||(c==circle&&f==circle&&i==circle)||
		(a==circle&&e==circle&&i==circle)||(c==circle&&e==circle&&g==circle))return 1;//红方获胜或者玩家获胜
    else if((a==cross&&b==cross&&c==cross)||(d==cross&&e==cross&&f==cross)||(g==cross&&h==cross&&i==cross)||
		(a==cross&&d==cross&&g==cross)||(b==cross&&e==cross&&h==cross)||(c==cross&&f==cross&&i==cross)||
		(a==cross&&e==cross&&i==cross)||(c==cross&&e==cross&&g==cross))return 2;//蓝方获胜或者电脑获胜
	else if(a!=spacebar&&b!=spacebar&&c!=spacebar&&d!=spacebar&&e!=spacebar&&f!=spacebar&&g!=spacebar&&h!=spacebar&&i!=spacebar)return 3;//双方平局
	else return 0;//无胜负并且棋盘未满
}
