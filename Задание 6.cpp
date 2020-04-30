// Задание 6. Соболев А.А. КББО-02-19
#include<iostream>
#include<cstring>
#include<fstream>
 using namespace std;
 class Worker
{
      string surname;
      int experience, salaryh, hours, salary;
      double premy;
      public:
             void setWorker(string sn, int exp, int sh, int h)
             {
                  surname = sn;
                  experience = exp;
                  salaryh = sh;
                  hours = h;
                  double p;
                  int s;
                  s = sh*h;
                  salary = s;
                  if (exp<1) p=0;
                  else
                  {
                      if (exp>=1 && exp<3) p=0.05*s;
                      else
                      {
                         if (exp>=3 && exp<5) p=0.08*s;
                         else
                         {
                            if (exp>=5) p=0.15*s;
                         }
                      }
                  }
                  premy = p;
             }
             void getWorker()
             {
                  cout<<surname<<endl<<"Опыт "<<experience<<endl<<"Почасовая заработная плата  "<<salaryh<<endl<<surname<<" отработал "<<hours<<" часов"<<endl<<"Зарплата "<<salary<<endl<<"Премия "<<premy<<endl;
             }                
};
 int main()
{
     setlocale(LC_ALL, "Russian");
	string surname;
    int experience, salaryh, hours, salary, premy;
    cout<<"Введите имя работника : "; cin>>surname; cout<<endl;
    cout<<"Введите опыт работы: "; cin>>experience; cout<<endl;
    cout<<"Введите часовую заработную плату: "; cin>>salaryh; cout<<endl;
    cout<<"Введите сколько часов "<<surname<<" отработал: "; cin>>hours; cout<<endl;
    Worker objWorker;
    objWorker.setWorker(surname, experience, salaryh, hours);
    objWorker.getWorker();
    system ("pause");
    return 0;
}
