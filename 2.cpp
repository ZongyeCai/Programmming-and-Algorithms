
/*6.某年级的同学集体去公园划船，如果每只船坐10人，那么多出2个座位
如果每只船多坐2人，那么可少租1只船，设计一个算法用蛮力法求该年级的最多人数*/

#include <stdio.h>
void solve()
{
	int x,y;//x表示最大人数;y表示船
	int z;//z表示空余的座位
	
	for(int y=1;y<=100;y++)//让y从0到100枚举，y可以更大，但结果不变
	{
		for(z=0;z<=11;z++)
		{
			if(10*y-2==12(y-1)-z)
			{
			    x=10*y-2;
			}
		}
	}
	printf("%d",x);
	}
int main()
{
	solve();
	
	return 0;
}
