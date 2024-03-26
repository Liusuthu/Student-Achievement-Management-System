#include"declaration.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ReadingClerk(char d)//d选择两种检索模式
{
	//普通员工
	ifstream infile("clerk.txt", ios::in);
	if (!infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Clerk read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char departmen[10]; int achievemen; int ran; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> departmen >> achievemen >> ran >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, departmen, achievemen, ran, incumbenc);
		}
	}
	infile.close();
	//选择检索模式
	if (d == '1')
	{
		cout << "               请输入被查询者工号                " << endl;
		cout << "-------------------------------------------------" << endl;
		char num[8];
		int memory = 0, flag = 0;
		cout << "您的输入: ";
		cin.clear(); cin.sync();
		cin >> num;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (strcmp(read[i].GetJob_Number(), num) == 0)
				{
					flag = 1;
					memory = i;
					break;
				}
			}
		}
		if (flag == 1)
		{
			cout << "             找到结果，完整信息如下              " << endl;
			cout << "-------------------------------------------------" << endl;
			read[memory].PrintAll();
			cout << "-------------------------------------------------" << endl;
			cout << endl << endl;
		}
		else
		{
			cout << "-------------------------------------------------" << endl;
			cout << "                未能找到相应结果                 " << endl;
			cout << "-------------------------------------------------" << endl;
		}
	}
	if (d == '2')
	{
		cout << "             请输入要筛选的部门名称              " << endl;
		cout << "-------------------------------------------------" << endl;
		char dept[10];
		cout << "您的输入: ";
		cin.clear(); cin.sync();
		cin >> dept;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (strcmp(read[i].GetDepartment(), dept) == 0)
				{
					cout << "-------------------------------------------------" << endl;
					read[i].PrintAll();
					cout << "-------------------------------------------------" << endl;
				}
			}
		}
		cout << endl << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "            以上是所有符合条件的结果             " << endl;
		cout << "-------------------------------------------------" << endl;
	}

}


void ReadingAdministrator(char d)//选择两种检索模式
{
	//管理层人员
	ifstream infile("administrator.txt", ios::in);
	if (!infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Administrator read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char mng_field[10]; int ran; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> mng_field >> ran >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, mng_field, ran, incumbenc);
		}
	}
	infile.close();
	//选择检索模式
	if (d == '1')
	{
		cout << "               请输入被查询者工号                " << endl;
		cout << "-------------------------------------------------" << endl;
		char num[8];
		int memory = 0, flag = 0;
		cout << "您的输入: ";
		cin.clear(); cin.sync();
		cin >> num;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (strcmp(read[i].GetJob_Number(), num) == 0)
				{
					flag = 1;
					memory = i;
					break;
				}
			}
		}
		if (flag == 1)
		{
			cout << "             找到结果，完整信息如下              " << endl;
			cout << "-------------------------------------------------" << endl;
			read[memory].PrintAll();
			cout << "-------------------------------------------------" << endl;
			cout << endl << endl;
		}
		else
		{
			cout << "-------------------------------------------------" << endl;
			cout << "                未能找到相应结果                 " << endl;
			cout << "-------------------------------------------------" << endl;
		}
	}
	if (d == '2')
	{
		cout << "              请输入要筛选的等级数               " << endl;
		cout << "-------------------------------------------------" << endl;
		int ran;
		cout << "您的输入: ";
		cin.clear(); cin.sync();
		cin >> ran;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (read[i].GetRank() == ran)
				{
					cout << "-------------------------------------------------" << endl;
					read[i].PrintAll();
					cout << "-------------------------------------------------" << endl;
				}
			}
		}
		cout << endl << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "            以上是所有符合条件的结果             " << endl;
		cout << "-------------------------------------------------" << endl;
	}

}

void ReadingLogistician(char d)//选择两种检索模式
{
	//后勤服务人员
	ifstream infile("logistician.txt", ios::in);
	if (!infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Logistician read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char wrk_item[10]; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> wrk_item >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, wrk_item, incumbenc);
		}
	}
	infile.close();
	//选择检索模式
	if (d == '1')
	{
		cout << "               请输入被查询者工号                " << endl;
		cout << "-------------------------------------------------" << endl;
		char num[8];
		int memory = 0, flag = 0;
		cout << "您的输入: ";
		cin.clear(); cin.sync();
		cin >> num;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (strcmp(read[i].GetJob_Number(), num) == 0)
				{
					flag = 1;
					memory = i;
					break;
				}
			}
		}
		if (flag == 1)
		{
			cout << "             找到结果，完整信息如下              " << endl;
			cout << "-------------------------------------------------" << endl;
			read[memory].PrintAll();
			cout << "-------------------------------------------------" << endl;
			cout << endl << endl;
		}
		else
		{
			cout << "-------------------------------------------------" << endl;
			cout << "                未能找到相应结果                 " << endl;
			cout << "-------------------------------------------------" << endl;
		}
	}
	if (d == '2')
	{
		cout << "             请输入要筛选的职务名称              " << endl;
		cout << "-------------------------------------------------" << endl;
		char wrk[10];
		cout << "您的输入: ";
		cin.clear(); cin.sync();
		cin >> wrk;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (strcmp(read[i].GetWork_Item(), wrk) == 0)
				{
					cout << "-------------------------------------------------" << endl;
					read[i].PrintAll();
					cout << "-------------------------------------------------" << endl;
				}
			}
		}
		cout << endl << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "            以上是所有符合条件的结果             " << endl;
		cout << "-------------------------------------------------" << endl;
	}

}

void ReadingOutsider(char d)//选择两种检索模式
{
	//外编人员
	ifstream infile("outsider.txt", ios::in);
	if (!infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Outsider read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20];  char compan[15]; char fiel[10]; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> compan >> fiel >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, compan, fiel, incumbenc);
		}
	}
	infile.close();
	//选择检索模式
	if (d == '1')
	{
		cout << "               请输入被查询者工号                " << endl;
		cout << "-------------------------------------------------" << endl;
		char num[8];
		int memory = 0, flag = 0;
		cout << "您的输入: ";
		cin.clear(); cin.sync();
		cin >> num;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (strcmp(read[i].GetJob_Number(), num) == 0)
				{
					flag = 1;
					memory = i;
					break;
				}
			}
		}
		if (flag == 1)
		{
			cout << "             找到结果，完整信息如下              " << endl;
			cout << "-------------------------------------------------" << endl;
			read[memory].PrintAll();
			cout << "-------------------------------------------------" << endl;
			cout << endl << endl;
		}
		else
		{
			cout << "-------------------------------------------------" << endl;
			cout << "                未能找到相应结果                 " << endl;
			cout << "-------------------------------------------------" << endl;
		}
	}
	if (d == '2')
	{
		cout << "             请输入要筛选的在职状态              " << endl;
		cout << "-------------------------------------------------" << endl;
		bool incum;
		cout << "您的输入: ";
		cin.clear(); cin.sync();
		cin >> incum;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (read[i].GetIncumbency() == incum)
				{
					cout << "-------------------------------------------------" << endl;
					read[i].PrintAll();
					cout << "-------------------------------------------------" << endl;
				}
			}
		}
		cout << endl << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "            以上是所有符合条件的结果             " << endl;
		cout << "-------------------------------------------------" << endl;
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void NewClerk()
{
	//普通员工
	ifstream infile("clerk.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Clerk read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char departmen[10]; int achievemen; int ran; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> departmen >> achievemen >> ran >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, departmen, achievemen, ran, incumbenc);
		}
	}
	infile.close();
	int position = 0;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") == 0)
		{
			position = i;
		}
	}
	{
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20]; char departmen[10]; int achievemen; int ran; bool incumbenc;
		cout << "-------------------------------------------------" << endl;
		cout << "             请按照如下格式输入数据              " << endl;
		cout << "    姓名、性别、年龄、民族、生日（年月日）、     " << endl;
		cout << " 身份证号码、工号、入职日期（年月日）、电话号码、" << endl;
		cout << " 地址、国籍、电子邮箱、部门、业绩、等级、在职状况" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "您的输入：";
		cin >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
			tel >> add >> natio >> emai >> departmen >> achievemen >> ran >> incumbenc;
		cout << endl << endl;
		read[position].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
			tel, add, natio, emai, departmen, achievemen, ran, incumbenc);
	}
	ofstream outfile("clerk.txt", ios::out);
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (i < position)
			{
				outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
					(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
					<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
					read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
					<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << " " << read[i].GetDepartment() << \
					" " << read[i].GetAchievement() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() << endl;

			}
			else
			{
				outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
					(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
					<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
					read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
					<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << " " << read[i].GetDepartment() << \
					" " << read[i].GetAchievement() << " " << read[i].GetRank() << " " << read[i].GetIncumbency();
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
	cout << "                  成功写入信息                   " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "                  写入信息如下                   " << endl;
	cout << "-------------------------------------------------" << endl;
	read[position].PrintAll();
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;

}

void NewAdministrator()
{
	//管理层人员
	ifstream infile("administrator.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Administrator read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char mng_field[10]; int ran; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> mng_field >> ran >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, mng_field, ran, incumbenc);
		}
	}
	infile.close();
	int position = 0;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") == 0)
		{
			position = i;
		}
	}
	{
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20]; char mng_field[10]; int ran; bool incumbenc;
		cout << "-------------------------------------------------" << endl;
		cout << "             请按照如下格式输入数据              " << endl;
		cout << "    姓名、性别、年龄、民族、生日（年月日）、     " << endl;
		cout << " 身份证号码、工号、入职日期（年月日）、电话号码、" << endl;
		cout << "  地址、国籍、电子邮箱、管理领域、等级、在职状况 " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "您的输入：";
		cin >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
			tel >> add >> natio >> emai >> mng_field >> ran >> incumbenc;
		read[position].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
			tel, add, natio, emai, mng_field, ran, incumbenc);
	}
	ofstream outfile("administrator.txt", ios::out);
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (i < position)
			{
				outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
					(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
					<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
					read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
					<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
					" " << read[i].GetManage_Field() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() << endl;

			}
			else
			{
				outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
					(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
					<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
					read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
					<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
					" " << read[i].GetManage_Field() << " " << read[i].GetRank() << " " << read[i].GetIncumbency();
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
	cout << "                  成功写入信息                   " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "                  写入信息如下                   " << endl;
	cout << "-------------------------------------------------" << endl;
	read[position].PrintAll();
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;

}

void NewLogistician()
{
	//后勤服务人员
	ifstream infile("logistician.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Logistician read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char wrk_item[10]; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> wrk_item >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, wrk_item, incumbenc);
		}
	}
	infile.close();
	int position = 0;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") == 0)
		{
			position = i;
		}
	}
	{
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20]; char wrk_item[10]; bool incumbenc;
		cout << "-------------------------------------------------" << endl;
		cout << "             请按照如下格式输入数据              " << endl;
		cout << "    姓名、性别、年龄、民族、生日（年月日）、     " << endl;
		cout << " 身份证号码、工号、入职日期（年月日）、电话号码、" << endl;
		cout << "     地址、国籍、电子邮箱、工作项目、在职状况    " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "您的输入：";
		cin >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
			tel >> add >> natio >> emai >> wrk_item >> incumbenc;
		read[position].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
			tel, add, natio, emai, wrk_item, incumbenc);
	}
	ofstream outfile("logistician.txt", ios::out);
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (i < position)
			{
				outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
					(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
					<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
					read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
					<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
					" " << read[i].GetWork_Item() << " " << read[i].GetIncumbency() << endl;

			}
			else
			{
				outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
					(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
					<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
					read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
					<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
					" " << read[i].GetWork_Item() << " " << read[i].GetIncumbency();
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
	cout << "                  成功写入信息                   " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "                  写入信息如下                   " << endl;
	cout << "-------------------------------------------------" << endl;
	read[position].PrintAll();
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;

}

void NewOutsider()
{
	//外编人员
	ifstream infile("outsider.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Outsider read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20];  char compan[15]; char fiel[10]; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> compan >> fiel >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, compan, fiel, incumbenc);
		}
	}
	infile.close();
	int position = 0;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") == 0)
		{
			position = i;
		}
	}
	{
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20]; char compan[15]; char fiel[10]; bool incumbenc;
		cout << "-------------------------------------------------" << endl;
		cout << "             请按照如下格式输入数据              " << endl;
		cout << "    姓名、性别、年龄、民族、生日（年月日）、     " << endl;
		cout << " 身份证号码、工号、入职日期（年月日）、电话号码、" << endl;
		cout << "  地址、国籍、电子邮箱、公司、工作领域、在职状况 " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "您的输入：";
		cin >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
			tel >> add >> natio >> emai >> compan >> fiel >> incumbenc;
		cout << endl << endl;
		read[position].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
			tel, add, natio, emai, compan, fiel, incumbenc);
	}
	ofstream outfile("outsider.txt", ios::out);
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (i < position)
			{
				outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
					(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
					<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
					read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
					<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
					" " << read[i].GetCompany() << " " << read[i].GetField() << " " << read[i].GetIncumbency() << endl;

			}
			else
			{
				outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
					(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
					<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
					read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
					<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
					" " << read[i].GetCompany() << " " << read[i].GetField() << " " << read[i].GetIncumbency();
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
	cout << "                  成功写入信息                   " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "                  写入信息如下                   " << endl;
	cout << "-------------------------------------------------" << endl;
	read[position].PrintAll();
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;
}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DeleteClerk()
{
	//普通员工
	ifstream infile("clerk.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Clerk read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char departmen[10]; int achievemen; int ran; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> departmen >> achievemen >> ran >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, departmen, achievemen, ran, incumbenc);
		}
	}
	infile.close();
	cout << "-------------------------------------------------" << endl;
	cout << "             请输入要删除人员的工号              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "您的输入: ";
	cin.clear(); cin.sync();
	cin >> input;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (strcmp(read[i].GetJob_Number(), input) == 0)
			{
				memory = i;
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                 未找到相应信息                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  相关信息如下                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") == 0)
			{
				position = i - 1;
				break;
			}
		}
		ofstream outfile("clerk.txt", ios::out);
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0 && i != memory)
			{
				if (memory == position)
				{
					if (i < position - 1)
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << " " << read[i].GetDepartment() << \
							" " << read[i].GetAchievement() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() << endl;

					}
					else
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << " " << read[i].GetDepartment() << \
							" " << read[i].GetAchievement() << " " << read[i].GetRank() << " " << read[i].GetIncumbency();
					}
				}
				else
				{
					if (i < position)
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << " " << read[i].GetDepartment() << \
							" " << read[i].GetAchievement() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() << endl;

					}
					else
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << " " << read[i].GetDepartment() << \
							" " << read[i].GetAchievement() << " " << read[i].GetRank() << " " << read[i].GetIncumbency();
					}
				}
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
	cout << "                 已删除相应信息                  " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;
}

void DeleteAdministrator()
{
	//管理层
	ifstream infile("administrator.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Administrator read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char mng_field[10]; int ran; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> mng_field >> ran >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, mng_field, ran, incumbenc);
		}
	}
	infile.close();
	cout << "-------------------------------------------------" << endl;
	cout << "             请输入要删除人员的工号              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "您的输入: ";
	cin.clear(); cin.sync();
	cin >> input;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (strcmp(read[i].GetJob_Number(), input) == 0)
			{
				memory = i;
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                 未找到相应信息                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  相关信息如下                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") == 0)
			{
				position = i - 1;
				break;
			}
		}
		ofstream outfile("administrator.txt", ios::out);
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0 && i != memory)
			{
				if (memory == position)
				{
					if (i < position - 1)
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetManage_Field() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() << endl;

					}
					else
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetManage_Field() << " " << read[i].GetRank() << " " << read[i].GetIncumbency();
					}
				}
				else
				{
					if (i < position)
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetManage_Field() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() << endl;

					}
					else
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetManage_Field() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() ;
					}
				}
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
	cout << "                 已删除相应信息                  " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;
}

void DeleteLogistician()
{
	//后勤服务人员
	ifstream infile("logistician.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Logistician read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char wrk_item[10]; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> wrk_item >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, wrk_item, incumbenc);
		}
	}
	infile.close();
	cout << "-------------------------------------------------" << endl;
	cout << "             请输入要删除人员的工号              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "您的输入: ";
	cin.clear(); cin.sync();
	cin >> input;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (strcmp(read[i].GetJob_Number(), input) == 0)
			{
				memory = i;
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                 未找到相应信息                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  相关信息如下                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") == 0)
			{
				position = i - 1;
				break;
			}
		}
		ofstream outfile("logistician.txt", ios::out);
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0 && i != memory)
			{
				if (memory == position)
				{
					if (i < position - 1)
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetWork_Item() << " " << read[i].GetIncumbency() << endl;
					}
					else
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetWork_Item() << " " << read[i].GetIncumbency();
					}
				}
				else
				{
					if (i < position)
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetWork_Item() << " " << read[i].GetIncumbency() << endl;
					}
					else
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetWork_Item() << " " << read[i].GetIncumbency();
					}
				}
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
	cout << "                 已删除相应信息                  " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;
}

void DeleteOutsider()
{
	//后勤服务人员
	ifstream infile("outsider.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Outsider read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20];  char compan[15]; char fiel[10]; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> compan >> fiel >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, compan, fiel, incumbenc);
		}
	}
	infile.close();
	cout << "-------------------------------------------------" << endl;
	cout << "             请输入要删除人员的工号              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "您的输入: ";
	cin.clear(); cin.sync();
	cin >> input;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (strcmp(read[i].GetJob_Number(), input) == 0)
			{
				memory = i;
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                 未找到相应信息                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  相关信息如下                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") == 0)
			{
				position = i - 1;
				break;
			}
		}
		ofstream outfile("outsider.txt", ios::out);
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0 && i != memory)
			{
				if (memory == position)
				{
					if (i < position - 1)
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetCompany() << " " << read[i].GetField() << " " << read[i].GetIncumbency() << endl;
					}
					else
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetCompany() << " " << read[i].GetField() << " " << read[i].GetIncumbency();
					}
				}
				else
				{
					if (i < position)
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetCompany() << " " << read[i].GetField() << " " << read[i].GetIncumbency() << endl;
					}
					else
					{
						outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
							(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
							<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
							read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
							<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
							" " << read[i].GetCompany() << " " << read[i].GetField() << " " << read[i].GetIncumbency() ;
					}
				}
			}
		}
	}
	cout << "-------------------------------------------------" << endl;
	cout << "                 已删除相应信息                  " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ModifyClerk()
{
	//普通员工
	ifstream infile("clerk.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Clerk read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char departmen[10]; int achievemen; int ran; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> departmen >> achievemen >> ran >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, departmen, achievemen, ran, incumbenc);
		}
	}
	infile.close();
	cout << "-------------------------------------------------" << endl;
	cout << "             请输入要修改人员的工号              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "您的输入: ";
	cin.clear(); cin.sync();
	cin >> input;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (strcmp(read[i].GetJob_Number(), input) == 0)
			{
				memory = i;
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                 未找到相应信息                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  相关信息如下                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20];
		cout << "-------------------------------------------------" << endl;
		cout << "             请按照如下格式输入数据              " << endl;
		cout << "    姓名、性别、年龄、民族、生日（年月日）、     " << endl;
		cout << " 身份证号码、工号、入职日期（年月日）、电话号码、" << endl;
		cout << "              地址、国籍、电子邮箱               " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "您的输入：";
		cin >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
			tel >> add >> natio >> emai;
		cout << endl << endl;
		read[memory].SetBasicInformation(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
			tel, add, natio, emai);

		ofstream outfile("clerk.txt", ios::out);
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") == 0)
			{
				position = i - 1;
				break;
			}
		}
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (i < position)
				{
					outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
						(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
						<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
						read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
						<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << " " << read[i].GetDepartment() << \
						" " << read[i].GetAchievement() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() << endl;

				}
				else
				{
					outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
						(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
						<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
						read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
						<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << " " << read[i].GetDepartment() << \
						" " << read[i].GetAchievement() << " " << read[i].GetRank() << " " << read[i].GetIncumbency();
				}
			}
		}
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功修改信息                   " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "                 修改后信息如下                  " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		

	}

}

void ModifyAdministrator()
{
	//管理层
	ifstream infile("administrator.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Administrator read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char mng_field[10]; int ran; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> mng_field >> ran >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, mng_field, ran, incumbenc);
		}
	}
	infile.close();
	cout << "-------------------------------------------------" << endl;
	cout << "             请输入要修改人员的工号              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "您的输入: ";
	cin.clear(); cin.sync();
	cin >> input;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (strcmp(read[i].GetJob_Number(), input) == 0)
			{
				memory = i;
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                 未找到相应信息                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  相关信息如下                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20];
		cout << "-------------------------------------------------" << endl;
		cout << "             请按照如下格式输入数据              " << endl;
		cout << "    姓名、性别、年龄、民族、生日（年月日）、     " << endl;
		cout << " 身份证号码、工号、入职日期（年月日）、电话号码、" << endl;
		cout << "              地址、国籍、电子邮箱               " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "您的输入：";
		cin >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
			tel >> add >> natio >> emai;
		cout << endl << endl;
		read[memory].SetBasicInformation(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
			tel, add, natio, emai);

		ofstream outfile("administrator.txt", ios::out);
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") == 0)
			{
				position = i - 1;
				break;
			}
		}
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (i < position)
				{
					outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
						(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
						<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
						read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
						<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
						" " << read[i].GetManage_Field() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() << endl;

				}
				else
				{
					outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
						(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
						<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
						read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
						<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
						" " << read[i].GetManage_Field() << " " << read[i].GetRank() << " " << read[i].GetIncumbency() ;
				}
			}
		}
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功修改信息                   " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "                 修改后信息如下                  " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;


	}

}

void ModifyLogistician()
{
	//后勤服务员工
	ifstream infile("logistician.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Logistician read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20]; char wrk_item[10]; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> wrk_item >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, wrk_item, incumbenc);
		}
	}
	infile.close();
	cout << "-------------------------------------------------" << endl;
	cout << "             请输入要修改人员的工号              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "您的输入: ";
	cin.clear(); cin.sync();
	cin >> input;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (strcmp(read[i].GetJob_Number(), input) == 0)
			{
				memory = i;
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                 未找到相应信息                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  相关信息如下                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20];
		cout << "-------------------------------------------------" << endl;
		cout << "             请按照如下格式输入数据              " << endl;
		cout << "    姓名、性别、年龄、民族、生日（年月日）、     " << endl;
		cout << " 身份证号码、工号、入职日期（年月日）、电话号码、" << endl;
		cout << "              地址、国籍、电子邮箱               " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "您的输入：";
		cin >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
			tel >> add >> natio >> emai;
		cout << endl << endl;
		read[memory].SetBasicInformation(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
			tel, add, natio, emai);

		ofstream outfile("logistician.txt", ios::out);
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") == 0)
			{
				position = i - 1;
				break;
			}
		}
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (i < position)
				{
					outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
						(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
						<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
						read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
						<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
						" " << read[i].GetWork_Item() << " " << read[i].GetIncumbency() << endl;

				}
				else
				{
					outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
						(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
						<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
						read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
						<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
						" " << read[i].GetWork_Item() << " " << read[i].GetIncumbency();
				}
			}
		}
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功修改信息                   " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "                 修改后信息如下                  " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;


	}

}


void ModifyOutsider()
{
	//外编人员
	ifstream infile("outsider.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功打开文件                   " << endl;
		cout << "-------------------------------------------------" << endl;
	}
	Outsider read[50];
	for (int i = 0; i < 50; i++)
	{
		if (infile.peek() != EOF)
		{
			char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
				char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
				char natio[10]; char emai[20];  char compan[15]; char fiel[10]; bool incumbenc;
			infile >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
				tel >> add >> natio >> emai >> compan >> fiel >> incumbenc;
			read[i].SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
				tel, add, natio, emai, compan, fiel, incumbenc);
		}
	}
	infile.close();
	cout << "-------------------------------------------------" << endl;
	cout << "             请输入要修改人员的工号              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "您的输入: ";
	cin.clear(); cin.sync();
	cin >> input;
	for (int i = 0; i < 50; i++)
	{
		if (strcmp(read[i].GetName(), "u") != 0)
		{
			if (strcmp(read[i].GetJob_Number(), input) == 0)
			{
				memory = i;
				flag = 1;
			}
		}
	}
	if (flag == 0)
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                 未找到相应信息                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  相关信息如下                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20];
		cout << "-------------------------------------------------" << endl;
		cout << "             请按照如下格式输入数据              " << endl;
		cout << "    姓名、性别、年龄、民族、生日（年月日）、     " << endl;
		cout << " 身份证号码、工号、入职日期（年月日）、电话号码、" << endl;
		cout << "              地址、国籍、电子邮箱               " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "您的输入：";
		cin >> nam >> se >> ag >> ethni >> birthday_y >> birthday_m >> birthday_d >> ID >> job_num >> onboard_y >> onboard_m >> onboard_d >> \
			tel >> add >> natio >> emai;
		cout << endl << endl;
		read[memory].SetBasicInformation(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, \
			tel, add, natio, emai);

		ofstream outfile("outsider.txt", ios::out);
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") == 0)
			{
				position = i - 1;
				break;
			}
		}
		for (int i = 0; i < 50; i++)
		{
			if (strcmp(read[i].GetName(), "u") != 0)
			{
				if (i < position)
				{
					outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
						(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
						<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
						read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
						<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
						" " << read[i].GetCompany() << " " << read[i].GetField() << " " << read[i].GetIncumbency() << endl;

				}
				else
				{
					outfile << read[i].GetName() << " " << read[i].GetSex() << " " << read[i].GetAge() << " " << read[i].GetEthnic() << " " << \
						(read[i].GetBirthday()).GetYear() << " " << (read[i].GetBirthday()).GetMonth() << " " << (read[i].GetBirthday()).GetDay()\
						<< " " << read[i].GetID() << " " << read[i].GetJob_Number() << " " << (read[i].Get_OnboardingDate()).GetYear() << " " << \
						read[i].Get_OnboardingDate().GetMonth() << " " << read[i].Get_OnboardingDate().GetDay() << " " << read[i].GetTelephone()\
						<< " " << read[i].GetAddress() << " " << read[i].GetNation() << " " << read[i].GetEmail() << \
						" " << read[i].GetCompany() << " " << read[i].GetField() << " " << read[i].GetIncumbency() ;
				}
			}
		}
		cout << "-------------------------------------------------" << endl;
		cout << "                  成功修改信息                   " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "                 修改后信息如下                  " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;


	}

}