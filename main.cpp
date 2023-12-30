#include <iostream>
#include <vector>
#include <string>
#include <Eigen/Dense>
#include <cmath>

using namespace std;


Eigen::Matrix4d classicalDHTransformMatrix(double a, double d, double alpha, double theta) {
    Eigen::Matrix4d matrix;
    matrix <<
        cos(theta), -sin(theta) * cos(alpha), sin(theta) * sin(alpha), a * cos(theta),
        sin(theta), cos(theta) * cos(alpha), -cos(theta) * sin(alpha), a * sin(theta),
        0, sin(alpha), cos(alpha), d,
        0, 0, 0, 1;
    return matrix;
}

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}