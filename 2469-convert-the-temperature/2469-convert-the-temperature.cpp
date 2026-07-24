class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double kelvin;
        kelvin = celsius + 273.15;
        double farhenheit;
        farhenheit = celsius * 1.80 + 32.00;
        ans.push_back(kelvin);
        ans.push_back(farhenheit);
        return ans;
    }
};