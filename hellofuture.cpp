#include <iostream>
using namespace std;

class Temperature{
 private:
     double Kelvin;

 public:
    void setTempKelvin(double e_tempkelvin){
            Kelvin=e_tempkelvin;
    }
    void setTempFahrenheit(double e_fahrenheit){
            Kelvin = (5/9.0) * (e_fahrenheit - 32);
            Kelvin= Kelvin + 273.15;
    }
    void setTempCelsius(double e_celsius){
            Kelvin = e_celsius + 273.15;
    } void displayResult(){
        cout << "The temperature in Kelvin is: "<< Kelvin << endl;
    }
};

int main() {
    Temperature temp;
    double var_celsius, var_fahr;

    cout << "Enter Celsius: ";
    cin >> var_celsius;
    temp.setTempCelsius(var_celsius);
    temp.displayResult();

    cout << "Enter Fahrenheit: ";
    cin >> var_fahr;
    temp.setTempFahrenheit(var_fahr);
    temp.displayResult();

    return 0;
}


