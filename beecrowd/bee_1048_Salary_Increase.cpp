// bee-1048-Salary-Increase.cpp
#include <iostream>
#include<vector>
#include<iomanip>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
    cout<<fixed<<setprecision(2);
double salary;
cin>>salary;
if(salary<=400){
    double new_salary,extra_earn,percentage = 0.15;
    new_salary = salary*percentage+salary;
    extra_earn = new_salary-salary;
    cout<<"Novo salario: "<<new_salary<<'\n';
    cout<<"Reajuste ganho: "<<extra_earn<<'\n';
    cout<<"Em percentual: "<<"15 %\n";
}

else if(salary<=800){
    double new_salary,extra_earn,percentage = 0.12;
    new_salary = salary*percentage+salary;
    extra_earn = new_salary-salary;
    cout<<"Novo salario: "<<new_salary<<'\n';
    cout<<"Reajuste ganho: "<<extra_earn<<'\n';
    cout<<"Em percentual: "<<"12 %\n";
}

else if(salary<=1200){
    double new_salary,extra_earn,percentage = 0.1;
    new_salary = salary*percentage+salary;
    extra_earn = new_salary-salary;
    cout<<"Novo salario: "<<new_salary<<'\n';
    cout<<"Reajuste ganho: "<<extra_earn<<'\n';
    cout<<"Em percentual: "<<"10 %\n";
}

else if(salary<=2000){
    double new_salary,extra_earn,percentage = 0.07;
    new_salary = salary*percentage+salary;
    extra_earn = new_salary-salary;
    cout<<"Novo salario: "<<new_salary<<'\n';
    cout<<"Reajuste ganho: "<<extra_earn<<'\n';
    cout<<"Em percentual: "<<"7 %\n";
}

else if(salary>2000){
    double new_salary,extra_earn,percentage = 0.04;
    new_salary = salary*percentage+salary;
    extra_earn = new_salary-salary;
    cout<<"Novo salario: "<<new_salary<<'\n';
    cout<<"Reajuste ganho: "<<extra_earn<<'\n';
    cout<<"Em percentual: "<<"4 %\n";
}
}

int main() {
FAST_IO;
solve();
return 0;
}
