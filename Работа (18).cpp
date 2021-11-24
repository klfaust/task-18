#include <iostream>
using namespace std;
int a = 0;
int gamesize = 3;
int firststep = 1;
int x = 0;
int y = 0;
char Game3Field[3][3] = {};
char Game4Field[4][4] = {};
char Game5Field[5][5] = {};



void Rules()
{
	system("cls");
	cout << "[]Правила\nИгроки по очереди вводят координаты для хода.\n\nПри заполении одной из прямых (вертикальной, горизонтальной, диагональной) игра заканчивается\n\nДля выхода введите любое число ";
	int _; cin >> _;
}

void Bot3()
{
	srand(time(NULL));

	x = rand() % 2;
	y = rand() % 2;

	//Game3Field[x][y] = 'X';
}

void Bot4()
{
	srand(time(NULL));

	x = rand() % 3;
	y = rand() % 3;

	//Game3Field[x][y] = 'X';
}

void Bot5()
{
	srand(time(NULL));

	x = rand() % 4;
	y = rand() % 4;

	//Game3Field[x][y] = 'X';
}

void Settings()
{
	int q = 0;
	while (q == 0)
	{
		system("cls");
		cout << "Настройки\n";
		cout << "[1] Размер поля\n";
		cout << "[2] Цвет\n";
		cout << "[3] Очередь ходов\n";
		cout << "[4] Назад в меню\nДействие: ";
		int w;
		cin >> w;

		switch (w)
		{
		case 1:
		{
			system("cls");
			cout << "[] Размер поля\n\n[1] 3x3\n[2] 4x4\n[3] 5x5\n";
			int i; cin >> i;
			switch (i)
			{
			case 1:
			{
				gamesize = 3;
				break;
			}
			case 2:
			{
				gamesize = 4;
				break;
			}
			case 3:
			{
				gamesize = 5;
				break;
			}
			default:
			{
				cout << "Такой опции не существует\n";
				break;
			}
			}
			break;
		}
		case 2:
		{
			system("cls");
			cout << "[] Цвета\n\n[1] Голубой\n[2] Зеленый\n[3] Красный\n[4] Фиолетовый\n[5] Желтый\n[6] Белый\n";
			int i; cin >> i;
			switch (i)
			{
			case 1:
			{
				system("color 01");
				break;
			}
			case 2:
			{
				system("color 02");
				break;
			}
			case 3:
			{
				system("color 04");
				break;
			}
			case 4:
			{
				system("color 05");
				break;
			}
			case 5:
			{
				system("color 06");
				break;
			}
			case 6:
			{
				system("color 07");
				break;
			}
			default:
			{
				cout << "Цвет отсутствует!";
			}
			}
			break;
		}
		case 3:
		{

			cout << "[] Очередь\n\n[1] Первым ходит пользователь\n[2] Первым ходит компьютер\n";
			int q;
			cin >> q;

			if (q != 1 || q != 2)
			{
				cout << "Такой опции не существует\n";
			}
			else
			{
				firststep = q;
			}

			cout << "Для выхода введите любое число";
			int _; cin >> _;
			system("cls");
			break;
		}
		case 4:
		{
			q = 1;
			break;
		}
		default:
		{
			cout << "Такой опции не существует";
		}

		}
	}

}

void Game()
{


	system("cls");


	switch (gamesize)
	{
	case 3:
	{
		for (int i = 0; i < 3; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				Game3Field[i][k] = '#';
			}
		}


		for (int i = 0; i < 3; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << Game3Field[i][k] << "\t";
			}
			cout << "\n\n";
		}

		int session = 0;

		while (session == 0)
		{
			int qwe = 0;
			int asd = 0;
			while (qwe == 0)
			{
				if ((Game3Field[0][0] == Game3Field[0][1] && Game3Field[0][1] == Game3Field[0][2] && Game3Field[0][0] == 'X')
					|| (Game3Field[1][0] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[1][2] && Game3Field[1][0] == 'X')
					|| (Game3Field[2][0] == Game3Field[2][1] && Game3Field[2][1] == Game3Field[2][2] && Game3Field[2][0] == 'X')
					|| (Game3Field[0][0] == Game3Field[1][0] && Game3Field[1][0] == Game3Field[2][0] && Game3Field[0][0] == 'X')
					|| (Game3Field[0][1] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][1] && Game3Field[0][1] == 'X')
					|| (Game3Field[0][2] == Game3Field[1][2] && Game3Field[1][2] == Game3Field[2][2] && Game3Field[0][2] == 'X')
					|| (Game3Field[0][0] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][2] && Game3Field[0][0] == 'X')
					|| (Game3Field[0][2] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][0] && Game3Field[0][2] == 'X'))
				{
					cout << "Победил игрок 1!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				else if ((Game3Field[0][0] == Game3Field[0][1] && Game3Field[0][1] == Game3Field[0][2] && Game3Field[0][0] == 'O')
					|| (Game3Field[1][0] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[1][2] && Game3Field[1][0] == 'O')
					|| (Game3Field[2][0] == Game3Field[2][1] && Game3Field[2][1] == Game3Field[2][2] && Game3Field[2][0] == 'O')
					|| (Game3Field[0][0] == Game3Field[1][0] && Game3Field[1][0] == Game3Field[2][0] && Game3Field[0][0] == 'O')
					|| (Game3Field[0][1] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][1] && Game3Field[0][1] == 'O')
					|| (Game3Field[0][2] == Game3Field[1][2] && Game3Field[1][2] == Game3Field[2][2] && Game3Field[0][2] == 'O')
					|| (Game3Field[0][0] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][2] && Game3Field[0][0] == 'O')
					|| (Game3Field[0][2] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][0] && Game3Field[0][2] == 'O'))
				{
					cout << "Победил игрок 2!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				cout << "Игрок 1: Введите координаты хода:\n";


				cout << "X: ";
				cin >> x;
				cout << "Y: ";
				cin >> y;

				if (Game3Field[x - 1][y - 1] == 'X' || Game3Field[x - 1][y - 1] == 'O' || x > 3 || y > 3)
				{
					cout << "Неверный ход. Клетка уже заполнена. Введите другие координаты.\n";
					qwe = 0;

				}
				else
				{
					Game3Field[x - 1][y - 1] = 'X';
					qwe = 1;
				}

				system("cls");

				for (int i = 0; i < 3; i++)
				{
					for (int k = 0; k < 3; k++)
					{
						cout << Game3Field[i][k] << "\t";
					}
					cout << "\n\n";
				}
			}

			while (asd == 0)
			{
				if ((Game3Field[0][0] == Game3Field[0][1] && Game3Field[0][1] == Game3Field[0][2] && Game3Field[0][0] == 'X')
					|| (Game3Field[1][0] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[1][2] && Game3Field[1][0] == 'X')
					|| (Game3Field[2][0] == Game3Field[2][1] && Game3Field[2][1] == Game3Field[2][2] && Game3Field[2][0] == 'X')
					|| (Game3Field[0][0] == Game3Field[1][0] && Game3Field[1][0] == Game3Field[2][0] && Game3Field[0][0] == 'X')
					|| (Game3Field[0][1] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][1] && Game3Field[0][1] == 'X')
					|| (Game3Field[0][2] == Game3Field[1][2] && Game3Field[1][2] == Game3Field[2][2] && Game3Field[0][2] == 'X')
					|| (Game3Field[0][0] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][2] && Game3Field[0][0] == 'X')
					|| (Game3Field[0][2] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][0] && Game3Field[0][2] == 'X'))
				{
					cout << "Победил игрок 1!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				else if ((Game3Field[0][0] == Game3Field[0][1] && Game3Field[0][1] == Game3Field[0][2] && Game3Field[0][0] == 'O')
					|| (Game3Field[1][0] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[1][2] && Game3Field[1][0] == 'O')
					|| (Game3Field[2][0] == Game3Field[2][1] && Game3Field[2][1] == Game3Field[2][2] && Game3Field[2][0] == 'O')
					|| (Game3Field[0][0] == Game3Field[1][0] && Game3Field[1][0] == Game3Field[2][0] && Game3Field[0][0] == 'O')
					|| (Game3Field[0][1] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][1] && Game3Field[0][1] == 'O')
					|| (Game3Field[0][2] == Game3Field[1][2] && Game3Field[1][2] == Game3Field[2][2] && Game3Field[0][2] == 'O')
					|| (Game3Field[0][0] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][2] && Game3Field[0][0] == 'O')
					|| (Game3Field[0][2] == Game3Field[1][1] && Game3Field[1][1] == Game3Field[2][0] && Game3Field[0][2] == 'O'))
				{
					cout << "Победил игрок 2!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}


				cout << "Игрок 2: Введите координаты хода:\n";


				//srand(time(NULL));
				//
				//x = rand() % 2;
				//y = rand() % 2;


				Bot3();

				//cout << "X: ";
				//cin >> x;
				//cout << "Y: ";
				//cin >> y;

				if (Game3Field[x][y] == 'X' || Game3Field[x][y] == 'O')
				{
					cout << "Неверный ход. Клетка уже заполнена. Введите другие координаты.\n";
					asd = 0;
				}
				else
				{
					Game3Field[x][y] = 'O';
					asd = 1;
				}

				system("cls");

				for (int i = 0; i < 3; i++)
				{
					for (int k = 0; k < 3; k++)
					{
						cout << Game3Field[i][k] << "\t";
					}
					cout << "\n\n";
				}
			}
		}
	}
	break;

	case 4:
	{
		for (int i = 0; i < 4; i++)
		{
			for (int k = 0; k < 4; k++)
			{
				Game4Field[i][k] = '#';
			}
		}


		for (int i = 0; i < 4; i++)
		{
			for (int k = 0; k < 4; k++)
			{
				cout << Game4Field[i][k] << "\t";
			}
			cout << "\n\n";
		}

		int session = 0;

		while (session == 0)
		{
			int qwe = 0;
			int asd = 0;
			while (qwe == 0)
			{
				if ((Game4Field[0][0] == Game4Field[0][1] && Game4Field[0][1] == Game4Field[0][2] && Game4Field[0][2] == Game4Field[0][3] && Game4Field[0][0] == 'X')
					|| (Game4Field[1][0] == Game4Field[1][1] && Game4Field[1][1] == Game4Field[1][2] && Game4Field[1][2] == Game4Field[1][3] && Game4Field[1][0] == 'X')
					|| (Game4Field[2][0] == Game4Field[2][1] && Game4Field[2][1] == Game4Field[2][2] && Game4Field[2][2] == Game4Field[2][3] && Game4Field[2][0] == 'X')
					|| (Game4Field[3][0] == Game4Field[3][1] && Game4Field[3][1] == Game4Field[3][2] && Game4Field[3][2] == Game4Field[3][3] && Game4Field[3][0] == 'X')
					|| (Game4Field[0][0] == Game4Field[1][0] && Game4Field[1][0] == Game4Field[2][0] && Game4Field[2][0] == Game4Field[3][0] && Game4Field[0][0] == 'X')
					|| (Game4Field[0][1] == Game4Field[1][1] && Game4Field[1][1] == Game4Field[2][1] && Game4Field[2][1] == Game4Field[3][1] && Game4Field[0][1] == 'X')
					|| (Game4Field[0][2] == Game4Field[1][2] && Game4Field[1][2] == Game4Field[2][2] && Game4Field[2][2] == Game4Field[3][2] && Game4Field[0][2] == 'X')
					|| (Game4Field[0][3] == Game4Field[1][3] && Game4Field[1][3] == Game4Field[2][3] && Game4Field[2][3] == Game4Field[3][3] && Game4Field[0][0] == 'X'))
				{
					cout << "Победил игрок 1!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				else if ((Game4Field[0][0] == Game4Field[0][1] && Game4Field[0][1] == Game4Field[0][2] && Game4Field[0][2] == Game4Field[0][3] && Game4Field[0][0] == 'O')
					|| (Game4Field[1][0] == Game4Field[1][1] && Game4Field[1][1] == Game4Field[1][2] && Game4Field[1][2] == Game4Field[1][3] && Game4Field[1][0] == 'O')
					|| (Game4Field[2][0] == Game4Field[2][1] && Game4Field[2][1] == Game4Field[2][2] && Game4Field[2][2] == Game4Field[2][3] && Game4Field[2][0] == 'O')
					|| (Game4Field[3][0] == Game4Field[3][1] && Game4Field[3][1] == Game4Field[3][2] && Game4Field[3][2] == Game4Field[3][3] && Game4Field[3][0] == 'O')
					|| (Game4Field[0][0] == Game4Field[1][0] && Game4Field[1][0] == Game4Field[2][0] && Game4Field[2][0] == Game4Field[3][0] && Game4Field[0][0] == 'O')
					|| (Game4Field[0][1] == Game4Field[1][1] && Game4Field[1][1] == Game4Field[2][1] && Game4Field[2][1] == Game4Field[3][1] && Game4Field[0][1] == 'O')
					|| (Game4Field[0][2] == Game4Field[1][2] && Game4Field[1][2] == Game4Field[2][2] && Game4Field[2][2] == Game4Field[3][2] && Game4Field[0][2] == 'O')
					|| (Game4Field[0][3] == Game4Field[1][3] && Game4Field[1][3] == Game4Field[2][3] && Game4Field[2][3] == Game4Field[3][3] && Game4Field[0][0] == 'O'))
				{
					cout << "Победил игрок 2!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				cout << "Игрок 1: Введите координаты хода:\n";
				cout << "X: ";
				cin >> x;
				cout << "Y: ";
				cin >> y;

				if (Game4Field[x - 1][y - 1] == 'X' || Game4Field[x - 1][y - 1] == 'O' || x > 4 || y > 4)
				{
					cout << "Неверный ход. Клетка уже заполнена. Введите другие координаты.\n";
					qwe = 0;

				}
				else
				{
					Game4Field[x - 1][y - 1] = 'X';
					qwe = 1;
				}

				system("cls");

				for (int i = 0; i < 4; i++)
				{
					for (int k = 0; k < 4; k++)
					{
						cout << Game4Field[i][k] << "\t";
					}
					cout << "\n\n";
				}
			}

			while (asd == 0)
			{
				if ((Game4Field[0][0] == Game4Field[0][1] && Game4Field[0][1] == Game4Field[0][2] && Game4Field[0][2] == Game4Field[0][3] && Game4Field[0][0] == 'X')
					|| (Game4Field[1][0] == Game4Field[1][1] && Game4Field[1][1] == Game4Field[1][2] && Game4Field[1][2] == Game4Field[1][3] && Game4Field[1][0] == 'X')
					|| (Game4Field[2][0] == Game4Field[2][1] && Game4Field[2][1] == Game4Field[2][2] && Game4Field[2][2] == Game4Field[2][3] && Game4Field[2][0] == 'X')
					|| (Game4Field[3][0] == Game4Field[3][1] && Game4Field[3][1] == Game4Field[3][2] && Game4Field[3][2] == Game4Field[3][3] && Game4Field[3][0] == 'X')
					|| (Game4Field[0][0] == Game4Field[1][0] && Game4Field[1][0] == Game4Field[2][0] && Game4Field[2][0] == Game4Field[3][0] && Game4Field[0][0] == 'X')
					|| (Game4Field[0][1] == Game4Field[1][1] && Game4Field[1][1] == Game4Field[2][1] && Game4Field[2][1] == Game4Field[3][1] && Game4Field[0][1] == 'X')
					|| (Game4Field[0][2] == Game4Field[1][2] && Game4Field[1][2] == Game4Field[2][2] && Game4Field[2][2] == Game4Field[3][2] && Game4Field[0][2] == 'X')
					|| (Game4Field[0][3] == Game4Field[1][3] && Game4Field[1][3] == Game4Field[2][3] && Game4Field[2][3] == Game4Field[3][3] && Game4Field[0][0] == 'X'))
				{
					cout << "Победил игрок 1!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				else if ((Game4Field[0][0] == Game4Field[0][1] && Game4Field[0][1] == Game4Field[0][2] && Game4Field[0][2] == Game4Field[0][3] && Game4Field[0][0] == 'O')
					|| (Game4Field[1][0] == Game4Field[1][1] && Game4Field[1][1] == Game4Field[1][2] && Game4Field[1][2] == Game4Field[1][3] && Game4Field[1][0] == 'O')
					|| (Game4Field[2][0] == Game4Field[2][1] && Game4Field[2][1] == Game4Field[2][2] && Game4Field[2][2] == Game4Field[2][3] && Game4Field[2][0] == 'O')
					|| (Game4Field[3][0] == Game4Field[3][1] && Game4Field[3][1] == Game4Field[3][2] && Game4Field[3][2] == Game4Field[3][3] && Game4Field[3][0] == 'O')
					|| (Game4Field[0][0] == Game4Field[1][0] && Game4Field[1][0] == Game4Field[2][0] && Game4Field[2][0] == Game4Field[3][0] && Game4Field[0][0] == 'O')
					|| (Game4Field[0][1] == Game4Field[1][1] && Game4Field[1][1] == Game4Field[2][1] && Game4Field[2][1] == Game4Field[3][1] && Game4Field[0][1] == 'O')
					|| (Game4Field[0][2] == Game4Field[1][2] && Game4Field[1][2] == Game4Field[2][2] && Game4Field[2][2] == Game4Field[3][2] && Game4Field[0][2] == 'O')
					|| (Game4Field[0][3] == Game4Field[1][3] && Game4Field[1][3] == Game4Field[2][3] && Game4Field[2][3] == Game4Field[3][3] && Game4Field[0][0] == 'O'))
				{
					cout << "Победил игрок 2!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				cout << "Игрок 2: Введите координаты хода:\n";

				Bot4();

				//cout << "X: ";
				//cin >> x;
				//cout << "Y: ";
				//cin >> y;

				if (Game4Field[x][y] == 'X' || Game4Field[x][y] == 'O')
				{
					cout << "Неверный ход. Клетка уже заполнена. Введите другие координаты.\n";
					asd = 0;
				}
				else
				{
					Game4Field[x][y] = 'O';
					asd = 1;
				}

				system("cls");

				for (int i = 0; i < 4; i++)
				{
					for (int k = 0; k < 4; k++)
					{
						cout << Game4Field[i][k] << "\t";
					}
					cout << "\n\n";
				}
			}
		}
		break;
	}
	case 5:
	{
		for (int i = 0; i < 5; i++)
		{
			for (int k = 0; k < 5; k++)
			{
				Game5Field[i][k] = '#';
			}
		}


		for (int i = 0; i < 5; i++)
		{
			for (int k = 0; k < 5; k++)
			{
				cout << Game5Field[i][k] << "\t";
			}
			cout << "\n\n";
		}

		int session = 0;

		while (session == 0)
		{
			int qwe = 0;
			int asd = 0;
			while (qwe == 0)
			{
				if ((Game5Field[0][0] == Game5Field[0][1] && Game5Field[0][1] == Game5Field[0][2] && Game5Field[0][2] == Game5Field[0][3] && Game5Field[0][3] == Game5Field[0][4] && Game5Field[0][0] == 'X')
					|| (Game5Field[1][0] == Game5Field[1][1] && Game5Field[1][1] == Game5Field[1][2] && Game5Field[1][2] == Game5Field[1][3] && Game5Field[1][3] == Game5Field[1][4] && Game5Field[1][0] == 'X')
					|| (Game5Field[2][0] == Game5Field[2][1] && Game5Field[2][1] == Game5Field[2][2] && Game5Field[2][2] == Game5Field[2][3] && Game5Field[2][3] == Game5Field[2][4] && Game5Field[2][0] == 'X')
					|| (Game5Field[3][0] == Game5Field[3][1] && Game5Field[3][1] == Game5Field[3][2] && Game5Field[3][2] == Game5Field[3][3] && Game5Field[3][3] == Game5Field[3][4] && Game5Field[3][0] == 'X')
					|| (Game5Field[0][0] == Game5Field[1][0] && Game5Field[1][0] == Game5Field[2][0] && Game5Field[2][0] == Game5Field[3][0] && Game5Field[3][0] == Game5Field[4][0] && Game5Field[0][0] == 'X')
					|| (Game5Field[0][1] == Game5Field[1][1] && Game5Field[1][1] == Game5Field[2][1] && Game5Field[2][1] == Game5Field[3][1] && Game5Field[3][1] == Game5Field[4][1] && Game5Field[0][1] == 'X')
					|| (Game5Field[0][2] == Game5Field[1][2] && Game5Field[1][2] == Game5Field[2][2] && Game5Field[2][2] == Game5Field[3][2] && Game5Field[3][2] == Game5Field[4][2] && Game5Field[0][2] == 'X')
					|| (Game5Field[0][3] == Game5Field[1][3] && Game5Field[1][3] == Game5Field[2][3] && Game5Field[2][3] == Game5Field[3][3] && Game5Field[3][3] == Game5Field[4][3] && Game5Field[0][0] == 'X'))
				{
					cout << "Победил игрок 1!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				else if ((Game5Field[0][0] == Game5Field[0][1] && Game5Field[0][1] == Game5Field[0][2] && Game5Field[0][2] == Game5Field[0][3] && Game5Field[0][3] == Game5Field[0][4] && Game5Field[0][0] == 'O')
					 || (Game5Field[1][0] == Game5Field[1][1] && Game5Field[1][1] == Game5Field[1][2] && Game5Field[1][2] == Game5Field[1][3] && Game5Field[1][3] == Game5Field[1][4] && Game5Field[1][0] == 'O')
					 || (Game5Field[2][0] == Game5Field[2][1] && Game5Field[2][1] == Game5Field[2][2] && Game5Field[2][2] == Game5Field[2][3] && Game5Field[2][3] == Game5Field[2][4] && Game5Field[2][0] == 'O')
					 || (Game5Field[3][0] == Game5Field[3][1] && Game5Field[3][1] == Game5Field[3][2] && Game5Field[3][2] == Game5Field[3][3] && Game5Field[3][3] == Game5Field[3][4] && Game5Field[3][0] == 'O')
					 || (Game5Field[0][0] == Game5Field[1][0] && Game5Field[1][0] == Game5Field[2][0] && Game5Field[2][0] == Game5Field[3][0] && Game5Field[3][0] == Game5Field[4][0] && Game5Field[0][0] == 'O')
					 || (Game5Field[0][1] == Game5Field[1][1] && Game5Field[1][1] == Game5Field[2][1] && Game5Field[2][1] == Game5Field[3][1] && Game5Field[3][1] == Game5Field[4][1] && Game5Field[0][1] == 'O')
					 || (Game5Field[0][2] == Game5Field[1][2] && Game5Field[1][2] == Game5Field[2][2] && Game5Field[2][2] == Game5Field[3][2] && Game5Field[3][2] == Game5Field[4][2] && Game5Field[0][2] == 'O')
					 || (Game5Field[0][3] == Game5Field[1][3] && Game5Field[1][3] == Game5Field[2][3] && Game5Field[2][3] == Game5Field[3][3] && Game5Field[3][3] == Game5Field[4][3] && Game5Field[0][0] == 'O'))
				{
					cout << "Победил игрок 2!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				cout << "Игрок 1: Введите координаты хода:\n";
				cout << "X: ";
				cin >> x;
				cout << "Y: ";
				cin >> y;

				if (Game5Field[x - 1][y - 1] == 'X' || Game5Field[x - 1][y - 1] == 'O' || x > 5 || y > 5)
				{
					cout << "Неверный ход. Клетка уже заполнена. Введите другие координаты.\n";
					qwe = 0;

				}
				else
				{
					Game5Field[x - 1][y - 1] = 'X';
					qwe = 1;
				}

				system("cls");

				for (int i = 0; i < 4; i++)
				{
					for (int k = 0; k < 4; k++)
					{
						cout << Game5Field[i][k] << "\t";
					}
					cout << "\n\n";
				}
			}

			while (asd == 0)
			{
				if ((Game5Field[0][0] == Game5Field[0][1] && Game5Field[0][1] == Game5Field[0][2] && Game5Field[0][2] == Game5Field[0][3] && Game5Field[0][3] == Game5Field[0][4] && Game5Field[0][0] == 'X')
					|| (Game5Field[1][0] == Game5Field[1][1] && Game5Field[1][1] == Game5Field[1][2] && Game5Field[1][2] == Game5Field[1][3] && Game5Field[1][3] == Game5Field[1][4] && Game5Field[1][0] == 'X')
					|| (Game5Field[2][0] == Game5Field[2][1] && Game5Field[2][1] == Game5Field[2][2] && Game5Field[2][2] == Game5Field[2][3] && Game5Field[2][3] == Game5Field[2][4] && Game5Field[2][0] == 'X')
					|| (Game5Field[3][0] == Game5Field[3][1] && Game5Field[3][1] == Game5Field[3][2] && Game5Field[3][2] == Game5Field[3][3] && Game5Field[3][3] == Game5Field[3][4] && Game5Field[3][0] == 'X')
					|| (Game5Field[0][0] == Game5Field[1][0] && Game5Field[1][0] == Game5Field[2][0] && Game5Field[2][0] == Game5Field[3][0] && Game5Field[3][0] == Game5Field[4][0] && Game5Field[0][0] == 'X')
					|| (Game5Field[0][1] == Game5Field[1][1] && Game5Field[1][1] == Game5Field[2][1] && Game5Field[2][1] == Game5Field[3][1] && Game5Field[3][1] == Game5Field[4][1] && Game5Field[0][1] == 'X')
					|| (Game5Field[0][2] == Game5Field[1][2] && Game5Field[1][2] == Game5Field[2][2] && Game5Field[2][2] == Game5Field[3][2] && Game5Field[3][2] == Game5Field[4][2] && Game5Field[0][2] == 'X')
					|| (Game5Field[0][3] == Game5Field[1][3] && Game5Field[1][3] == Game5Field[2][3] && Game5Field[2][3] == Game5Field[3][3] && Game5Field[3][3] == Game5Field[4][3] && Game5Field[0][0] == 'X'))
				{
					cout << "Победил игрок 1!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				else if ((Game5Field[0][0] == Game5Field[0][1] && Game5Field[0][1] == Game5Field[0][2] && Game5Field[0][2] == Game5Field[0][3] && Game5Field[0][3] == Game5Field[0][4] && Game5Field[0][0] == 'O')
					|| (Game5Field[1][0] == Game5Field[1][1] && Game5Field[1][1] == Game5Field[1][2] && Game5Field[1][2] == Game5Field[1][3] && Game5Field[1][3] == Game5Field[1][4] && Game5Field[1][0] == 'O')
					|| (Game5Field[2][0] == Game5Field[2][1] && Game5Field[2][1] == Game5Field[2][2] && Game5Field[2][2] == Game5Field[2][3] && Game5Field[2][3] == Game5Field[2][4] && Game5Field[2][0] == 'O')
					|| (Game5Field[3][0] == Game5Field[3][1] && Game5Field[3][1] == Game5Field[3][2] && Game5Field[3][2] == Game5Field[3][3] && Game5Field[3][3] == Game5Field[3][4] && Game5Field[3][0] == 'O')
					|| (Game5Field[0][0] == Game5Field[1][0] && Game5Field[1][0] == Game5Field[2][0] && Game5Field[2][0] == Game5Field[3][0] && Game5Field[3][0] == Game5Field[4][0] && Game5Field[0][0] == 'O')
					|| (Game5Field[0][1] == Game5Field[1][1] && Game5Field[1][1] == Game5Field[2][1] && Game5Field[2][1] == Game5Field[3][1] && Game5Field[3][1] == Game5Field[4][1] && Game5Field[0][1] == 'O')
					|| (Game5Field[0][2] == Game5Field[1][2] && Game5Field[1][2] == Game5Field[2][2] && Game5Field[2][2] == Game5Field[3][2] && Game5Field[3][2] == Game5Field[4][2] && Game5Field[0][2] == 'O')
					|| (Game5Field[0][3] == Game5Field[1][3] && Game5Field[1][3] == Game5Field[2][3] && Game5Field[2][3] == Game5Field[3][3] && Game5Field[3][3] == Game5Field[4][3] && Game5Field[0][0] == 'O'))
				{
					cout << "Победил игрок 2!\n";
					session = 1;
					qwe = 1;
					asd = 1;
					break;
				}

				cout << "Игрок 2: Введите координаты хода:\n";

				Bot5();

				//cout << "X: ";
				//cin >> x;
				//cout << "Y: ";
				//cin >> y;

				if (Game5Field[x][y] == 'X' || Game5Field[x][y] == 'O')
				{
					cout << "Неверный ход. Клетка уже заполнена. Введите другие координаты.\n";
					asd = 0;
				}
				else
				{
					Game5Field[x][y] = 'O';
					asd = 1;
				}

				system("cls");

				for (int i = 0; i < 4; i++)
				{
					for (int k = 0; k < 4; k++)
					{
						cout << Game5Field[i][k] << "\t";
					}
					cout << "\n\n";
				}
			}
		}
		break;
	}
	break;
	}

	cout << "\nДля выхода введите любое число: ";
	int _;
	cin >> _;
}

int main()
{
	setlocale(0, "");

	while (a == 0)
	{
		system("cls");
		cout << "[] Крестики-нолики\n\n";
		cout << "[1] Играть\n";
		cout << "[2] Настройки\n";
		cout << "[3] Правила\n";
		cout << "[4] Выход\n";
		cout << "Действие: ";
		int c;
		cin >> c;


		switch (c)
		{
		case 1:
		{
			Game();
			break;
		}
		case 2:
		{
			Settings();
			break;
		}
		case 3:
		{
			Rules();
			break;
		}
		case 4:
		{
			a = 1;
			break;
		}
		default:
		{
			cout << "Такой опции не существует";
		}
		}
	}
}