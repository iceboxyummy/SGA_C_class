// 13_array.cpp

#include <stdio.h>
#define ARR_SIZE 10

void Array();

int main() {
	/*
		배열(Array) : 동일 자료형 변수의 집합
		 - 배열에 속한 변수를 원소라고 부른다.
		 - 인덱스[ ]를 사용하여 각 원소를 구분하며 항상 0부토 시작한다.
		 - 배열의 원소는 연속된 메모리에 할당된다.
		 - 많은 양으 데이터를 다룰떄 사용한다.
	*/

	/*
		배열 선언 방법 : 자료형 배열명[원소 갯수] = {초깃값, ... }
		 - 원소 갯수는 양수인 정수형 상수만 사용 가능
		 - 원소 갯수보다 초깃값이 적을 경우, 나머지 원소는 0으로 초기화
		 - 초기값을 제공하는 경우, 원소 개수는 생략 가능
	*/

	int arr[3]; // int형 3개 선언, 모든 원소에 쓰레기 값이 들어있음
	int arr1[3] = {}; //모든 원소가 0으로 초기화, {0, 0, 0}
	int arr2[5] = { 1, 2, 3 }; // 값을 정해준 원소 외의 값 =  0, {1, 2, 3, 0, 0}
	/* 
	int size = 10;
	int arr3[size]; 변수로는 배열의 크기를 정해줄 수 없다. ==> 컴파일 타임때 크기가 확정되어야한다.
	*/
	int arr4[ARR_SIZE]; // 매크로로 사이즈 정해 줄 수 있다.
	int arr5[] = { 1, 2, 3 }; // 초깃값이 3개 이므로 배열의 크기는 3

	/*
		배열의 원소에 접근하기
		 - 배열명[원소 번호]
		 - 무조건 0번부터 시작한다.
		 - 범위를 벗어나는 값으로 접근시 예기치 않은 오류가 날 수 있다.
	*/

	char arr6[5] = { 'A', 'B', 'C' };
	int a = 1;

	/*
	범위를 벗어난 모르는 데이터에 접근시 예기치 못한 문제가 발생할 수 있다.
	printf("%c, %c\n", arr6[0], arr6[1]);
	printf("%d\n", arr5[3]);
	arr5[3] = 12;
	*/

	Array();

	return 0;
}

void Array()
{
	/*
		원소 5개를 가지는 정수형 배열을 생성한뒤
		각 원소가 '원소 번호'의 2배수를 저장하는 함수
		
		0, 2 ,4, 6, 8

	*/
	
	int arr[5];

	for (int i = 0; i < 5 ; i++)
	{
		arr[i] = i * 2;
	}
	
	for (int i = 0; i < 5 ; i++)
	{
		printf("%d, ", arr[i]);
	}
}
