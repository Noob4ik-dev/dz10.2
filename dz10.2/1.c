#include <locale.h>
#include <stdio.h>

float area(float R, float r) {
    const float pi = 3.14159f;
    return 0.5f * pi * (R * R - r * r);
}

void draw_box() {
    printf("\nРисунок полукольца:\n");
    printf("    * * *\n");
    printf("  *       *\n");
    printf(" |  * * *  |\n");
    printf(" |  *   *  |\n");
    printf("  *       *\n");
    printf("    * * *\n");
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;

    do {
        printf(
            "\n1. Площадь\n2. Определение\n3. Рисунок фигуры\n0. Выход\nВыбор: ");
        scanf("%d", &choice);

        if (choice == 1) {
            float R, r;
            printf("Введите внешний радиус R и внутренний r: ");
            scanf("%f %f", &R, &r);
            if (R > r) {
                printf("Площадь: %.2f\n", area(R, r));
            }
            else {
                printf("Ошибка\n");
            }
        }
        else if (choice == 2) {
            printf(
                "Полукольцо — это часть кольца, ограниченная дугами двух окружностей "
                "и двумя радиусами (правая половина).\n");
        }
        else if (choice == 3) {
            draw_box();
        }
    } while (choice != 0);

    return 0;
}