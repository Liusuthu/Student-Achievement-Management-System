#include"declaration.h"

int main()
{
	//启动界面
	char set[15] = "12345678";
	Menu menu(set);
	char main_option;
REENTRY:
	if (menu.LogIn()) 
	{
		cout << endl << endl << endl;
		cout << "                欢迎进入使用                " << endl; 
		cout << "-------------------------------------------------" << endl;
	}
	else 
	{
		cout << endl << endl << endl;
		cout << "-------------------------------------------------" << endl;
		cout<< "            密码错误，请重新输入！        " << endl << endl;
		goto REENTRY; 
	}
	//选主菜单
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
			cout << "             输入错误，请重新输入！              " << endl;
			cout << "-------------------------------------------------" << endl;
			cin.sync();
			goto MAINMENU;
			break;
		}
		
	}
	goto MAINMENU;//用于模式退出后返回主菜单
}