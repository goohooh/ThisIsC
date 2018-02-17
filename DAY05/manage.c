#include <stdio.h>

int main(void){

	char store[4][20] = {"관악점", "강남점", "명동점", "대림점"};
	int data[4][7] = {
		{70, 45, 100, 92, 150, 81},
		{88, 92, 77, 30, 52, 55},
		{50, 90, 88, 75, 77, 49},
		{120, 92, 80, 150, 130, 105},
	};
	int tot[4]={0,};

	int i,j;


	char *store_list[4];
	int *data_list[4];
	char *store_temp;
	int *data_temp;

	for(i=0;i<4;i++){
		store_list[i] = store[i];
		data_list[i] = data[i];
	}

	for(i=0;i<4;i++){
		for(j=0;j<6;j++){
			tot[i] += data[i][j];
		}
		data[i][j] = (int)(tot[i]/6.0 + 0.5);
	}

	for(i=0; i<3;i++){
		for(j=1+i;j<4;j++){
			if(data[i][6]<data[j][6]){
				data_temp = data_list[i];
				data_list[i] = data_list[j];
				data_list[j] = data_temp;
				store_temp = store_list[i];
				store_list[i] = store_list[j];
				store_list[j] = store_temp;
			}
		}
	}

	printf("%s\n", "매출별 출력..");
	for(i=0;i<4;i++){
		printf("%s", store_list[i]);
		for(j=0;j<6;j++){
			printf("%5d", data_list[i][j]);
		}
		printf("\n");
	}

	printf("%s\n", "지점별 출력..");
	for(i=0;i<4;i++){
		printf("%s", store[i]);
		for(j=0;j<6;j++){
			printf("%5d", data[i][j]);
		}
		printf("\n");
	}

	return 0;
}