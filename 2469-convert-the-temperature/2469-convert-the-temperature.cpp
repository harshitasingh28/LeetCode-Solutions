class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = 273.15 + celsius;
        double Fahrenheit = celsius * 1.80 + 32.00;
        return {kelvin, Fahrenheit};
    }
};