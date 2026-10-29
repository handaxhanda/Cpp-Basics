#include <stdio.h>

int main(int argc, char** argv) {
	//水の温度(この部分を色々買えてみる)
	double water_temp = 10.0;
	printf("水の温度:%lf\n", water_temp);
	//温度により状態を表示
	if (water_temp > 100.0) {
		//100度より高ければ気体
		printf("気体\n");
	}
	else if (water_temp > 0) {
		//100度以下で0度より高ければ液体
		printf("液体\n");
	}
	else {
		//0度以下なら個体
		printf("個体\n");
	}
	return 0;
}