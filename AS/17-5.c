#include <stdio.h>

struct vision {
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int main() {
	struct vision robot;
	printf("시력입력 : ");
	scanf("%lf %lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐시력 : %.1lf %.1lf", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot) {
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}