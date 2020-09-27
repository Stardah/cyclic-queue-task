#include <iostream>
#include <sstream>
#include <fstream>
#include "CyclicQueue.h"

using namespace std;

/*
 * ��� ��������� ������� ������� � ������������ ������������ = 100 � �������� ��������� ������.
 *
 * �� ���� ��������� �������� ����, � ������� ���������� ����� ������������������ �� �������������� ���� ������,
 * ������ �������������, ��� ��� ���������� � �� ����� �������� �������������� ��������.
 * push n - �������� � ������� ����� n (�������� n �������� ����� �������). ��������� ������ ������� 'ok'.
 * pop - ������� �� ������� ������ �������. ��������� ������ ������� ��� ��������.
 * front - ��������� ������ ������� �������� ������� ��������, �� ������ ��� �� �������.
 * size - ��������� ������ ������� ���������� ��������� � �������.
 * clear - ��������� ������ �������� ������� � ������� 'ok'.
 * exit - ��������� ������ ������� 'bye' � ��������� ������.
 *
 * ���� ���� � ����� �������������� ����� �����.
 *
 * ������ ������� ������:
 * push 5
 * push 6
 * size
 * back
 * pop
 * back
 * exit
 *
 * ������ �������� ������:
 * ok
 * ok
 * 2
 * 5
 * 5
 * 6
 * bye
 *
 * ��������������, ������ ���������� �������, ���������� �������� ���������� ������� solve,
 * ������� ��������� �� ���� 2 ��������� - ���� � ����� � ������ � ���� � �����, ���� ����������
 * �������� ������, � � ������� ������� ������� � capacity = 100 ������ ������.
*/
void solve(const std::string& pathToTest, const std::string& pathToOut) {
    // todo
    throw std::runtime_error("Not implemented!");
}

bool check(const string& answerPath, const string& progPath) {
    ifstream inAnswer{ answerPath };
    ifstream inProg{ progPath };
    bool flag = true;
    while (!inAnswer.eof()) {
        string s1, s2;
        inAnswer >> s1;
        inProg >> s2;
        if (s1 != s2) {
            flag = false;
        }
    }
    if (!inProg.eof()) {
        flag = false;
    }

    return flag;
}

// ������ �������� ��������� ������ ������ ��������� ������ ���� �� �������� ������ (test/data)
int main(int argc, char** argv) {
    if (argc < 2) {
        throw logic_error("Program must contain a command line argument to the directory with test data!");
    }
    const string dataDirPath = argv[1];

    for (int i = 1; i <= 16; ++i) {
        const string number = to_string(i);
        const string input = dataDirPath + number;
        const string output = number + ".out";
        const string answer = input + ".a";

        solve(input, output);

        if (check(answer, output)) {
            cout << "Test " << number << " OK" << endl;
        }
        else {
            cout << "Test " << number << " Fail" << endl;
        }
    }
    return 0;
}
