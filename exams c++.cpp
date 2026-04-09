#include <iomanip>
#include <iostream>
#include <cmath>
#include <fstream>
#include <numbers>
#include "functions.h"
#include <vector>

using namespace std;

class Patient {
public:
    string full_name;
    Patient(const string& name) : full_name(name) {}
};

class Doctor {
public:
    string full_name;
    string specialization;
    Doctor(const string& name, const string& spec)
        : full_name(name), specialization(spec) {
    }
};

class Appointment {
public:
    Patient* patient;
    Doctor* doctor;
    Appointment(Patient* p, Doctor* d) : patient(p), doctor(d) {}
};

class Clinic {
private:
vector<Appointment*> appointments; public:
    void schedule_appointment(Patient* patient, Doctor* doctor) {
        Appointment* new_appointment = new
            Appointment(patient, doctor);
        appointments.push_back(new_appointment);
    }
};





double exercise1()
{
    double a1 = 2, a2 = 3, a3 = 11, a4 = 2, a5 = 4;
    return log(a1) - sqrt(a3 / a1) *
        pow(a5, pow(a5, 0.25)) + 
        sin(a2) / tan(a2 - a4 / a3);
}

double exercise2()
{
    double a1 = 2, a2 = 3, a3 = 11, a4 = 2, a5 = 90;
    return pow(a2, abs(cos(a5*numbers::pi/180)/2)) * 
        pow(abs(sqrt(a4)/a3), 1.0 / 3) - 
        tan(a1+a5*numbers::pi/180)/a2;
}

double exercise3()
{
    return 0;
}

double exercise4()
{
    return 0;
}


int exercise5()
{
    ifstream file("C:/Users/OSM/OneDrive/Desktop/in5.txt");
    int count = 0, n = 0, num = 0;
    file >> n;
    for (int i = 0; i < n; i++)
    {
        file >> num;
        if (isSimple(num))
            count++;
    }
    return count;
}

double exercise6()
{
    int count = 0, n = 0, m = 0, num = 0, skipCurr = 0, skipMax = 0;
    ifstream file("C:/Users/OSM/OneDrive/Desktop/in6.txt");
    file >> n >> m;
    for (int i = 0; i < n; i++)
    {
        file >> num;
        if (skipCurr == 0)
        {
            if (num > m)
            {
                count++;
                skipMax++;
                skipCurr = skipMax;
            }
        }
        else
            skipCurr--;
    }
    return count;
}

void exercise7()
{
    int count = 0, num = 0, skipCurr = 0, skipMax = 0;
    ifstream file("C:/Users/OSM/OneDrive/Desktop/in7&8.txt");
    while (file >> num)
    {
        if (mult7(1, num))
            cout << "Да" << endl;
        else if (add7(1, num))
            cout << "Да" << endl;
        else
            cout << "Нет" << endl;
    }
}

void exercise8()
{
    int count = 0, num = 0, skipCurr = 0, skipMax = 0;
    ifstream file("C:/Users/OSM/OneDrive/Desktop/in7&8.txt");
    while (file >> num)
    {
        if (mult8(1, num, count))
            cout << "Да: " << count << endl;
        else if (add8(1, num, count))
            cout << "Да: " << count << endl;
        else
            cout << "Нет" << endl;
        count = 0;
    }
}

void exercise9()
{
    return;
}

void exercise10()
{
    return;
}



int main()
{
    setlocale(LC_ALL, "Russian");
    while (1)
    {
        int toDo = -1;
        cout << "Введите номер задания или 0 для выхода из программы: ";

        cin >> toDo;
        if (toDo == 0)
            break;
        else if (toDo == 1)
            cout << fixed << setprecision(2) << exercise1();
        else if (toDo == 2)
            cout << fixed << setprecision(2) << exercise2();
        else if (toDo == 3)
            cout << fixed << setprecision(2) << exercise3();
        else if (toDo == 4)
            cout << fixed << setprecision(2) << exercise4();
        else if (toDo == 5)
            cout << exercise5();
        else if (toDo == 6)
            cout << exercise6();
        else if (toDo == 7)
            exercise7();
        else if (toDo == 8)
            exercise8();
        else if (toDo == 9)
            exercise9();
        else if (toDo == 10)
            exercise10();
        else if (toDo == 18)
        {
            Clinic clinic;
            Patient p("Иванов");
            Doctor d("Петров", "Терапевт");
            clinic.schedule_appointment(&p, &d);
        }


        cout << endl << endl;
        
    }
}