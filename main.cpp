#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "homework2-1.h"
#include "homework2-2.h"
using namespace std;

StudentStruct *students = nullptr;
int numOfStudent = 0;

void printBestStudent() {
    cout << "Best Midterm Student:\n";
    printStudentInfo(students, numOfStudent, findBestStudentInMidterm(students, numOfStudent));
    cout << "Best Final Student:\n";
    printStudentInfo(students, numOfStudent, findBestStudentInFinal(students, numOfStudent));
    cout << "Best Total Score Student:\n";
    printStudentInfo(students, numOfStudent, findBestStudent(students, numOfStudent));
}

// ✅ 자리수 선택 가능
void printAverage(int precision) {
    float midterm = getMidtermAverage(students, numOfStudent);
    float final = getFinalAverage(students, numOfStudent);
    float total = getTotalAverage(students, numOfStudent);

    cout << "# of Student: " << numOfStudent << "\n";
    cout << fixed << setprecision(precision);
    cout << "Midterm Average: " << midterm << "\n";
    cout << "Midterm Average: " << final << "\n";
    cout << "Midterm Average: " << total << "\n";

    // 원래대로 복구
    cout.unsetf(ios::fixed);
    cout.precision(6);
}

void printStudentList() {
    for (int id = 1000; id < 1100; ++id)
        printStudentInfo(students, numOfStudent, id);
}

void doNamespaceTest() {
    cout << "---------------------------\n";
    cout << "Namespace Test\n";

    cout << "[IntCalc] 10 + 3 = " << IntCalc::add(10, 3) << "\n";
    cout << "[IntCalc] 10 - 3 = " << IntCalc::subtract(10, 3) << "\n";
    cout << "[IntCalc] 10 * 3 = " << IntCalc::multiply(10, 3) << "\n";
    cout << "[IntCalc] 10 / 3 = " << IntCalc::divide(10, 3) << "\n";

    cout << "[IntCalc] 10.5 + 3.2 = " << IntCalc::add((int)10.5, (int)3.2) << "\n";
    cout << "[IntCalc] 10.5 - 3.2 = " << IntCalc::subtract((int)10.5, (int)3.2) << "\n";
    cout << "[IntCalc] 10.5 * 3.2 = " << IntCalc::multiply((int)10.5, (int)3.2) << "\n";
    cout << "[IntCalc] 10.5 / 3.2 = " << IntCalc::divide((int)10.5, (int)3.2) << "\n";

    cout << "[FloatCalc] 10 + 3 = " << FloatCalc::add(10, 3) << "\n";
    cout << "[FloatCalc] 10 - 3 = " << FloatCalc::subtract(10, 3) << "\n";
    cout << "[FloatCalc] 10 * 3 = " << FloatCalc::multiply(10, 3) << "\n";
    cout << "[FloatCalc] 10 / 3 = " << FloatCalc::divide(10, 3) << "\n";

    cout << "[FloatCalc] 10.5 + 3.2 = " << FloatCalc::add(10.5f, 3.2f) << "\n";
    cout << "[FloatCalc] 10.5 - 3.2 = " << FloatCalc::subtract(10.5f, 3.2f) << "\n";
    cout << "[FloatCalc] 10.5 * 3.2 = " << FloatCalc::multiply(10.5f, 3.2f) << "\n";
    cout << "[FloatCalc] 10.5 / 3.2 = " << FloatCalc::divide(10.5f, 3.2f) << "\n";
}

void doTest1() {
    cout << "---------------------------\n";
    cout << "Test 1\n";
    printBestStudent();
    printAverage(3); // ✅ 소수점 3자리
    printStudentList();
}

void doTest2() {
    cout << "---------------------------\n";
    cout << "Test 2\n";

    StudentStruct charlie("Charlie", 1003, 70, 99.0);
    int idx = findStudentByStudentID(students, numOfStudent, charlie.id);
    if (idx >= 0) modifyRecord(students, numOfStudent, charlie);

    addStudent(students, &numOfStudent, "Ana", 1051, 88, 65);
    addStudent(students, &numOfStudent, "Suji", 1052, 90, 93);
    addStudent(students, &numOfStudent, "Zhang", 1053, 100, 40);

    printBestStudent();
    printAverage(4); // ✅ 소수점 4자리
    printStudentList();
}

void doTest3() {
    cout << "---------------------------\n";
    cout << "Test 3\n";
    deleteStudent(students, &numOfStudent, 1011);
    deleteStudent(students, &numOfStudent, 1029);
    printStudentList();
}

void doPointerTest(int select) {
    const int MAX_STUDENTS = 100;
    students = new StudentStruct[MAX_STUDENTS];
    fillStudentRecord(students, &numOfStudent);

    switch (select) {
        case 2: doTest1(); break;
        case 3: doTest2(); break;
        case 4: doTest3(); break;
        default: doTest1(); doTest2(); doTest3(); break;
    }

    delete[] students;
}

int main(int argc, char **argv) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << unitbuf;

    if (argc == 2) {
        int select = atoi(argv[1]);
        switch (select) {
            case 1: doNamespaceTest(); return 0;
            case 2: case 3: case 4: doPointerTest(select); return 0;
        }
    }
    doNamespaceTest();
    doPointerTest(0);
    return 0;
}

