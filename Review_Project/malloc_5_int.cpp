#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *pi = (int *)malloc(5 * sizeof(int));

	if (pi == NULL) 
	{
		printf("Memory allocation failed\n");
		exit(1);
	} 

	//*pi[0]�� �ƴ� pi[0]���� �ؾ��Ѵ�.
	//*pi[0]���� pi[0]�� �ּҰ� ���� �ȴ�.
	//������ �迭���� �ּҰ��� ���� �ȴ�.
	//*pi[0] = 1004 /  �ּ�:1004 pi[0] = 100
	//*pi[1] = 1005 /  �ּ�:1005 pi[1] = 200
	//*pi[2] = 1006 /  �ּ�:1006 pi[2] = 300
	//*pi[3] = 1007 /  �ּ�:1007 pi[3] = 400
	//*pi[4] = 1008 /  �ּ�:1008 pi[4] = 500

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