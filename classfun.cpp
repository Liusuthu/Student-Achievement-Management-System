#include"declaration.h"




//Date类
	Date::Date(int y , int m , int d)
	{
		year = y; month = m; day = d;
	};
	void Date::SetDate(int y, int m, int d)
	{
		year = y; month = m; day = d;
	}
	Date Date::GetDate()
	{
		return *this;
	}
	int Date::GetYear()
	{
		return year;
	}
	int Date::GetMonth()
	{
		return month;
	}
	int Date::GetDay()
	{
		return day;
	}



//BasicInformation类
		//构造函数
	BasicInformation::BasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai)
	{
		strcpy(name, nam);
		strcpy(sex, se);
		age = ag;
		strcpy(ethnic, ethni);
		birthday.SetDate(birthday_y, birthday_m, birthday_d);
		strcpy(id, ID);
		strcpy(job_number, job_num);
		onboarding_date.SetDate(onboard_y, onboard_m, onboard_d);
		strcpy(telephone, tel);
		strcpy(address, add);
		strcpy(nation, natio);
		strcpy(email, emai);
	}
	BasicInformation::BasicInformation()
	{
		strcpy(name, "u");//unknown
		strcpy(sex, "u");
		age = 0;
		strcpy(ethnic, "u");
		birthday = Date();
		strcpy(id, "u");
		strcpy(job_number, "u");
		onboarding_date = Date();
		strcpy(telephone, "u");
		strcpy(address, "u");
		strcpy(nation, "u");
		strcpy(email, "u");
	}
	void BasicInformation::SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai)
	{
		strcpy(name, nam);
		strcpy(sex, se);
		age = ag;
		strcpy(ethnic, ethni);
		birthday.SetDate(birthday_y, birthday_m, birthday_d);
		strcpy(id, ID);
		strcpy(job_number, job_num);
		onboarding_date.SetDate(onboard_y, onboard_m, onboard_d);
		strcpy(telephone, tel);
		strcpy(address, add);
		strcpy(nation, natio);
		strcpy(email, emai);
	}
		//Get函数
		char* BasicInformation::GetName()
		{
			return name;
		}
		char* BasicInformation::GetSex()
		{
			return sex;
		}
		int BasicInformation::GetAge()
		{
			return age;
		}
		char* BasicInformation::GetEthnic()
		{
			return ethnic;
		}
		Date BasicInformation::GeteBirthday()
		{
			Date date = birthday;
			return date;
		}
		char* BasicInformation::GetID()
		{
			return id;
		}
		char* BasicInformation::GetJob_Number()
		{
			return job_number;
		}
		Date BasicInformation::GetOnoarding_Date()
		{
			Date date = onboarding_date;
			return date;
		}
		char* BasicInformation::GetTelephone()
		{
			return telephone;
		}
		char* BasicInformation::GetAddress()
		{
			return address;
		}
		char* BasicInformation::GetNation()
		{
			return nation;
		}
		char* BasicInformation::GetEmail()
		{
			return email;
		}
		//Set函数
		void BasicInformation::SetName(char* nam)
		{
			strcpy(name, nam);
		}
		void BasicInformation::SetSex(char* se)
		{
			strcpy(sex, se);
		}
		void BasicInformation::SetAge(int ag)
		{
			age = ag;
		}
		void BasicInformation::SetEthnic(char* ethni)
		{
			strcpy(ethnic, ethni);
		}
		void BasicInformation::SetBirthday(int y, int m, int d)
		{
			birthday.SetDate(y, m, d);
		}
		void BasicInformation::SetID(char* ID)
		{
			strcpy(id, ID);
		}
		void BasicInformation::SetJob_Number(char* job_num)
		{
			strcpy(job_number, job_num);
		}
		void BasicInformation::SetOnboarding_Date(int y, int m, int d)
		{
			onboarding_date.SetDate(y, m, d);
		}
		void BasicInformation::SetTelephone(char* tel)
		{
			strcpy(telephone, tel);
		}
		void BasicInformation::SetAddress(char* add)
		{
			strcpy(address, add);
		}
		void BasicInformation::SetNation(char* natio)
		{
			strcpy(nation, natio);
		}
		void BasicInformation::SetEmail(char* emai)
		{
			strcpy(email, emai);
		}
		//Show函数
		void BasicInformation::ShowAll()
		{
			cout << "Name: " << name << endl;
			cout << "Sex: " << sex << endl;
			cout << "Age: " << age << endl;
			cout << "Ethnic: " << ethnic << endl;
			cout << "Birthday: " << birthday.year << "/" << birthday.month << "/" << birthday.day << endl;
			cout << "ID: " << id << endl;
			cout << "Job Number: " << job_number<<endl;
			cout << "Onboarding Date: " << onboarding_date.year << "/" << onboarding_date.month << "/" << onboarding_date.day << endl;
			cout << "Telephone: " << telephone << endl;
			cout << "Address: " << address << endl;
			cout << "Nation: " << nation << endl;
			cout << "Email: " << email << endl;
		}
		void BasicInformation::ShowIdentifyingInformation()
		{
			cout << "Name: " << name << endl;
			cout << "Sex: " << sex << endl;
			cout << "Age: " << age << endl;
			cout << "Ethnic: " << ethnic << endl;
			cout << "Birthday: " << birthday.year << "/" << birthday.month << "/" << birthday.day << endl;
			cout << "ID: " << id << endl;
			cout << "Job Number: " << job_number<<endl;
			cout << "Onboarding Date: " << onboarding_date.year << "/" << onboarding_date.month << "/" << onboarding_date.day << endl;
		}
		void BasicInformation::ShowCommunicationMethod()
		{
			cout << "Name: " << name << endl;
			cout << "Sex: " << sex << endl;
			cout << "Job Number: " << job_number<<endl;
			cout << "Telephone: " << telephone << endl;
			cout << "Address: " << address << endl;
			cout << "Email: " << email << endl;
		}




//Clerk类
	Clerk::Clerk(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* departmen, int achievemen, int ran, bool incumbenc):People(nam,\
			se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, \
			onboard_d, tel, add, natio, emai)
	{
		strcpy(department, departmen);
		achievement = achievemen;
		rank = ran;
		incumbency = incumbenc;
	}
	Clerk::Clerk() :People()
	{
		strcpy(department, "u");
		achievement = 0;
		rank = 0;
		incumbency = 0;
	}
	//Set函数
	void Clerk::SetName(char* nam)
	{
		Information.SetName(nam);
	}
	void Clerk::SetSex(char* se)
	{
		Information.SetSex(se);
	}
	void Clerk::SetAge(int ag)
	{
		Information.SetAge(ag);
	}
	void Clerk::SetEthnic(char* ethni)
	{
		Information.SetEthnic(ethni);
	}
	void Clerk::SetBirthday(int y, int m, int d)
	{
		Information.SetBirthday(y, m, d);
	}
	void Clerk::SetID(char* ID)
	{
		Information.SetID(ID);
	}
	void Clerk::SetJob_Number(char* job_num)
	{
		Information.SetJob_Number(job_num);
	}
	void Clerk::SetOnboarding_Date(int y, int m, int d)
	{
		Information.SetOnboarding_Date(y, m, d);
	}
	void Clerk::SetTelephone(char* tel)
	{
		Information.SetTelephone(tel);
	}
	void Clerk::SetAddress(char* add)
	{
		Information.SetAddress(add);
	}
	void Clerk::SetNation(char* natio)
	{
		Information.SetNation(natio);
	}
	void Clerk::SetEmail(char* emai)
	{
		Information.SetEmail(emai);
	}
	void Clerk::SetDepartment(char* departmen)
	{
		strcpy(department, departmen);
	}
	void Clerk::SetAchievement(int achievemen)
	{
		achievement = achievemen;
	}
	void Clerk::SetRank(int ran)
	{
		rank = ran;
	}
	void Clerk::SetIncumbency(bool incumbenc)
	{
		incumbency = incumbenc;
	}
	void Clerk::SetBasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai)
	{
		Information.SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, tel, add, natio, emai);
	}
	void Clerk::SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* departmen, int achievemen, int ran, bool incumbenc)
	{
		Information.SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, tel, add, natio, emai);
		strcpy(department, departmen);
		achievement = achievemen;
		rank = ran;
		incumbency = incumbenc;
	}
	//Get函数
	char* Clerk::GetName()
	{
		return Information.GetName();
	}
	char* Clerk::GetSex()
	{
		return Information.GetSex();
	}
	int Clerk::GetAge()
	{
		return Information.GetAge();
	}
	char* Clerk::GetEthnic()
	{
		return Information.GetEthnic();
	}
	Date Clerk::GetBirthday()
	{
		return Information.GeteBirthday();
	}
	char* Clerk::GetID()
	{
		return Information.GetID();
	}
	char* Clerk::GetJob_Number()
	{
		return Information.GetJob_Number();
	}
	Date Clerk::Get_OnboardingDate()
	{
		return Information.GetOnoarding_Date();
	}
	char* Clerk::GetTelephone()
	{
		return Information.GetTelephone();
	}
	char* Clerk::GetAddress()
	{
		return Information.GetAddress();
	}
	char* Clerk::GetNation()
	{
		return Information.GetNation();
	}
	char* Clerk::GetEmail()
	{
		return Information.GetEmail();
	}
	char* Clerk::GetDepartment()
	{
		return department;
	}
	int Clerk::GetAchievement()
	{
		return achievement;
	}
	int Clerk::GetRank()
	{
		return rank;
	}
	bool Clerk::GetIncumbency()
	{
		return incumbency;
	}
	//计算在职年份
	int Clerk::GetWorkingDuraton()
	{
		int time;
		Date in;
		in = Information.GetOnoarding_Date();
		time = 2022-in.GetYear();
		return time;
	}
	//计算工资
	int Clerk::GetSalary()
	{
		//底薪6000，职位每高一级加2000，在职年份每多一年加100，少数民族每月补贴500
		//若是退休，底薪3000，职位高一级加1000，离入职多一年多20
		int salary,flag,duration;
		if (strcmp(Information.GetEthnic(), "Han") != 0) flag = 1;
		else flag = 0;
		duration = GetWorkingDuraton();
		if (incumbency)
		{
			salary = 6000 + 2000 * rank + 100 * duration + flag * 500;
		}
		else
		{
			salary = 3000 + 1000 * rank + 20 * duration;
		}
		return salary;
	}
	//虚函数：打印全部个人信息
	void Clerk::PrintAll()
	{
		Information.ShowAll();
		cout << "Department: " << department << endl;
		cout << "Achievement: " << achievement << endl;
		cout << "Rank: " << rank << endl;
		cout << "Incumbency Condition: " << incumbency << endl;
	}



//Administrator类
		Administrator::Administrator(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
			char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
			char* natio, char* emai, char* field, int ran, bool incumbenc) :People(nam, \
				se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, \
				onboard_d, tel, add, natio, emai)
		{
			strcpy(manage_field, field);
			rank = ran;
			incumbency = incumbenc;
		}
		Administrator::Administrator() :People()
		{
			strcpy(manage_field, "u");
			rank = 0;
			incumbency = 0;
		}
		//Set函数
		void Administrator::SetName(char* nam)
		{
			Information.SetName(nam);
		}
		void Administrator::SetSex(char* se)
		{
			Information.SetSex(se);
		}
		void Administrator::SetAge(int ag)
		{
			Information.SetAge(ag);
		}
		void Administrator::SetEthnic(char* ethni)
		{
			Information.SetEthnic(ethni);
		}
		void Administrator::SetBirthday(int y, int m, int d)
		{
			Information.SetBirthday(y, m, d);
		}
		void Administrator::SetID(char* ID)
		{
			Information.SetID(ID);
		}
		void Administrator::SetJob_Number(char* job_num)
		{
			Information.SetJob_Number(job_num);
		}
		void Administrator::SetOnboarding_Date(int y, int m, int d)
		{
			Information.SetOnboarding_Date(y, m, d);
		}
		void Administrator::SetTelephone(char* tel)
		{
			Information.SetTelephone(tel);
		}
		void Administrator::SetAddress(char* add)
		{
			Information.SetAddress(add);
		}
		void Administrator::SetNation(char* natio)
		{
			Information.SetNation(natio);
		}
		void Administrator::SetEmail(char* emai)
		{
			Information.SetEmail(emai);
		}
		void Administrator::SetManage_Field(char* field)
		{
			strcpy(manage_field, field);
		}
		void Administrator::SetRank(int ran)
		{
			rank = ran;
		}
		void Administrator::SetIncumbency(bool incumbenc)
		{
			incumbency = incumbenc;
		}
		void Administrator::SetBasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
			char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai)
		{
			Information.SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, tel, add, natio, emai);
		}
		void Administrator::SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
			char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
			char* natio, char* emai, char* field, int ran, bool incumbenc)
		{
			Information.SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, tel, add, natio, emai);
			strcpy(manage_field, field);
			rank = ran;
			incumbency = incumbenc;
		}
		//Get函数
		char* Administrator::GetName()
		{
			return Information.GetName();
		}
		char* Administrator::GetSex()
		{
			return Information.GetSex();
		}
		int Administrator::GetAge()
		{
			return Information.GetAge();
		}
		char* Administrator::GetEthnic()
		{
			return Information.GetEthnic();
		}
		Date Administrator::GetBirthday()
		{
			return Information.GeteBirthday();
		}
		char* Administrator::GetID()
		{
			return Information.GetID();
		}
		char* Administrator::GetJob_Number()
		{
			return Information.GetJob_Number();
		}
		Date Administrator::Get_OnboardingDate()
		{
			return Information.GetOnoarding_Date();
		}
		char* Administrator::GetTelephone()
		{
			return Information.GetTelephone();
		}
		char* Administrator::GetAddress()
		{
			return Information.GetAddress();
		}
		char* Administrator::GetNation()
		{
			return Information.GetNation();
		}
		char* Administrator::GetEmail()
		{
			return Information.GetEmail();
		}
		char* Administrator::GetManage_Field()
		{
			return manage_field;
		}
		int Administrator::GetRank()
		{
			return rank;
		}
		bool Administrator::GetIncumbency()
		{
			return incumbency;
		}
		//计算在职年份
		int Administrator::GetWorkingDuraton()
		{
			int time;
			Date in;
			in = Information.GetOnoarding_Date();
			time = 2022 - in.GetYear();
			return time;
		}
		//计算工资
		int Administrator::GetSalary()
		{
			//底薪15000，职位高一级加2000
			//退休工资：底薪8000，离入职多一年多100
			int salary, duration;
			duration = GetWorkingDuraton();
			if (incumbency)
			{
				salary = 15000 + 2000 * rank;
			}
			else
			{
				salary = 8000 + 100 * duration;
			}
			return salary;
		}
		//虚函数：打印全部个人信息
		void Administrator::PrintAll()
		{
			Information.ShowAll();
			cout << "Manage Field: " << manage_field << endl;
			cout << "Rank: " << rank << endl;
			cout << "Incumbency Condition: " << incumbency << endl;
		}




//Logistician类
		Logistician::Logistician(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
			char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
			char* natio, char* emai, char* item, bool incumbenc) :People(nam, \
				se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, \
				onboard_d, tel, add, natio, emai)
		{
			strcpy(work_item, item);
			incumbency = incumbenc;
		}
		Logistician::Logistician() :People()
		{
			strcpy(work_item, "u");
			incumbency = 0;
		}
		//Set函数
		void Logistician::SetName(char* nam)
		{
			Information.SetName(nam);
		}
		void Logistician::SetSex(char* se)
		{
			Information.SetSex(se);
		}
		void Logistician::SetAge(int ag)
		{
			Information.SetAge(ag);
		}
		void Logistician::SetEthnic(char* ethni)
		{
			Information.SetEthnic(ethni);
		}
		void Logistician::SetBirthday(int y, int m, int d)
		{
			Information.SetBirthday(y, m, d);
		}
		void Logistician::SetID(char* ID)
		{
			Information.SetID(ID);
		}
		void Logistician::SetJob_Number(char* job_num)
		{
			Information.SetJob_Number(job_num);
		}
		void Logistician::SetOnboarding_Date(int y, int m, int d)
		{
			Information.SetOnboarding_Date(y, m, d);
		}
		void Logistician::SetTelephone(char* tel)
		{
			Information.SetTelephone(tel);
		}
		void Logistician::SetAddress(char* add)
		{
			Information.SetAddress(add);
		}
		void Logistician::SetNation(char* natio)
		{
			Information.SetNation(natio);
		}
		void Logistician::SetEmail(char* emai)
		{
			Information.SetEmail(emai);
		}
		void Logistician::SetWork_Item(char* item)
		{
			strcpy(work_item, item);
		}
		void Logistician::SetIncumbency(bool incumbenc)
		{
			incumbency = incumbenc;
		}
		void Logistician::SetBasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
			char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai)
		{
			Information.SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, tel, add, natio, emai);
		}
		void Logistician::SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
			char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
			char* natio, char* emai, char* item, bool incumbenc)
		{
			Information.SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, tel, add, natio, emai);
			strcpy(work_item, item);
			incumbency = incumbenc;
		}
		//Get函数
		char* Logistician::GetName()
		{
			return Information.GetName();
		}
		char* Logistician::GetSex()
		{
			return Information.GetSex();
		}
		int Logistician::GetAge()
		{
			return Information.GetAge();
		}
		char* Logistician::GetEthnic()
		{
			return Information.GetEthnic();
		}
		Date Logistician::GetBirthday()
		{
			return Information.GeteBirthday();
		}
		char* Logistician::GetID()
		{
			return Information.GetID();
		}
		char* Logistician::GetJob_Number()
		{
			return Information.GetJob_Number();
		}
		Date Logistician::Get_OnboardingDate()
		{
			return Information.GetOnoarding_Date();
		}
		char* Logistician::GetTelephone()
		{
			return Information.GetTelephone();
		}
		char* Logistician::GetAddress()
		{
			return Information.GetAddress();
		}
		char* Logistician::GetNation()
		{
			return Information.GetNation();
		}
		char* Logistician::GetEmail()
		{
			return Information.GetEmail();
		}
		char* Logistician::GetWork_Item()
		{
			return work_item;
		}
		bool Logistician::GetIncumbency()
		{
			return incumbency;
		}
		//计算工资
		int Logistician::GetSalary()
		{
			int salary;
			if (incumbency)
			{
				if (strcmp(work_item, "cleaning") != 0) { salary = 3000; }
				else { salary = 4000; }
			}
			else {
				salary = 0;
			}
			return salary;
		}
		//虚函数：打印所有信息
		void Logistician::PrintAll()
		{
			Information.ShowAll();
			cout << "Work Item: " << work_item << endl;
			cout << "Incumbency Condition: " << incumbency << endl;
		}
	




//Outsider类
		Outsider::Outsider(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
			char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
			char* natio, char* emai, char* compan, char* fiel, bool incumbenc) :People(nam, \
				se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, \
				onboard_d, tel, add, natio, emai)
		{
			strcpy(field, fiel);
			strcpy(company, compan);
			incumbency = incumbenc;
		}
		Outsider::Outsider() :People()
		{
			strcpy(field, "u");
			strcpy(company, "u");
			incumbency = 0;
		}
		//Set函数
		void Outsider::SetName(char* nam)
		{
			Information.SetName(nam);
		}
		void Outsider::SetSex(char* se)
		{
			Information.SetSex(se);
		}
		void Outsider::SetAge(int ag)
		{
			Information.SetAge(ag);
		}
		void Outsider::SetEthnic(char* ethni)
		{
			Information.SetEthnic(ethni);
		}
		void Outsider::SetBirthday(int y, int m, int d)
		{
			Information.SetBirthday(y, m, d);
		}
		void Outsider::SetID(char* ID)
		{
			Information.SetID(ID);
		}
		void Outsider::SetJob_Number(char* job_num)
		{
			Information.SetJob_Number(job_num);
		}
		void Outsider::SetOnboarding_Date(int y, int m, int d)
		{
			Information.SetOnboarding_Date(y, m, d);
		}
		void Outsider::SetTelephone(char* tel)
		{
			Information.SetTelephone(tel);
		}
		void Outsider::SetAddress(char* add)
		{
			Information.SetAddress(add);
		}
		void Outsider::SetNation(char* natio)
		{
			Information.SetNation(natio);
		}
		void Outsider::SetEmail(char* emai)
		{
			Information.SetEmail(emai);
		}
		void Outsider::SetField(char* fiel)
		{
			strcpy(field, fiel);
		}
		void Outsider::SetCompany(char* compan)
		{
			strcpy(company, compan);
		}
		void Outsider::SetIncumbency(bool incumbenc)
		{
			incumbency = incumbenc;
		}
		void Outsider::SetBasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
			char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai)
		{
			Information.SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, tel, add, natio, emai);
		}
		void Outsider::SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
			char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
			char* natio, char* emai, char* compan, char* fiel, bool incumbenc)
		{
			Information.SetAll(nam, se, ag, ethni, birthday_y, birthday_m, birthday_d, ID, job_num, onboard_y, onboard_m, onboard_d, tel, add, natio, emai);
			strcpy(field, fiel);
			strcpy(company, compan);
			incumbency = incumbenc;
		}
		//Get函数
		char* Outsider::GetName()
		{
			return Information.GetName();
		}
		char* Outsider::GetSex()
		{
			return Information.GetSex();
		}
		int Outsider::GetAge()
		{
			return Information.GetAge();
		}
		char* Outsider::GetEthnic()
		{
			return Information.GetEthnic();
		}
		Date Outsider::GetBirthday()
		{
			return Information.GeteBirthday();
		}
		char* Outsider::GetID()
		{
			return Information.GetID();
		}
		char* Outsider::GetJob_Number()
		{
			return Information.GetJob_Number();
		}
		Date Outsider::Get_OnboardingDate()
		{
			return Information.GetOnoarding_Date();
		}
		char* Outsider::GetTelephone()
		{
			return Information.GetTelephone();
		}
		char* Outsider::GetAddress()
		{
			return Information.GetAddress();
		}
		char* Outsider::GetNation()
		{
			return Information.GetNation();
		}
		char* Outsider::GetEmail()
		{
			return Information.GetEmail();
		}
		char* Outsider::GetField()
		{
			return field;
		}
		char* Outsider::GetCompany()
		{
			return company;
		}
		bool Outsider::GetIncumbency()
		{
			return incumbency;
		}
		//计算工资
		int Outsider::GetSalary()
		{
			//底薪15000，职位高一级加2000
			//退休工资：底薪8000，离入职多一年多100
			int salary;
			if (incumbency)
			{
				salary = 6000;
			}
			else
			{
				salary = 3000;
			}
			return salary;
		}
		//虚函数：打印所有信息
		void Outsider::PrintAll()
		{
			Information.ShowAll();
			cout << "Company: " << company << endl;
			cout << "Field: " << field << endl;
			cout << "Incumbency: " << incumbency << endl;
		}








		

		

		




		



		
		