#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<double>salary={20000,30000,40000,50000,60000};
    int total=0;
    int HighestSalary=salary[0];
    int count=0;
    int n=salary.size();
    for(auto value:salary){
        cout<<value<<" ";
        total+=value;
        if(value>HighestSalary){
        HighestSalary=value;
        }
        if(value>=50000){
            count++;
        }
    }
    cout<<endl;
    cout<<"Total Expense : "<<total<<endl;
    cout<<"Highest Salary : "<<HighestSalary<<endl;
    cout<<"Employees having salary greater than 50000 : "<<count<<endl;
    cout<<"Average Salary : "<<total/n<<endl;
}