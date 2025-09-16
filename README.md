[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/uExS26V-)
# 📘 Homework2

## 2.1 Namespace 기반 계산기 구현

### 📝 과제 개요

이 과제는 C++의 `namespace` 기능을 활용하여 **정수형 계산기(IntCalc)**와 **실수형 계산기(FloatCalc)**를 구현하는 실습입니다.
각 계산기는 `add`, `subtract`, `multiply`, `divide` 기능을 제공하며, 동일한 함수 이름을 `namespace`로 구분하여 사용할 수 있도록 설계되어 있습니다.

학생들은 제공된 템플릿 코드의 `TODO` 부분과 main 함수의 doTest1() 함수 부분을 직접 구현하여, `namespace`의 구조와 활용법을 익히게 됩니다.

---

### 🎯 학습 목표

- C++에서 `namespace`를 사용하는 목적과 효과를 이해한다.
- 동일한 함수 이름을 `namespace`로 구분하여 사용하는 방법을 익힌다.
- 정수형과 실수형 연산의 차이를 함수 구현을 통해 체험한다.
- 함수 정의 및 호출의 기본 구조를 복습한다.

---

### 📂 제공 파일

- `homework2-2.cpp` : 함수 구현 템플릿 (`TODO` 포함)
- `homework2-1.h` : 함수 선언 및 `namespace` 구조 정의
- `main.cpp` : 테스트 코드 및 실행 예제 (`TODO` 포함)

---

### 🔧 구현해야 할 함수 목록

#### `namespace IntCalc` (정수형 계산기)
- `int add(int a, int b)`
- `int subtract(int a, int b)`
- `int multiply(int a, int b)`
- `int divide(int a, int b)`

#### `namespace FloatCalc` (실수형 계산기)
- `float add(float a, float b)`
- `float subtract(float a, float b)`
- `float multiply(float a, float b)`
- `float divide(float a, float b)`

---

## 2.2 Homework2-2: 포인터 기반 학생 정보 관리 실습

### 📝 과제 개요

이 과제는 C++에서 포인터를 활용하여 학생 정보를 동적으로 관리하는 실습입니다.
학생 정보를 저장하는 구조체 배열을 포인터로 전달하고, 함수 간 데이터 처리를 포인터 기반으로 구현합니다.
모든 함수는 `StudentStruct* students`와 `int* numOfStudent` 또는 `int numOfStudent`를 파라미터로 받아야 하며, `TODO` 부분을 직접 구현해야 합니다.

---

### 🎯 학습 목표

- C++에서 포인터를 사용하여 배열과 데이터를 함수에 전달하는 방법을 익힌다.
- 구조체 포인터를 활용한 데이터 접근 및 수정 방법을 학습한다.
- 포인터를 통한 동적 메모리 관리와 함수 간 데이터 공유를 이해한다.

---

### 📂 제공 파일

- `homework2-2.cpp` : 함수 구현 템플릿 (`TODO` 포함)
- `homework2-2.h` : 구조체 및 함수 선언
- `main.cpp` : 테스트 코드 및 실행 예제 (`TODO` 포함)

---

### 🔧 구현해야 할 함수 목록

- `void fillStudentRecord(StudentStruct* students, int* numOfStudent)`
- `int findBestStudentInMidterm(StudentStruct* students, int numOfStudent)`
- `int findBestStudentInFinal(StudentStruct* students, int numOfStudent)`
- `int findBestStudent(StudentStruct* students, int numOfStudent)`
- `int findStudentByStudentID(StudentStruct* students, int numOfStudent, int id)`
- `void modifyRecord(StudentStruct* students, int numOfStudent, const StudentStruct& student)`
- `void addStudent(StudentStruct* students, int* numOfStudent, const char* name, int id, float midterm, float final)`
- `void deleteStudent(StudentStruct* students, int* numOfStudent, int id)`
- `float getMidtermAverage(StudentStruct* students, int numOfStudent)`
- `float getFinalAverage(StudentStruct* students, int numOfStudent)`
- `float getTotalAverage(StudentStruct* students, int numOfStudent)`
- `void printStudentInfo(StudentStruct* students, int numOfStudent, int id)`

> 각 함수의 `TODO` 부분을 채워서 포인터를 활용한 기능 구현을 완성하세요.

---

### 📌 주의사항

- 모든 함수는 포인터를 통해 데이터를 전달받아야 합니다.


## 🧪 테스트 방법
다 구현한 후, 아래 명령어를 통해 테스트를 실행하세요:

### Windows 사용자
```bash
.\test2.bat
```

### MacOS/Linux 사용자
```bash
/bin/bash test2.sh
```

