#include "homework2-1.h"

// 정수형 계산기
namespace IntCalc {
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    int divide(int a, int b) { return (b == 0) ? 0 : a / b; }
}

// 실수형 계산기
namespace FloatCalc {
    float add(float a, float b) { return a + b; }
    float subtract(float a, float b) { return a - b; }
    float multiply(float a, float b) { return a * b; }
    float divide(float a, float b) { return (b == 0.0f) ? 0.0f : a / b; }
}
