#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float salary,newSalary;
    cin >>fixed>>setprecision(2)>>salary;


    if(salary>=0 && salary<=400.00)
       {
        newSalary=salary+(salary*15)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(salary*15)/100<<endl;
        cout<<"Em percentual: "<<15<<" %"<<endl;
       }
    else if(salary>=400.01 && salary<=800.00)
        {
        newSalary=salary+(salary*12)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(salary*12)/100<<endl;
        cout<<"Em percentual: "<<12<<" %"<<endl;
        }
    else if(salary>=800.01 && salary<=1200.00)
        {
        newSalary=salary+(salary*10)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(salary*10)/100<<endl;
        cout<<"Em percentual: "<<10<<" %"<<endl;
        }
    else if(salary>=1200.01 && salary<=2000.00)
        {
        newSalary=salary+(salary*7)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(salary*7)/100<<endl;
        cout<<"Em percentual: "<<7<<" %"<<endl;
        }
    else if(salary>=2000)
        {
        newSalary=salary+(salary*4)/100;
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<newSalary<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(salary*4)/100<<endl;
        cout<<"Em percentual: "<<4<<" %"<<endl;
        }
    return 0;
}
