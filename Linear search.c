#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int size, * arr,target,index;
	printf("Type size of array: ");
	scanf("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);
	printf("Type array: ");

	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Type target: ");
	scanf("%d", &target);


	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			index = i;
			break;
		}
	}

	printf("\n");

	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	};
	printf("\n");

	printf("index =%d", index);

	return 0;
}
