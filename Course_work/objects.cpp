#include "objects.h"
void register_obj(list& obj,string NAME)
{
	string obj_name, adress, cost,
		type, rooms, levels;
	bool unique;
	string* data = new string[9];

	do
	{
		unique = true;
		cout << "\n ������� �������� ������� (0 - �����)\n >";
		getline(cin, obj_name, '\n');
		cin.clear();
		system("cls");
		for (int i = 0; i < obj.getsize(); i++)
		{
			data = obj[i];
			if (data[0] == obj_name)
			{
				unique = false;
				cout << " ����� ��� ������� ��� ����";
			}
		}

	} while (!valid_zeroLen(obj_name) && !(obj_name == "0") || !unique);

	if (obj_name == "0")
	{
		return;
	}

	do
	{
		cout << "\n ������� ������ �������\n >";
		getline(cin, adress, '\n');
		cin.clear();
		system("cls");
	} while (!valid_zeroLen(adress));

	do
	{
		cout << "\n ������� ��������� (� �������)\n >";
		getline(cin, cost, '\n');
		cin.clear();
		system("cls");
	} while (!valid_numbers(cost));

	do
	{
		cout << "\n ������� ��� �������\n >";
		getline(cin, type, '\n');
		cin.clear();
		system("cls");
	} while (!valid_name(type));

	do
	{
		cout << "\n ������� ���������� ������\n >";
		getline(cin, rooms, '\n');
		cin.clear();
		system("cls");
	} while (!valid_numbers(rooms));

	do
	{
		cout << "\n ������� ���������� ������\n >";
		getline(cin, levels, '\n');
		cin.clear();
		system("cls");
	} while (!valid_zeroLen(levels));

	obj.push_back(obj_name, adress, cost, type, NAME, rooms, levels, "-", "-");

	obj.fileout_data("data\\objects.txt");
}

void edit_obj(list& obj, int currentobj)
{
	string temp;
	string x, changed;
	string* data = new string[9];
	do
	{
		system("cls");
		data = obj[currentobj];
		cout << "      ����� ��������������";
		cout << "\n\n     " << data[0];
		cout << "\n 1. �����    : " << data[1];
		cout << "\n 2. ���������: " << data[2];
		cout << "\n 3. ���      : " << data[3];
		cout << "\n 4. �������� : " << data[4];
		cout << "\n 5. ������   : " << data[5];
		cout << "\n 6. ������   : " << data[6];
		cout << "\n\n ����� ����� ��������? (0 - �����)\n >";
		getline(cin, x);
		cin.clear();
		switch (atoi(x.c_str()))
		{
		case 0:
			return;
		case 1:
			system("cls");

			do
			{
				cout << "\n ������� ������ (0 - �����)\n >";
				getline(cin, changed);
				cin.clear();
				if (changed == "0")
				{
					break;
				}
				system("CLS");
			} while (!valid_zeroLen(changed) && !(changed == "0"));

			if (changed == "0")
			{
				break;
			}

			obj.insert(data[0], changed, data[2], data[3], data[4], data[5], data[6], data[7], data[8], currentobj);
			obj.removeAt(currentobj + 1);

			break;
		case 2:
			system("cls");

			do
			{
				cout << "\n ������� ��������� (0 - �����)\n >";
				getline(cin, changed);
				cin.clear();
				if (changed == "0")
				{
					break;
				}
				system("CLS");
			} while (!valid_numbers(changed) && !(changed == "0"));

			if (changed == "0")
			{
				break;
			}

			obj.insert(data[0], data[1], changed, data[3], data[4], data[5], data[6], data[7], data[8], currentobj);
			obj.removeAt(currentobj + 1);

			break;
		case 3:
			system("cls");

			do
			{
				cout << "\n ������� ��� ������������ (0 - �����)\n >";
				getline(cin, changed);
				cin.clear();
				if (changed == "0")
				{
					break;
				}
				system("CLS");
			} while (!valid_name(changed) && !(changed == "0"));

			if (changed == "0")
			{
				break;
			}

			obj.insert(data[0], data[1], data[2], changed, data[4], data[5], data[6], data[7], data[8], currentobj);
			obj.removeAt(currentobj + 1);

			break;
		case 4:
			system("cls");

			cout << " \n ��������� �������� ������ :)\n\n";
			system("pause");

			break;
		case 5:
			system("cls");

			do
			{
				cout << "\n ������� ���������� ������ (0 - �����)\n >";
				getline(cin, changed);
				cin.clear();
				if (changed == "0")
				{
					break;
				}
				system("CLS");
			} while (!valid_numbers(changed) && !(changed == "0"));

			if (changed == "0")
			{
				break;
			}

			obj.insert(data[0], data[1], data[2], data[3], data[4], changed, data[6], data[7], data[8], currentobj);
			obj.removeAt(currentobj + 1);

			break;
		case 6:
			system("cls");

			do
			{
				cout << "\n ������� ���������� ������ (0 - �����)\n >";
				getline(cin, changed);
				cin.clear();
				if (changed == "0")
				{
					break;
				}
				system("CLS");
			} while (!valid_numbers(changed) && !(changed == "0"));

			if (changed == "0")
			{
				break;
			}

			obj.insert(data[0], data[1], data[2], data[3], data[4], data[5], changed, data[7], data[8], currentobj);
			obj.removeAt(currentobj + 1);

			break;
		default:
			break;
		}
		obj.fileout_data("data\\objects.txt");
	} while (true);
	
}
