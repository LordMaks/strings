#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{

    string str01 = "Hello world ?";
    string str02 = "Hello world !";
    string str03 = "knight";

    // ��������� �����

    cout << "string compare" << endl;

    cout << "str01 : " << str01 << endl;
    cout << "str02 : " << str02 << endl;

    cout << str01.compare(str02) << endl;

    // ��������� �����

    cout << "\nstring concatenation" << endl;
    cout << "origin: " << str01 << "; " << str02 << endl;
    cout << str01 + " " + str02 << endl;

    cout << str01.append(" ").append(str02) << endl;

    // ����� ������ ����

    cout << "\nreplace part of string" << endl;
    cout << "origin: " << str01 << endl;
    cout << str01.replace(str01.find("world"), str03.size(), str03) << endl;

    // �����

    cout << "\nsubstring" << endl;
    cout << "original: " << str01 << endl;
    str01 = str01.substr(0, 13);
    cout << str01 << endl;

    // �������

    cout << "\nInsert" << endl;
    cout << "original: " << str01 << endl;
    cout << str01.insert(6, "world ") << endl;
}