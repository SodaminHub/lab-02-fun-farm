#include <stdio.h>

#define INVENTORY_SIZE 10
#define DAY_HOURS 24


int safe_print(int* value) { // Проверяю на введение числа, в противном случае возвращаю ошибку и обратно к введению значения.
	if (scanf("%d", value) != 1) {
		printf("Ошибка: Введено не число!\n");
		while (getchar() != '\n'); 
		return 0;
	}
	return 1;
}

int main()
{
	int current_day = 1;
	int current_hour = 8

switch (userAction) {
case 0:
    printf("Выход из игры. Возвращайтесь ещё!");
    break;
case 1:
	printf("Текущее время : % d день % d час”, day, hours");
	break;
case 2: {
	int work_hours;
	printf("Сколько часов вы хотите потратить на работу? ");

	if (!safe_print(&work_hours)) break;
	if (work_hours <= 0) {
		printf("Ошибка: Нельзя работать 0 или меньше часов. Введите заново число.\n");
		break;
	}

	current_hour += work_hours

	if (current_hour >= DAY_HOURS) { // Проверяю перешёл ли текущий час через количество часов в день
			current_day += current_hour / DAY_HOURS; // Добавляю к текущему дню деление текущего часа от часов в день
			current_hour %= DAY_HOURS; // Пишу текущее время через остаток от деления 
	}
	printf("Вы успешно поработали в течение %d ч.!\n", work_hours);
	break
}