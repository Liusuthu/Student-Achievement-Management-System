#include"declaration.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ReadingClerk(char d)//dѡ�����ּ���ģʽ
{
	//��ͨԱ��
	ifstream infile("clerk.txt", ios::in);
	if (!infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	//ѡ�����ģʽ
	if (d == '1')
	{
		cout << "               �����뱻��ѯ�߹���                " << endl;
		cout << "-------------------------------------------------" << endl;
		char num[8];
		int memory = 0, flag = 0;
		cout << "��������: ";
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
			cout << "             �ҵ������������Ϣ����              " << endl;
			cout << "-------------------------------------------------" << endl;
			read[memory].PrintAll();
			cout << "-------------------------------------------------" << endl;
			cout << endl << endl;
		}
		else
		{
			cout << "-------------------------------------------------" << endl;
			cout << "                δ���ҵ���Ӧ���                 " << endl;
			cout << "-------------------------------------------------" << endl;
		}
	}
	if (d == '2')
	{
		cout << "             ������Ҫɸѡ�Ĳ�������              " << endl;
		cout << "-------------------------------------------------" << endl;
		char dept[10];
		cout << "��������: ";
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
		cout << "            ���������з��������Ľ��             " << endl;
		cout << "-------------------------------------------------" << endl;
	}

}


void ReadingAdministrator(char d)//ѡ�����ּ���ģʽ
{
	//�������Ա
	ifstream infile("administrator.txt", ios::in);
	if (!infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	//ѡ�����ģʽ
	if (d == '1')
	{
		cout << "               �����뱻��ѯ�߹���                " << endl;
		cout << "-------------------------------------------------" << endl;
		char num[8];
		int memory = 0, flag = 0;
		cout << "��������: ";
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
			cout << "             �ҵ������������Ϣ����              " << endl;
			cout << "-------------------------------------------------" << endl;
			read[memory].PrintAll();
			cout << "-------------------------------------------------" << endl;
			cout << endl << endl;
		}
		else
		{
			cout << "-------------------------------------------------" << endl;
			cout << "                δ���ҵ���Ӧ���                 " << endl;
			cout << "-------------------------------------------------" << endl;
		}
	}
	if (d == '2')
	{
		cout << "              ������Ҫɸѡ�ĵȼ���               " << endl;
		cout << "-------------------------------------------------" << endl;
		int ran;
		cout << "��������: ";
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
		cout << "            ���������з��������Ľ��             " << endl;
		cout << "-------------------------------------------------" << endl;
	}

}

void ReadingLogistician(char d)//ѡ�����ּ���ģʽ
{
	//���ڷ�����Ա
	ifstream infile("logistician.txt", ios::in);
	if (!infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	//ѡ�����ģʽ
	if (d == '1')
	{
		cout << "               �����뱻��ѯ�߹���                " << endl;
		cout << "-------------------------------------------------" << endl;
		char num[8];
		int memory = 0, flag = 0;
		cout << "��������: ";
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
			cout << "             �ҵ������������Ϣ����              " << endl;
			cout << "-------------------------------------------------" << endl;
			read[memory].PrintAll();
			cout << "-------------------------------------------------" << endl;
			cout << endl << endl;
		}
		else
		{
			cout << "-------------------------------------------------" << endl;
			cout << "                δ���ҵ���Ӧ���                 " << endl;
			cout << "-------------------------------------------------" << endl;
		}
	}
	if (d == '2')
	{
		cout << "             ������Ҫɸѡ��ְ������              " << endl;
		cout << "-------------------------------------------------" << endl;
		char wrk[10];
		cout << "��������: ";
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
		cout << "            ���������з��������Ľ��             " << endl;
		cout << "-------------------------------------------------" << endl;
	}

}

void ReadingOutsider(char d)//ѡ�����ּ���ģʽ
{
	//�����Ա
	ifstream infile("outsider.txt", ios::in);
	if (!infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	//ѡ�����ģʽ
	if (d == '1')
	{
		cout << "               �����뱻��ѯ�߹���                " << endl;
		cout << "-------------------------------------------------" << endl;
		char num[8];
		int memory = 0, flag = 0;
		cout << "��������: ";
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
			cout << "             �ҵ������������Ϣ����              " << endl;
			cout << "-------------------------------------------------" << endl;
			read[memory].PrintAll();
			cout << "-------------------------------------------------" << endl;
			cout << endl << endl;
		}
		else
		{
			cout << "-------------------------------------------------" << endl;
			cout << "                δ���ҵ���Ӧ���                 " << endl;
			cout << "-------------------------------------------------" << endl;
		}
	}
	if (d == '2')
	{
		cout << "             ������Ҫɸѡ����ְ״̬              " << endl;
		cout << "-------------------------------------------------" << endl;
		bool incum;
		cout << "��������: ";
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
		cout << "            ���������з��������Ľ��             " << endl;
		cout << "-------------------------------------------------" << endl;
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void NewClerk()
{
	//��ͨԱ��
	ifstream infile("clerk.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
		cout << "             �밴�����¸�ʽ��������              " << endl;
		cout << "    �������Ա����䡢���塢���գ������գ���     " << endl;
		cout << " ���֤���롢���š���ְ���ڣ������գ����绰���롢" << endl;
		cout << " ��ַ���������������䡢���š�ҵ�����ȼ�����ְ״��" << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "�������룺";
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
	cout << "                  �ɹ�д����Ϣ                   " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "                  д����Ϣ����                   " << endl;
	cout << "-------------------------------------------------" << endl;
	read[position].PrintAll();
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;

}

void NewAdministrator()
{
	//�������Ա
	ifstream infile("administrator.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
		cout << "             �밴�����¸�ʽ��������              " << endl;
		cout << "    �������Ա����䡢���塢���գ������գ���     " << endl;
		cout << " ���֤���롢���š���ְ���ڣ������գ����绰���롢" << endl;
		cout << "  ��ַ���������������䡢�������򡢵ȼ�����ְ״�� " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "�������룺";
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
	cout << "                  �ɹ�д����Ϣ                   " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "                  д����Ϣ����                   " << endl;
	cout << "-------------------------------------------------" << endl;
	read[position].PrintAll();
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;

}

void NewLogistician()
{
	//���ڷ�����Ա
	ifstream infile("logistician.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
		cout << "             �밴�����¸�ʽ��������              " << endl;
		cout << "    �������Ա����䡢���塢���գ������գ���     " << endl;
		cout << " ���֤���롢���š���ְ���ڣ������գ����绰���롢" << endl;
		cout << "     ��ַ���������������䡢������Ŀ����ְ״��    " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "�������룺";
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
	cout << "                  �ɹ�д����Ϣ                   " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "                  д����Ϣ����                   " << endl;
	cout << "-------------------------------------------------" << endl;
	read[position].PrintAll();
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;

}

void NewOutsider()
{
	//�����Ա
	ifstream infile("outsider.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
		cout << "             �밴�����¸�ʽ��������              " << endl;
		cout << "    �������Ա����䡢���塢���գ������գ���     " << endl;
		cout << " ���֤���롢���š���ְ���ڣ������գ����绰���롢" << endl;
		cout << "  ��ַ���������������䡢��˾������������ְ״�� " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "�������룺";
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
	cout << "                  �ɹ�д����Ϣ                   " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "                  д����Ϣ����                   " << endl;
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
	//��ͨԱ��
	ifstream infile("clerk.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	cout << "             ������Ҫɾ����Ա�Ĺ���              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "��������: ";
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
		cout << "                 δ�ҵ���Ӧ��Ϣ                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �����Ϣ����                   " << endl;
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
	cout << "                 ��ɾ����Ӧ��Ϣ                  " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;
}

void DeleteAdministrator()
{
	//�����
	ifstream infile("administrator.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	cout << "             ������Ҫɾ����Ա�Ĺ���              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "��������: ";
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
		cout << "                 δ�ҵ���Ӧ��Ϣ                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �����Ϣ����                   " << endl;
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
	cout << "                 ��ɾ����Ӧ��Ϣ                  " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;
}

void DeleteLogistician()
{
	//���ڷ�����Ա
	ifstream infile("logistician.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	cout << "             ������Ҫɾ����Ա�Ĺ���              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "��������: ";
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
		cout << "                 δ�ҵ���Ӧ��Ϣ                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �����Ϣ����                   " << endl;
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
	cout << "                 ��ɾ����Ӧ��Ϣ                  " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;
}

void DeleteOutsider()
{
	//���ڷ�����Ա
	ifstream infile("outsider.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	cout << "             ������Ҫɾ����Ա�Ĺ���              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "��������: ";
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
		cout << "                 δ�ҵ���Ӧ��Ϣ                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �����Ϣ����                   " << endl;
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
	cout << "                 ��ɾ����Ӧ��Ϣ                  " << endl;
	cout << "-------------------------------------------------" << endl;
	cout << endl << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ModifyClerk()
{
	//��ͨԱ��
	ifstream infile("clerk.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	cout << "             ������Ҫ�޸���Ա�Ĺ���              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "��������: ";
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
		cout << "                 δ�ҵ���Ӧ��Ϣ                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �����Ϣ����                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20];
		cout << "-------------------------------------------------" << endl;
		cout << "             �밴�����¸�ʽ��������              " << endl;
		cout << "    �������Ա����䡢���塢���գ������գ���     " << endl;
		cout << " ���֤���롢���š���ְ���ڣ������գ����绰���롢" << endl;
		cout << "              ��ַ����������������               " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "�������룺";
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
		cout << "                  �ɹ��޸���Ϣ                   " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "                 �޸ĺ���Ϣ����                  " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		

	}

}

void ModifyAdministrator()
{
	//�����
	ifstream infile("administrator.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	cout << "             ������Ҫ�޸���Ա�Ĺ���              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "��������: ";
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
		cout << "                 δ�ҵ���Ӧ��Ϣ                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �����Ϣ����                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20];
		cout << "-------------------------------------------------" << endl;
		cout << "             �밴�����¸�ʽ��������              " << endl;
		cout << "    �������Ա����䡢���塢���գ������գ���     " << endl;
		cout << " ���֤���롢���š���ְ���ڣ������գ����绰���롢" << endl;
		cout << "              ��ַ����������������               " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "�������룺";
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
		cout << "                  �ɹ��޸���Ϣ                   " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "                 �޸ĺ���Ϣ����                  " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;


	}

}

void ModifyLogistician()
{
	//���ڷ���Ա��
	ifstream infile("logistician.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	cout << "             ������Ҫ�޸���Ա�Ĺ���              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "��������: ";
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
		cout << "                 δ�ҵ���Ӧ��Ϣ                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �����Ϣ����                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20];
		cout << "-------------------------------------------------" << endl;
		cout << "             �밴�����¸�ʽ��������              " << endl;
		cout << "    �������Ա����䡢���塢���գ������գ���     " << endl;
		cout << " ���֤���롢���š���ְ���ڣ������գ����绰���롢" << endl;
		cout << "              ��ַ����������������               " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "�������룺";
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
		cout << "                  �ɹ��޸���Ϣ                   " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "                 �޸ĺ���Ϣ����                  " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;


	}

}


void ModifyOutsider()
{
	//�����Ա
	ifstream infile("outsider.txt", ios::in);
	if (infile.is_open())
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �ɹ����ļ�                   " << endl;
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
	cout << "             ������Ҫ�޸���Ա�Ĺ���              " << endl;
	cout << "-------------------------------------------------" << endl;
	char input[8];
	int flag = 0, memory = 0, position = 0;
	cout << "��������: ";
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
		cout << "                 δ�ҵ���Ӧ��Ϣ                  " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;
		return;
	}
	else
	{
		cout << "-------------------------------------------------" << endl;
		cout << "                  �����Ϣ����                   " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		char nam[10]; char se[10]; int ag; char ethni[5]; int birthday_y; int birthday_m; int birthday_d; \
			char ID[17]; char job_num[8]; int onboard_y; int onboard_m; int onboard_d; char tel[12]; char add[20]; \
			char natio[10]; char emai[20];
		cout << "-------------------------------------------------" << endl;
		cout << "             �밴�����¸�ʽ��������              " << endl;
		cout << "    �������Ա����䡢���塢���գ������գ���     " << endl;
		cout << " ���֤���롢���š���ְ���ڣ������գ����绰���롢" << endl;
		cout << "              ��ַ����������������               " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "�������룺";
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
		cout << "                  �ɹ��޸���Ϣ                   " << endl;
		cout << "-------------------------------------------------" << endl;
		cout << "                 �޸ĺ���Ϣ����                  " << endl;
		cout << "-------------------------------------------------" << endl;
		read[memory].PrintAll();
		cout << "-------------------------------------------------" << endl;
		cout << endl << endl;


	}

}