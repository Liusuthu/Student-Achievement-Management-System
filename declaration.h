#include<string.h>
#include<iostream>
#include<fstream>
#include<iomanip>
#pragma warning(disable:4996)
#pragma warning(disable:4244)
using namespace::std;


/// <��������Ķ����װ>
/// ///////////////////////////////////////////////////////////////////////////////////
/// <Date�ඨ��>
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
/// <BasicInformation�ඨ��>
class  BasicInformation
{
public:
	//���캯��
	BasicInformation(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d,char* tel,char* add,char* natio,char* emai);
	BasicInformation();
	//Get����
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
	//Set����
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
	//Show����
	void ShowAll();
	void ShowIdentifyingInformation();
	void ShowCommunicationMethod();
private:
	//�����Ϣ
	char name[10];
	char sex[10];
	int age;
	char ethnic[5];
	Date birthday;
	char id[17];
	//��˾�����Ϣ
	char job_number[8];
	Date onboarding_date;
	//��ϵ��Ϣ
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
/// <People�ඨ��>
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
/// <��ͨԱ����ִ����Ա���ඨ��>
class Clerk:protected People
{
public:
	//���캯��
	Clerk(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* departmen, int achievemen, int ran, bool incumbenc);
	Clerk();
	//Set����
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
	//Get����
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
	//������ְ���
	int GetWorkingDuraton();
	//���㹤��
	int GetSalary();
	//�麯������ӡȫ��������Ϣ
	virtual void PrintAll();
private:
	char department[10];
	int achievement;//ҵ��ˮƽ
	int rank;//ְλ�ȼ�
	bool incumbency;//�Ƿ���ְ
};
/// ///////////////////////////////////////////////////////////////////////////////////
/// <�������Ա�ඨ��>
class Administrator :protected People
{
public:
	Administrator(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* field, int ran, bool incumbenc);
	Administrator();
	//Set����
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
	//Get����
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
	//������ְ���
	int GetWorkingDuraton();
	//���㹤��
	virtual int GetSalary();
	//�麯������ӡȫ��������Ϣ
	virtual void PrintAll();
private:
	char manage_field[10];
	int rank;
	bool incumbency;
};
/// ///////////////////////////////////////////////////////////////////////////////////
/// <���ڷ�������Ա�ඨ��>
class Logistician :protected People
{
public:
	Logistician(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* item, bool incumbenc);
	Logistician();
	//Set����
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
	//Get����
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
	//���㹤�ʺ���
	int GetSalary();
	//�麯������ӡȫ��������Ϣ
	virtual void PrintAll();
private:
	char work_item[10];
	bool incumbency;
};
/// /// ///////////////////////////////////////////////////////////////////////////////////
/// <�����Ա�ඨ��>
class Outsider :protected People
{
public:
	Outsider(char* nam, char* se, int ag, char* ethni, int birthday_y, int birthday_m, int birthday_d, \
		char* ID, char* job_num, int onboard_y, int onboard_m, int onboard_d, char* tel, char* add, \
		char* natio, char* emai, char* compan, char* fiel, bool incumbenc);
	Outsider();
	//Set����
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
	//Get����
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
	//���㹤��
	virtual int GetSalary();
	//�麯������ӡȫ��������Ϣ
	virtual void PrintAll();
private:
	char company[15];
	char field[10];
	bool incumbency;
};
/// /// ///////////////////////////////////////////////////////////////////////////////////




//�������йز˵��������ඨ��
/// /// ///////////////////////////////////////////////////////////////////////////////////
/// <�˵��ඨ��>
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



//���ļ�����
void ReadingClerk(char d);
void ReadingAdministrator(char d);
void ReadingLogistician(char d);
void ReadingOutsider(char d);
//������Ϣ����
void NewClerk();
void NewAdministrator();
void NewLogistician();
void NewOutsider();
//ɾ����Ϣ����
void DeleteClerk();
void DeleteAdministrator();
void DeleteLogistician();
void DeleteOutsider();
//�޸���Ϣ����
void ModifyClerk();
void ModifyAdministrator();
void ModifyLogistician();
void ModifyOutsider();