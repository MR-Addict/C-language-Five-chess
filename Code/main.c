#include "file.h"
void main()
{
	int i, j;
	Head();
	while (1)
	{
		//如果重新开始，就必须为数组重新赋值，因为主函数未结束，数组的值不释放，count同理
		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
				pos[i][j] = spacebar;
		for (i = 0; i < 9; i++)
			a[i] = spacebar;
		count = 0;
		Body();
		if (End(result))
			continue;
		else
			break;
	}
}
