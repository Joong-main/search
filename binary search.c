#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int start=0, mid, end, size, * arr,target,index=-1;
	printf("Type size of array: ");
	scanf("%d", &size);
	printf("Target: ");
	scanf("%d", &target);
	
	end = size;
	printf("Type Sorted array: ");
	arr = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\n");
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	}


	printf("\n");

	while (start <= end) {
		mid = (start + end) / 2;
		if (target < arr[mid]) {
			end = mid - 1;
			mid = (start + end) / 2;
		}
		else if (target > arr[mid]) {
			start = mid + 1;
			mid = (start + end) / 2;
		}
		else if (target == arr[mid]) {
			index = mid;
			break;
		}

	}

	printf("%d", index);

	return 0;
}
