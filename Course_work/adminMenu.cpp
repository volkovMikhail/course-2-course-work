#include "Menues.h"

void admin_menu(list& user, list& obj, list& deals)
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("mode con cols=48 lines=15");
	fstream file;
	string x, a, b, owner;
	bool exit = true;
	string* arr_data = new string[9];

	do
	{
		system("cls");
		cout << "     �������������";
		cout << "\n\n 1. �������� ���� ������";
		cout << "\n 2. ���������� ������������";
		cout << "\n 3. ���������� ������� ������������";
		cout << "\n 4. ���������� ������";
		cout << "\n 5. �������� ������������";
		cout << "\n 6. �������� ������� ������������";
		cout << "\n 7. �������� ������";
		cout << "\n 8. �������� ���� ������";
		cout << "\n 9. ��������� ��� ������";
		cout << "\n 0. ��������� � ������� ����\n\n >";
		getline(cin, x, '\n');
		cin.clear();

		switch (atoi(x.c_str()))
		{
		case 1:
			system("cls");
			cout << "     ����� ���� ������ ������� �����������?";
			cout << "\n 1. ������������";
			cout << "\n 2. ������";
			cout << "\n 3. ������� ������\n >";
			getline(cin, a, '\n');
			cin.clear();
			switch (atoi(a.c_str()))
			{
			case 1:
				system("mode con cols=48 lines=20");
				GetConsoleScreenBufferInfo(hConsole, &csbi);
				csbi.dwSize.Y = 10000;
				SetConsoleScreenBufferSize(hConsole, csbi.dwSize);
				sortFIO(user);
				for (int i = 0; i < user.getsize(); i++)
				{
					arr_data = user[i];

					cout << "\n     " << arr_data[0];
					cout << "\n ������  : " << arr_data[1];
					cout << "\n ���     : " << arr_data[2];
					cout << "\n ������� : " << arr_data[3];
					cout << "\n ���     : " << arr_data[4];
					cout << "\n ��������: " << arr_data[5];
					cout << "\n ���� ���: " << arr_data[6];
					cout << "\n �����   : " << arr_data[7];
					cout << "\n �����   : " << arr_data[8] << endl << endl;
				}
				system("pause");
				system("mode con cols=48 lines=15");
				break;
			case 2:
				system("mode con cols=48 lines=20");
				GetConsoleScreenBufferInfo(hConsole, &csbi);
				csbi.dwSize.Y = 10000;
				SetConsoleScreenBufferSize(hConsole, csbi.dwSize);
				for (int i = 0; i < obj.getsize(); i++)
				{
					arr_data = obj[i];

					cout << "\n     " << arr_data[0];
					cout << "\n �����    : " << arr_data[1];
					cout << "\n ���������: " << arr_data[2];
					cout << "\n ���      : " << arr_data[3];
					cout << "\n �������� : " << arr_data[4];
					cout << "\n ������   : " << arr_data[5];
					cout << "\n ������   : " << arr_data[6] << endl << endl;
				}
				system("pause");
				system("mode con cols=48 lines=15");
				break;
			case 3:
				system("mode con cols=48 lines=20");
				GetConsoleScreenBufferInfo(hConsole, &csbi);
				csbi.dwSize.Y = 10000;
				SetConsoleScreenBufferSize(hConsole, csbi.dwSize);
				for (int i = 0; i < deals.getsize(); i++)
				{
					arr_data = deals[i];

					cout << "\n ��������          : " << arr_data[0];
					cout << "\n ����������        : " << arr_data[1];
					cout << "\n ��������� ��������: " << arr_data[2];
					cout << "\n ������ �������    : " << arr_data[3];
					cout << "\n �����             : " << arr_data[4];
					cout << "\n ���� ������       : " << arr_data[5];
					cout << "\n ���� ��������     : " << arr_data[6] << endl << endl;
				}
				system("pause");
				system("mode con cols=48 lines=15");
				break;
			default:
				break;
			};

			break;
		case 2:

			system("cls");
			register_user(user);

			break;
		case 3:
			system("cls");
			do
			{
				cout << "\n ������� ��������� �������(login)\n >";
				getline(cin, owner, '\n');
				cin.clear();
				system("cls");
			} while (!valid_name(owner));
			register_obj(obj, owner);

			break;
		case 4:

			system("cls");
			add_deal(deals);

			break;
		case 5:

			system("mode con cols=48 lines=20");
			GetConsoleScreenBufferInfo(hConsole, &csbi);
			csbi.dwSize.Y = 10000;
			SetConsoleScreenBufferSize(hConsole, csbi.dwSize);
			system("cls");
			for (int i = 0; i < user.getsize(); i++)
			{
				arr_data = user[i];

				cout << "\n  " << i << ". " << arr_data[0];
				cout << "\n ������  : " << arr_data[1];
				cout << "\n ���     : " << arr_data[2];
				cout << "\n ������� : " << arr_data[3];
				cout << "\n ���     : " << arr_data[4];
				cout << "\n ��������: " << arr_data[5];
				cout << "\n ���� ���: " << arr_data[6];
				cout << "\n �����   : " << arr_data[7];
				cout << "\n �����   : " << arr_data[8] << endl << endl;
			}
			do
			{
				cout << "\n �������� ������������ ��� ��������\n >";
				getline(cin, x, '\n');
				cin.clear();
				system("cls");
			} while (!valid_zeroLen(x));

			if (user.getsize() != 0)
			{
				user.removeAt(atoi(x.c_str()));
				system("cls");
				cout << "\n ������������ �����\n\n";
			}
			system("pause");
			system("mode con cols=48 lines=15");
			break;
		case 6:
			system("mode con cols=48 lines=20");
			GetConsoleScreenBufferInfo(hConsole, &csbi);
			csbi.dwSize.Y = 10000;
			SetConsoleScreenBufferSize(hConsole, csbi.dwSize);
			system("cls");
			for (int i = 0; i < obj.getsize(); i++)
			{
				arr_data = obj[i];

				cout << "\n  " << i << ". " << arr_data[0];
				cout << "\n �����    : " << arr_data[1];
				cout << "\n ���������: " << arr_data[2];
				cout << "\n ���      : " << arr_data[3];
				cout << "\n �������� : " << arr_data[4];
				cout << "\n ������   : " << arr_data[5];
				cout << "\n ������   : " << arr_data[6] << endl << endl;
			}

			do
			{
				cout << "\n �������� ������ ��� ��������\n >";
				getline(cin, x, '\n');
				cin.clear();
				system("cls");
			} while (!valid_zeroLen(x));

			if (obj.getsize() != 0)
			{
				obj.removeAt(atoi(x.c_str()));
				system("cls");
				cout << "\n ������ �����\n\n";
			}
			system("pause");
			system("mode con cols=48 lines=15");
			break;
		case 7:
			system("mode con cols=48 lines=20");
			GetConsoleScreenBufferInfo(hConsole, &csbi);
			csbi.dwSize.Y = 10000;
			SetConsoleScreenBufferSize(hConsole, csbi.dwSize);
			system("cls");
			for (int i = 0; i < deals.getsize(); i++)
			{
				arr_data = deals[i];

				cout << "\n " << i << ". \n ��������      : " << arr_data[0];
				cout << "\n ����������        : " << arr_data[1];
				cout << "\n ��������� ��������: " << arr_data[2];
				cout << "\n ������ �������    : " << arr_data[3];
				cout << "\n �����             : " << arr_data[4];
				cout << "\n ���� ������       : " << arr_data[5];
				cout << "\n ���� ��������     : " << arr_data[6] << endl << endl;
			}

			do
			{
				cout << "\n �������� ������ ��� ��������\n >";
				getline(cin, x, '\n');
				cin.clear();
				system("cls");
			} while (!valid_zeroLen(x));

			if (deals.getsize() != 0)
			{
				deals.removeAt(atoi(x.c_str()));
				system("cls");
				cout << "\n ������ �������\n\n";
			}
			system("pause");
			system("mode con cols=48 lines=15");
			break;
		case 8:
			system("cls");
			cout << "     ����� ���� ������ ��������?";
			cout << "\n\n 1. ������������";
			cout << "\n 2. ������";
			cout << "\n 3. �������";
			cout << "\n 4. �������� ��� ���� ������";
			cout << "\n 0. �����\n\n >";
			getline(cin, b, '\n');
			cin.clear();

			switch (atoi(b.c_str()))
			{
			case 1:
				user.clear();
				file.open("data\\users.txt", ios::trunc);
				file.close();
				cout << "\n ���� users.txt ��� ������\n\n";
				system("pause");
				break;
			case 2:
				obj.clear();
				file.open("data\\objects.txt", ios::trunc);
				file.close();
				cout << "\n ���� objects.txt ��� ������\n\n";
				system("pause");
				break;
			case 3:
				deals.clear();
				file.open("data\\deals.txt", ios::trunc);
				file.close();
				cout << "\n ���� deals.txt ��� ������\n\n";
				system("pause");
				break;
			case 4:
				user.clear();
				file.open("data\\users.txt", ios::trunc);
				file.close();

				obj.clear();
				file.open("data\\objects.txt", ios::trunc);
				file.close();

				deals.clear();
				file.open("data\\deals.txt", ios::trunc);
				file.close();

				cout << "\n ���� ������ ��������� �����!";
				system("pause");
				break;
			default:
				break;
			}
			break;
		case 9:

			user.fileout_data("data\\users.txt");
			obj.fileout_data("data\\objects.txt");
			deals.fileout_data("data\\deals.txt");
			cout << "\n ��� ������ ���� ���������\n\n";
			system("pause");

			break;
		case 0:
			exit = false;
			break;
		default:
			break;
		}
	} while (exit);
}