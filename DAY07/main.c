#include <stdio.h>

struct student{
	int num;
	char name[20];
	int kor;
	int eng;
	int math;
	int total;
	double avg;
	char grade;
};

int main(void)
{
	int i;
	struct student list[5];
	double avg;
	struct student *plist[5];
	struct student *temp;

	for(i=0;i<5;i++){
		printf("학번 : ");
		scanf("%d", &list[i].num);
		printf("이름 : ");
		scanf("%s", list[i].name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &list[i].kor, &list[i].eng, &list[i].math);
		list[i].total = list[i].kor + list[i].eng + list[i].math;
		avg = list[i].avg = list[i].total / 3.0;
		if(avg >= 90.0){
			list[i].grade = 'A';
		} else if(avg >= 80.0){
			list[i].grade = 'B';
		} else if(avg >= 70.0){
			list[i].grade = 'C';
		} else {
			list[i].grade = 'F';
		}
	}

	printf("#정렬 전 데이터...\n");
	for(i=0;i<5;i++){
		printf("%5d %5s %5d %5d %5d %5d %5.1f %5c\n", list[i].num, list[i].name,list[i].kor,list[i].eng,list[i].math,list[i].total,list[i].avg,list[i].grade);
	}

	printf("#정렬 후 데이터...\n");
	// 알고리즘 제대로 적용해야함
	// for(i=1;i<5;i++){
	// 	if(list[0].avg < list[i].avg){
	// 		temp = &list[0];
	// 		plist[0] = &list[i];
	// 		plist[i] = temp;
	// 	}
	// }
	for(i=0;i<5;i++){
		printf("%5d %5s %5d %5d %5d %5d %5.1f %5c\n", plist[i] -> num, plist[i] -> name, plist[i] -> kor, plist[i] -> eng, plist[i] -> math, plist[i] -> total, plist[i] -> avg,plist[i] -> grade);
	}

	return 0;
}