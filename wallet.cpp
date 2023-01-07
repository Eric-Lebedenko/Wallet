#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double ballance = 0, spending = 0, replenishment = 0;
    int menu;
    cout << "Ваш кошелек: \n";
    cout << "1. Меню кошелька \n";

    bool While = true;
    while (While) {
        cin >> menu;
        switch (menu)
        {
        case 1: //Баланс
            cout << "Ваш баланс: " << ballance << endl;
            cout << "Вы хотите положить деньги на баланс? (Ecли да нажмите (2) Если нет нажмите (5)\n";
            cout << "Вы хотите потратить деньги? (Ecли да нажмите (3) Если нет нажмите (5)\n";
            break;
        case 2: //Пополнения
            cout << "Введи сумму пополнения: \n";
            cin >> replenishment;
            ballance = ballance + replenishment;
            cout << "Вы хотите посмотреть баланс? (Ecли да нажмите (1) Если нет нажмите (5)\n";
            break;
        case 3: //Траты
            cout << "Введи сумму траты: \n";
            cin >> spending;
            if (spending > ballance)
            {
                cout << "Вы не можете потратить столько, т.к у вас на балансе: " << ballance << endl;
                cout << "Вы хотите продолжить действия с кошельком?(Ecли да нажмите (4) Если нет нажмите (5)\n";
            }
            else
            {
                ballance = ballance - spending;
                cout << "Вы хотите посмотреть баланс? (Ecли да нажмите (1) Если нет нажмите (5)\n";
            }
            break;
        case 4:
            cout << "Ваш кошелек: \n";
            cout << "1. Балланс кошелька \n";
            cout << "2. Ваши пополнения \n";
            cout << "3. Ваши траты \n";
            break;
        case 5:
            exit(0);
            break;

        default:
            cout << "ERROR\n";
            break;
        }
    }
    system("pause");
}