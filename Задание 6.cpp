// ������� 6. ������� �.�. ����-02-19
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
                  cout<<surname<<endl<<"���� "<<experience<<endl<<"��������� ���������� �����  "<<salaryh<<endl<<surname<<" ��������� "<<hours<<" �����"<<endl<<"�������� "<<salary<<endl<<"������ "<<premy<<endl;
             }                
};
 int main()
{
     setlocale(LC_ALL, "Russian");
	string surname;
    int experience, salaryh, hours, salary, premy;
    cout<<"������� ��� ��������� : "; cin>>surname; cout<<endl;
    cout<<"������� ���� ������: "; cin>>experience; cout<<endl;
    cout<<"������� ������� ���������� �����: "; cin>>salaryh; cout<<endl;
    cout<<"������� ������� ����� "<<surname<<" ���������: "; cin>>hours; cout<<endl;
    Worker objWorker;
    objWorker.setWorker(surname, experience, salaryh, hours);
    objWorker.getWorker();
    system ("pause");
    return 0;
}
