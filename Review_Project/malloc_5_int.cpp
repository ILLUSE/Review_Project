#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *pi = (int *)malloc(5 * sizeof(int));

	if (pi == NULL) 
	{
		printf("Memory allocation failed\n");
		exit(1);
	} 

	//*pi[0]이 아닌 pi[0]으로 해야한다.
	//*pi[0]에는 pi[0]의 주소가 들어가게 된다.
	//포인터 배열에는 주소값이 들어가게 된다.
	//*pi[0] = 1004 /  주소:1004 pi[0] = 100
	//*pi[1] = 1005 /  주소:1005 pi[1] = 200
	//*pi[2] = 1006 /  주소:1006 pi[2] = 300
	//*pi[3] = 1007 /  주소:1007 pi[3] = 400
	//*pi[4] = 1008 /  주소:1008 pi[4] = 500

	pi[0] = 100;
	pi[1] = 200;
	pi[2] = 300;
	pi[3] = 400;
	pi[4] = 500;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(pi + 1));
	}

	free(pi);

	return 0;
}