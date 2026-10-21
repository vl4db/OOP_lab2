#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double computeArea(double length, double width) 
{
    return length * width;
}

double calculateArea(string length_str, string width_str, double (*computeArea)(double, double))
{
try {
        size_t pos_length, pos_width;

        double length = stod(length_str, &pos_length);
        if (pos_length != length_str.length()) {
            throw invalid_argument("Invalid length: " + length_str);
        }

        double width;
        if (width_str.empty()) {
            width = length;
        } else {
            width = stod(width_str, &pos_width);
            if (pos_width != width_str.length()) {
                throw invalid_argument("Invalid width: " + width_str);
            }
        }

        return computeArea(length, width); // nu am eroare

    } catch (const exception& e) {
        cout << "calculateArea ERR: " << e.what() << "\n";
        return -1;
    }  
}

int main()
{
    string length_str1 = "193";
    string width_str1 = "190";
    double area1 = calculateArea(length_str1, width_str1, &computeArea);
    string length_str2 = "190";
    string width_str2 = "";
    double area2 = calculateArea(length_str2, width_str2, &computeArea);
    string length_str3 = "19a8";
    string width_str3 = "190";
    double area3 = calculateArea(length_str3, width_str3, &computeArea);
    cout << area1 << " " << area2 << " " << area3 << "\n";
}