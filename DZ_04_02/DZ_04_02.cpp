#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    //    Написать программу, реализующую процедуры заказа и
    //    расчета его суммы в мини — пиццерии.В меню пиццерии
    //    предусмотрено 4 вида пиццы и три вида напитков.
    //    Пользователю выводится меню(вначале пиццы, потом
    //    напитки), содержащее код и название.Пользователь вводит
    //    код желаемого продукта, после чего вводит количество единиц
    //    данного продукта.
    //    В пиццерии предусмотрены два вида скидок :
    //    ■■ если общая сумма заказа более 50$, то размер скидки со -
    //    ставляет 20 % от суммы заказа;
    //    ■■каждая пятая пицца — в подарок;
    //    ■■для напитков с ценой более 2$, если количество в зака -
    //    зе более трех, то скидка 15 % (только на напитки, а не на
    //    весь заказ).
    //    Вывести пользователю «чек» для оплаты в виде : название —
    //    количество — цена.Итого к оплате.


    /*int pizza_num_user, pizza = 1, pizza_cost, pizza_nums = 0, pizza_present = 0;            я слегка переменил условия и добавил мириады выбора,
    int drink_num_user, drink = 1, drink_cost, drink_nums = 0, drink_num_skidka = 0;        то есть пользователь может выбрать более одного вида пиццы и напитка.

    cout << "\t Добро пожаловать в мини-пицерию!\n\n";

    cout << "----Меню----\n" <<
        "||Пиццы||\n" <<
        "1.Пицца с ананасами (код - 1) | Цена - 12$\n" <<
        "2.Пицца с изобилием сыра (код - 2) | Цена - 10$\n" <<
        "3.Пицца с грибами (код - 3) | Цена - 12$\n" <<
        "4.Пепперони (код - 4) | Цена - 14$\n\n";

    cout << "Введите желаемый продукт(код) и количество (чтобы выйти из меню заказа, введите код 0 и количество ноль): \n";

    while (pizza != 0) {
        cout << "Код пиццы - "; cin >> pizza;
        cout << "Кол-во пиццы - "; cin >> pizza_num_user;
        pizza_present = pizza_num_user / 5;
        switch (pizza) {

        case (1):
            pizza_cost = (pizza_num_user - pizza_present) *12;
            break;

        case (2):
            pizza_cost = (pizza_num_user - pizza_present) * 10;
            break;

        case (3):
            pizza_cost = (pizza_num_user - pizza_present) * 12;
            break;

        case (4):
            
            pizza_cost = (pizza_num_user - pizza_present) * 14;
            break;

        case (0):
            cout << "Заказ на пиццы сделан\n\n";
        }

        pizza_nums += pizza_num_user;
    }

    cout << "||Напитки||\n" <<
        "1.Шато Марго 1787 (код - 01) | Цена - 225000$\n" <<
        "1.Морс (код - 01) | Цена - 1$\n" <<
        "1.Вода (код - 01) | Цена - 0.20$\n\n";

    cout << "Введите желаемый продукт(код) и количество (чтобы выйти из меню заказа, введите код 0): \n";

    while (drink != 0) {
        cout << "Код напитка - "; cin >> drink;
        cout << "Кол-во напитка - "; cin >> drink_num_user;
        switch (drink) {

        case (1):
            drink_cost = drink_num_user * 225000;
            drink_num_skidka++;
            break;

        case (2):
            drink_cost = drink_num_user * 1;
            break;

        case (3):
            drink_cost = drink_num_user * 0.20;
            break;

        case (0):
            cout << "Заказ напитков сделан\n\n";
        }
        drink_nums += drink_num_user;
    }

    if (drink_num_skidka > 3)
        drink_cost *= 0.85;


    int total_cost = drink_cost + pizza_cost;
    
    if (total_cost > 50)
        total_cost *= 0.8;

    cout << "Конечная сумма с учётом всех акций и скидок составит: " << total_cost << " $";*/
    

//  Зарплата менеджера составляет 200$ + процент от продаж,
//  продажи до 500$ — 3 %, от 500 до 1000 — 5 %, свыше 1000 —
//  8 % .Пользователь вводит с клавиатуры уровень продаж
//  для трех менеджеров.Определить их зарплату, определить
//  лучшего менеджера, начислить ему премию 200$, вывести
//  итоги на экран.
//  Примечание: уровень продаж у всех трех менеджеров
//  разный.

int manager1_salary = 200, manager2_salary = 200, manager3_salary = 200;
int manager1_sale, manager2_sale, manager3_sale;

cout << "Введите уровень продаж первого менеджера: "; cin >> manager1_sale;
cout << "Введите уровень продаж второго менеджера: "; cin >> manager2_sale;
cout << "Введите уровень продаж третьего менеджера: "; cin >> manager3_sale;

if (manager1_sale < 500)
    manager1_salary = manager1_salary+ manager1_sale * 0.97;
else if (manager1_sale > 500 && manager1_sale <= 1000)
    manager1_salary = manager1_salary+ manager1_sale * 0.95;
else if (manager1_sale > 1000)
    manager1_salary = manager1_salary+ manager1_sale * 0.92;

if (manager2_sale < 500)
    manager2_salary = manager2_salary + manager2_sale * 0.97;
else if (manager2_sale > 500 && manager2_sale <= 1000)
    manager2_salary = manager2_salary + manager2_sale * 0.95;
else if (manager2_sale > 1000)
    manager2_salary = manager2_salary+manager2_sale * 0.92;

if (manager3_sale < 500)
    manager3_salary = manager3_salary+manager3_sale * 0.97;
else if (manager3_sale > 500 && manager3_sale <= 1000)
    manager3_salary = manager3_salary+manager3_sale * 0.95;
else if (manager3_sale > 1000)
    manager3_salary = manager3_salary+manager3_sale * 0.92;

if (manager1_sale > manager2_sale && manager1_sale > manager3_sale) {
    cout << "Первый менеджер лучший!\n";  
    manager1_salary + 200;
}
else if (manager2_sale > manager1_sale && manager2_sale > manager3_sale) {
    cout << "Второй менеджер лучший!\n";
    manager2_salary + 200;
    }
else if (manager3_sale > manager2_sale && manager3_sale > manager1_sale) {
    cout << "Третий менеджер лучший!\n";
    manager3_salary + 200;
}
cout << "Запралата первого менеджера - " << manager1_salary << endl;
cout << "Запралата второгоо менеджера - " << manager1_salary << endl;
cout << "Запралата третьего менеджера - " << manager1_salary << endl;
}


