#include <iostream>
using namespace std;

class Cricketer 
{
protected:
    string name;
    int age;
public:
    void input_data() 
	{
        cout << "Enter cricketer's name: ";
        getline(cin, name);
        cout << "Enter cricketer's age: ";
        cin >> age;
        cin.ignore();
    }
};

class Batsman : public Cricketer 
{
private:
    int total_runs;
    float avg_runs;
    int best_performance;
public:
    void calculate_avg_runs() 
	{
        cout << "Enter total runs scored: ";
        cin >> total_runs;
        cout << "Enter best performance: ";
        cin >> best_performance;

        avg_runs = static_cast<float>(total_runs) / best_performance;
    }

    void display_data() 
	{
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total runs: " << total_runs << endl;
        cout << "Average runs: " << avg_runs << endl;
        cout << "Best performance: " << best_performance << endl;
    }
};

int main() 
{
    Batsman batsman;

    batsman.input_data();
    batsman.calculate_avg_runs();

    batsman.display_data();

}

