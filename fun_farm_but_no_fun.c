#include <stdio.h>

#define INVENTORY_SIZE 10
#define DAY_HOURS 24

#define ID_EMPTY 0  // Задаю уникальные номера для предметов
#define ID_WOOD 1
#define ID_STONE 2
#define ID_SEEDS 3
#define ID_HOE 4
#define ID_APPLE 5
#define ID_SHOVEL 6
#define ID_IRON 7
#define ID_ROPE 8
#define ID_COIN 9


int safe_scan(int* value) { // Проверяю на введение числа, в противном случае возвращаю ошибку и обратно к введению значения.
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

	if (!safe_scan(&work_hours)) break;
	if (work_hours <= 0) {
		printf("Ошибка: Нельзя работать 0 или меньше часов. Введите заново число.\n");
		break;
	}

	current_hour += work_hours

	if (current_hour >= DAY_HOURS) { // Если текущий час прошёл сквозь количество часов в день тоооо 
			current_day += current_hour / DAY_HOURS; // Добавляю к текущему дню результат деления текущего часа от часов в день
			current_hour %= DAY_HOURS; // Пишу текущее время через остаток от деления 
	}
	printf("Вы успешно поработали в течение %d ч.!\n", work_hours);
	break
}
case 3:

	printf("\n--- СОДЕРЖИМОЕ ИНВЕНТАРЯ ---\n");
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		printf("Слот %d: [%d]", i, inventory[i]); // Вывожу номер слота и ID предмета

		switch (inventory[i]) { // Соотнёс ID предмета и напечатал его название для игрока

		case ID_WOOD:     printf("(Древесина)"); break;

		case ID_STONE:    printf("(Камень)"); break;

		case ID_SEEDS:    printf("(Семена)"); break;

		case ID_HOE:      printf("(Тяпка)"); break;

		case ID_APPLE:    printf("(Яблоко)"); break;

		case ID_SHOVEL:    printf("(Лопата)"); break;

		case ID_IRON:     printf("(Железо)"); break;

		case ID_ROPE:     printf("(Веревка)"); break;

		case ID_COIN:     printf("(Монета)"); break;

		default:          printf("(Пусто)"); break;

		}
		printf("\n");
	}
	break;