#include<iostream>
#include<iomanip>
using namespace std;
struct Employee{
	int EmpId;
	char EmpName[50];
	int EmpSalary;
	char EmpDepartement[50];
};
int main()
{	
	int n;
	Employee Emp[n]; 

	cout<<"Enter number of employee : ";
	cin>>n;
	cout<<"\n";
	for(int i=0;i<=n;i++)
	{	
		cout << "\nEnter details of " << i+1 << " Employee"<<endl;
    	cout <<setw(5)<< "\nEnter Employee Id : ";
    	cin >> Emp[i].EmpId;
    	cout <<setw(5)<< "\nEnter Employee Name : ";
    	cin >> Emp[i].EmpName;
    	cout <<setw(5)<< "\nEnter Employee Departement : ";
    	cin >> Emp[i].EmpDepartement;
    	cout <<setw(5)<< "\nEnter Employee Salary : ";
    	cin >> Emp[i].EmpSalary;
	}
 cout<<"\n\n------------------------------------------------------------\n";
    cout << "Details of Employees";
 cout<<"\n------------------------------------------------------------\n\n";
    
    cout << "EmpID" <<setw(15)<<"EmpName" <<setw(10)<<"EmpDepartement" <<setw(10)<<"EmpSalary";
    cout<<endl;
 for(int i=0;i<n;i++)
    {
     
     cout << "\n"<< Emp[i].EmpId <<setw(15)<< Emp[i].EmpName <<setw(10)<< Emp[i].EmpDepartement <<setw(10)<< Emp[i].EmpSalary;
    }
	return 0;
}
