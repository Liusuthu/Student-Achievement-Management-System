#include"declaration.h"

int main()
{
	//��������
	char set[15] = "12345678";
	Menu menu(set);
	char main_option;
REENTRY:
	if (menu.LogIn()) 
	{
		cout << endl << endl << endl;
		cout << "                ��ӭ����ʹ��                " << endl; 
		cout << "-------------------------------------------------" << endl;
	}
	else 
	{
		cout << endl << endl << endl;
		cout << "-------------------------------------------------" << endl;
		cout<< "            ����������������룡        " << endl << endl;
		goto REENTRY; 
	}
	//ѡ���˵�
MAINMENU:	
	menu.MainMenu(&main_option);
	switch (main_option) 
	{
		case '1': 
		{
			menu.ReadingMode(); 
			break;
		}
		case '2': 
		{ menu.ModifyingMode(); break; }
		case '3': 
		{ menu.WritingMode(); break; }
		case '4':
		{
			menu.DeleteMode();
			break;
		}
		case '5': 
		{
			menu.ChangingPasswordMode(); 
			goto MAINMENU;
			break; 
		}
		case '6': 
		{menu.Exit(); goto REENTRY; break; }
		default: 
		{
			cout << "-------------------------------------------------" << endl;
			cout << "             ����������������룡              " << endl;
			cout << "-------------------------------------------------" << endl;
			cin.sync();
			goto MAINMENU;
			break;
		}
		
	}
	goto MAINMENU;//����ģʽ�˳��󷵻����˵�
}