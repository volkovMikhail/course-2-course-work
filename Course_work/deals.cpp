#include "deals.h"


void add_deal(list& deals)
{
	string seller, buyer, cost, object, adress, stage, date;
	bool _1or2or3 = false;
	do
	{
		cout << "\n ������� ��������(login)\n >";
		getline(cin, seller, '\n');
		cin.clear();
		system("cls");
	} while (!valid_name(seller));

	do
	{
		cout << "\n ������� ����������(login) ��� '-'\n >";
		getline(cin, buyer, '\n');
		cin.clear();
		system("cls");
	} while (!valid_name(buyer));

	do
	{
		cout << "\n ������� ��������� ��������\n >";
		getline(cin, cost, '\n');
		cin.clear();
		system("cls");
	} while (!valid_numbers(cost));

	do
	{
		cout << "\n ������� ������ �������\n >";
		getline(cin, object, '\n');
		cin.clear();
		system("cls");
	} while (!valid_zeroLen(object));

	do
	{
		cout << "\n ������� ������ �������\n >";
		getline(cin, adress, '\n');
		cin.clear();
		system("cls");
	} while (!valid_zeroLen(adress));

	do
	{
		cout << "\n ������� ���� ������";
		cout << "\n 1. ���������   2. � ��������   3. ���������\n >"; // ������� ����������
		getline(cin, stage, '\n');
		if (stage == "1")
		{
			stage = "���������";
			_1or2or3 = true;
		}
		else if (stage == "2")
		{
			stage = "�_��������";
			_1or2or3 = true;
		}
		else if(stage == "3")
		{
			stage = "���������";
			_1or2or3 = true;
		}

		cin.clear();
		system("cls");
	} while (!_1or2or3);

	do
	{
		cout << "\n ������� ���� �������� ������\n >";
		getline(cin, date, '\n');
		cin.clear();
		system("cls");
	} while (!valid_date(date));

	deals.push_front(seller, buyer, cost, object, adress, stage, date," "," ");

}
