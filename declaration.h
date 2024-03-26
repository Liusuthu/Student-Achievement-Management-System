#include<string.h>
#include<iostream>
#include<fstream>
#include<iomanip>
#pragma warning(disable:4996)
#pragma warning(disable:4244)
using namespace::std;


/// <下面是类的定义封装>
/// ///////////////////////////////////////////////////////////////////////////////////
/// <Date类定义>
class Date
{
public:
	Date(int y = 1900, int m = 1, int d = 1);
	void SetDate(int y, int m, int d);
	Date GetDate();
	int GetYear();
	int GetMonth();
	int GetDay();
	friend class BasicInformation;
	friend class People;
private:
	int year, month, day;
};
////////////////////////////////////////////////////////////////////////////////////////
/// <BasicInformation类定义>
class  BasicInformation
{
public:
	//构造函数
	BasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d,char* tel,char* add,char* natio,char* emai);
	BasicInformation();
	//Get函数
	char* GetName();
	char* GetSex();
	int GetAge();
	char* GetEthnic();
	Date GeteBirthday();
	char* GetID();
	char* GetJob_Number();
	Date GetOnoarding_Date();
	char* GetTelephone();
	char* GetAddress();
	char* GetNation();
	char* GetEmail();
	//Set函数
	void SetName(char* nam);
	void SetSex(char* se);
	void SetAge(int ag);
	void SetEthnic(char* ethni);
	void SetBirthday(int y, int m, int d);
	void SetID(char* ID);
	void SetJob_Number(char* job_num);
	void SetOnboarding_Date(int y, int m, int d);
	void SetTelephone(char* tel);
	void SetAddress(char* add);
	void SetNation(char* natio);
	void SetEmail(char* emai);
	void SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai);
	//Show函数
	void ShowAll();
	void ShowIdentifyingInformation();
	void ShowCommunicationMethod();
private:
	//身份信息
	char name[10];
	char sex[10];
	int age;
	char ethnic[5];
	Date birthday;
	char id[17];
	//公司相关信息
	char job_number[8];
	Date onboarding_date;
	//联系信息
	char telephone[12];
	char address[20];
	char nation[10];
	char email[20];
};
class virt
{
public:
	virtual void PrintAll() = 0;
	virtual int GetSalary() = 0;
};
/// ///////////////////////////////////////////////////////////////////////////////////
/// <People类定义>
class People:public virt
{
public:
	virtual void PrintAll() = 0;
	virtual int GetSalary() = 0;
	People(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai) :Information(nam, se,  ag,  ethni,  birthday_y, birthday_m, birthday_d, \
			 ID, job_num, onboard_y, onboard_m,  onboard_d,  tel,  add,  natio, emai){}
	People():Information(){}
protected:
	BasicInformation Information;
};
/// ///////////////////////////////////////////////////////////////////////////////////
/// <普通员工（执行人员）类定义>
class Clerk:protected People
{
public:
	//构造函数
	Clerk(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* departmen, int achievemen, int ran, bool incumbenc);
	Clerk();
	//Set函数
	void SetName(char* nam);
	void SetSex(char* se);
	void SetAge(int ag);
	void SetEthnic(char* ethni);
	void SetBirthday(int y, int m, int d);
	void SetID(char* ID);
	void SetJob_Number(char* job_num);
	void SetOnboarding_Date(int y, int m, int d);
	void SetTelephone(char* tel);
	void SetAddress(char* add);
	void SetNation(char* natio);
	void SetEmail(char* emai);
	void SetDepartment(char* departmen);
	void SetAchievement(int achievemen);
	void SetRank(int ran);
	void SetIncumbency(bool incumbenc);
	void SetBasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai);
	void SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* departmen, int achievemen, int ran, bool incumbenc);
	//Get函数
	char* GetName();
	char* GetSex();
	int GetAge();
	char* GetEthnic();
	Date GetBirthday();
	char* GetID();
	char* GetJob_Number();
	Date Get_OnboardingDate();
	char* GetTelephone();
	char* GetAddress();
	char* GetNation();
	char* GetEmail();
	char* GetDepartment();
	int GetAchievement();
	int GetRank();
	bool GetIncumbency();
	//计算在职年份
	int GetWorkingDuraton();
	//计算工资
	int GetSalary();
	//虚函数：打印全部个人信息
	virtual void PrintAll();
private:
	char department[10];
	int achievement;//业绩水平
	int rank;//职位等级
	bool incumbency;//是否在职
};
/// ///////////////////////////////////////////////////////////////////////////////////
/// <管理层人员类定义>
class Administrator :protected People
{
public:
	Administrator(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* field, int ran, bool incumbenc);
	Administrator();
	//Set函数
	void SetName(char* nam);
	void SetSex(char* se);
	void SetAge(int ag);
	void SetEthnic(char* ethni);
	void SetBirthday(int y, int m, int d);
	void SetID(char* ID);
	void SetJob_Number(char* job_num);
	void SetOnboarding_Date(int y, int m, int d);
	void SetTelephone(char* tel);
	void SetAddress(char* add);
	void SetNation(char* natio);
	void SetEmail(char* emai);
	void SetManage_Field(char* field);
	void SetRank(int ran);
	void SetIncumbency(bool incumbenc);
	void SetBasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai);
	void SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* field, int ran, bool incumbenc);
	//Get函数
	char* GetName();
	char* GetSex();
	int GetAge();
	char* GetEthnic();
	Date GetBirthday();
	char* GetID();
	char* GetJob_Number();
	Date Get_OnboardingDate();
	char* GetTelephone();
	char* GetAddress();
	char* GetNation();
	char* GetEmail();
	char* GetManage_Field();
	int GetRank();
	bool GetIncumbency();
	//计算在职年份
	int GetWorkingDuraton();
	//计算工资
	virtual int GetSalary();
	//虚函数：打印全部个人信息
	virtual void PrintAll();
private:
	char manage_field[10];
	int rank;
	bool incumbency;
};
/// ///////////////////////////////////////////////////////////////////////////////////
/// <后勤服务保障人员类定义>
class Logistician :protected People
{
public:
	Logistician(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* item, bool incumbenc);
	Logistician();
	//Set函数
	void SetName(char* nam);
	void SetSex(char* se);
	void SetAge(int ag);
	void SetEthnic(char* ethni);
	void SetBirthday(int y, int m, int d);
	void SetID(char* ID);
	void SetJob_Number(char* job_num);
	void SetOnboarding_Date(int y, int m, int d);
	void SetTelephone(char* tel);
	void SetAddress(char* add);
	void SetNation(char* natio);
	void SetEmail(char* emai);
	void SetWork_Item(char* item);
	void SetIncumbency(bool incumbenc);
	void SetBasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai);
	void SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* item, bool incumbenc);
	//Get函数
	char* GetName();
	char* GetSex();
	int GetAge();
	char* GetEthnic();
	Date GetBirthday();
	char* GetID();
	char* GetJob_Number();
	Date Get_OnboardingDate();
	char* GetTelephone();
	char* GetAddress();
	char* GetNation();
	char* GetEmail();
	char* GetWork_Item();
	bool GetIncumbency();
	//计算工资函数
	int GetSalary();
	//虚函数：打印全部个人信息
	virtual void PrintAll();
private:
	char work_item[10];
	bool incumbency;
};
/// /// ///////////////////////////////////////////////////////////////////////////////////
/// <外编人员类定义>
class Outsider :protected People
{
public:
	Outsider(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* compan, char* fiel, bool incumbenc);
	Outsider();
	//Set函数
	void SetName(char* nam);
	void SetSex(char* se);
	void SetAge(int ag);
	void SetEthnic(char* ethni);
	void SetBirthday(int y, int m, int d);
	void SetID(char* ID);
	void SetJob_Number(char* job_num);
	void SetOnboarding_Date(int y, int m, int d);
	void SetTelephone(char* tel);
	void SetAddress(char* add);
	void SetNation(char* natio);
	void SetEmail(char* emai);
	void SetField(char* fiel);
	void SetCompany(char* compan);
	void SetIncumbency(bool incumbenc);
	void SetBasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, char* natio, char* emai);
	void SetAll(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* compan, char* fiel, bool incumbenc);
	//Get函数
	char* GetName();
	char* GetSex();
	int GetAge();
	char* GetEthnic();
	Date GetBirthday();
	char* GetID();
	char* GetJob_Number();
	Date Get_OnboardingDate();
	char* GetTelephone();
	char* GetAddress();
	char* GetNation();
	char* GetEmail();
	char* GetField();
	char* GetCompany();
	bool GetIncumbency();
	//计算工资
	virtual int GetSalary();
	//虚函数：打印全部个人信息
	virtual void PrintAll();
private:
	char company[15];
	char field[10];
	bool incumbency;
};
/// /// ///////////////////////////////////////////////////////////////////////////////////




//下面是有关菜单操作的类定义
/// /// ///////////////////////////////////////////////////////////////////////////////////
/// <菜单类定义>
class Menu
{
public:
	Menu(char* pass);
	Menu();
	bool LogIn();
	void MainMenu(char *main_option);
	void ReadingMode();
	void WritingMode();
	void ModifyingMode();
	void ChangingPasswordMode();
	void DeleteMode();
	void Exit();
private:
	char password[15];
};



//读文件功能
void ReadingClerk(char d);
void ReadingAdministrator(char d);
void ReadingLogistician(char d);
void ReadingOutsider(char d);
//新增信息功能
void NewClerk();
void NewAdministrator();
void NewLogistician();
void NewOutsider();
//删除信息功能
void DeleteClerk();
void DeleteAdministrator();
void DeleteLogistician();
void DeleteOutsider();
//修改信息功能
void ModifyClerk();
void ModifyAdministrator();
void ModifyLogistician();
void ModifyOutsider();