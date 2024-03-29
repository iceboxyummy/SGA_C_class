// 15_2d array.cpp

/*
	2託据 壕伸 : 1託据 壕伸聖 据社稽 亜走澗 壕伸
	 - 壕伸聖 据社稽 亜走澗 壕伸聖 陥託据 壕伸戚虞壱 馬澗汽 2託据聖 角嬢辞澗 莫殿澗 暗税 紫遂馬走 省澗陥.
	 - 1託据 壕伸引 旭戚 五乞軒亜 尻紗旋生稽 細嬢赤製

	識情

	 切戟莫 壕伸戚硯 [楳][伸];
	 type name [row][column];

	 int arr[3][5];

	 けけけけけ 3楳 5伸
	 けけしけけ
	 けけけけけ

	 - 楳 : 亜稽匝税 姐呪
	 - 伸 : 室稽匝税 姐呪
	 - し税 是帖 : 1楳 2伸 -> arr[1][2]
*/

#include <stdio.h>

#define MAP_HIGHT 2
#define MAP_WIDTH 3
#define ROW 5
#define COL 3

 // 1 2 3
 // 4 5 6

int arr1[MAP_HIGHT][MAP_WIDTH] = { 1,2,3,4,5,6 };
int arr2[2][3] = { {1,2,3}, {4,5,6} };
int arr3[2][3] = { 1,2,3 }; // 蟹袴走 据社澗 0生稽 段奄鉢
int arr4[][3] = { 1,2,3,4 }; // 楳精 持繰 亜管
int arr5[][3] = { {1,2}, {3,4,5}, {6} }; // 
//int arr6[2][] = {1,2,3,4,5,6}; // error : 伸精 持繰 災亜管

void print_arr();
void print_score();

int main() {

	print_arr();

	int arr7[4][3];

	sizeof(arr7); // 壕伸 穿端税 郊戚闘 滴奄
	sizeof(arr7[0][0]); // 壕伸戚 亜走澗 郊戚闘 滴奄
	sizeof(arr7[0]); // 壕伸税 1楳税 郊戚闘 滴奄
	sizeof(arr7) / sizeof(arr7[0]); // 壕伸戚 亜走澗 楳税 恥 姐呪
	sizeof(arr7) / sizeof(arr7[0][0]); // 壕伸戚 亜走澗 据社税 恥 姐呪
	sizeof(arr7[0]) / sizeof(arr7[0][0]); //馬蟹税 楳戚 亜走澗 据社税 鯵呪(伸)

	print_score();

	return 0;
}

void print_arr() {
	// arr1
	printf("*** arr1 ***\n");
	for (int i = 0; i < MAP_HIGHT; i++)
	{
		for (int j = 0; j < MAP_WIDTH; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// arr2
	printf("*** arr2 ***\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// arr3
	printf("*** arr3 ***\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// arr4
	printf("*** arr4 ***\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr4[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// arr5
	printf("*** arr5 ***\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr5[i][j]);
		}
		printf("\n");
	}
	printf("\n");

}

void print_score() {

	/*
	俳持税 失旋聖 壕伸稽 眼焼 域至馬壱 窒径馬澗 坪球
	ROWS : 尾持腰硲
	COLUMN : 引鯉繊呪( 厩嬢, 慎嬢 , 呪俳
	*/

	// 唖 俳持税 繊呪研 煽舌馬澗 痕呪 score
	int score[ROW][COL] =
	{
		{50,50,00},
		{40,20,30},
		{100,100,100},
		{80,90,85},
		{70,60,95}
	};

	int total_kor, total_eng, total_math; // 引鯉紺 恥繊
	total_kor = total_eng = total_math = 0;
	int student[5] = { 0 };

	for (int i = 0; i < ROW; i++)
	{
		total_kor += score[i][0];
		total_eng += score[i][1];
		total_math += score[i][2];
	}

	printf("\n厩嬢恥繊\t慎嬢恥繊\t呪俳恥繊\n");
	printf("%d\t\t%d\t\t%d\n\n", total_kor, total_eng, total_math);

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			student[i] += score[i][j];
		}
		printf("%d腰属 俳持税 恥繊 : %d\n", i + 1, student[i]);
	}

}

// 引薦稽 刃失馬奄

	/*
	 4寵 3硲猿走 赤澗 焼督闘
      -> 唖据社亜 亜走澗 税耕澗 背雁 寵,硲拭 詞壱赤澗 昔据呪

     1. 唖 寵, 硲拭 紫澗 昔据呪研 脊径閤製.
     2. 唖 寵原陥 恥 昔据呪 窒径
     3. 唖 寵原陥 硲税 昔据呪 窒径
     4. 乞窮 昔据呪 窒径
	*/

