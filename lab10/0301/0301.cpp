#include <iostream>
#include <fstream>
#include <vector>
#include <cmath> 

using namespace std;

vector<double> get_vector_from_file(ifstream& array);
double get_sum(const vector<double>& array);
double get_multiplication_sum(const vector<double>& array);
double get_squaring_sum(const vector<double>& array);
double get_module_sum(const vector<double>& array);
double get_squaring_multiplication_sum(const vector<double>& array);
double get_last_numb(const vector<double>& array);


int main()
{
    setlocale(LC_CTYPE, "ukr");
    ifstream in;   
    in.open("f.txt");  
    if (!in.is_open())
        return 1;     

    vector<double> numbers = get_vector_from_file(in); 

    cout << "Сума компонентів файлу f: " << get_sum(numbers) << endl;
    cout << "Добуток компонентів : " << get_multiplication_sum(numbers) << endl;
    cout << "Сума квадратів компонент: " << get_squaring_sum(numbers) << endl;
    cout << "Модуль суми: " << get_module_sum(numbers) << endl;
    cout << "Квадрат добутку: " << get_squaring_multiplication_sum(numbers) << endl;
    cout << "Остання компонента файлу: " << get_last_numb(numbers) << endl;
    return 0;
}
vector<double> get_vector_from_file(ifstream& array)
{
    vector<double> numbers;
    double numb;
    while (!array.eof())
    {
        array >> numb;
        numbers.push_back(numb); 
    }
    return numbers;
}
double get_sum(const vector<double>& array)
{
    double sum_numb = 0;
    for (size_t i = 0; i < array.size(); ++i)       
        sum_numb += array.at(i);
    return sum_numb;
}
double get_multiplication_sum(const vector<double>& array)
{
    double sum_numb = 1.0;  
    for (size_t i = 0; i < array.size(); ++i)      
        sum_numb *= array.at(i);
    return sum_numb;
}
double get_squaring_sum(const vector<double>& array)
{
    double sum_numb = 0;
    for (size_t i = 0; i < array.size(); ++i)      
        sum_numb += pow(array.at(i), 2);
    return sum_numb;
}
double get_module_sum(const vector<double>& array)
{
    return abs(get_sum(array)); 
}
double get_squaring_multiplication_sum(const vector<double>& array)
{
    return pow(get_multiplication_sum(array), 2);
}
double get_last_numb(const vector<double>& array)
{
    size_t it_last_elemt = array.size() - 1; 
    return array.at(it_last_elemt);
}