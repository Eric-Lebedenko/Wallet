#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double ballance = 0, spending = 0, replenishment = 0;
    int menu;
    cout << "��� �������: \n";
    cout << "1. ���� �������� \n";

    bool While = true;
    while (While) {
        cin >> menu;
        switch (menu)
        {
        case 1: //������
            cout << "��� ������: " << ballance << endl;
            cout << "�� ������ �������� ������ �� ������? (Ec�� �� ������� (2) ���� ��� ������� (5)\n";
            cout << "�� ������ ��������� ������? (Ec�� �� ������� (3) ���� ��� ������� (5)\n";
            break;
        case 2: //����������
            cout << "����� ����� ����������: \n";
            cin >> replenishment;
            ballance = ballance + replenishment;
            cout << "�� ������ ���������� ������? (Ec�� �� ������� (1) ���� ��� ������� (5)\n";
            break;
        case 3: //�����
            cout << "����� ����� �����: \n";
            cin >> spending;
            if (spending > ballance)
            {
                cout << "�� �� ������ ��������� �������, �.� � ��� �� �������: " << ballance << endl;
                cout << "�� ������ ���������� �������� � ���������?(Ec�� �� ������� (4) ���� ��� ������� (5)\n";
            }
            else
            {
                ballance = ballance - spending;
                cout << "�� ������ ���������� ������? (Ec�� �� ������� (1) ���� ��� ������� (5)\n";
            }
            break;
        case 4:
            cout << "��� �������: \n";
            cout << "1. ������� �������� \n";
            cout << "2. ���� ���������� \n";
            cout << "3. ���� ����� \n";
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