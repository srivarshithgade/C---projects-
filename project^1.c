//Project 1 — Student Performance Analyzer 
/*Takes student's marks in 3 subjects
Calculates total + percentage
Determines:
Fail
Pass
Second Class
First Class
Distinction
Also checks whether the student has failed in any individual subject

Logic challenge:

Input: 78 85 91

Total = 254
Percentage = 84.67%

Result: Distinction
Status: Passed

Rules you can design:

Any subject < 40       → Fail
Percentage < 50        → Pass
50–59                   → Second Class
60–74                   → First Class
75+                     → Distinction

Extra logic:
If percentage ≥ 90 AND every subject ≥ 80 → "Outstanding Performance"

This gives you nested conditions + && without going beyond your current syllabus.*/

#include <stdio.h>

int main() {

    int a;
    int b;
    int c;

    printf("Enter psychology marks: ");
    scanf("%d", &a);

    printf("Enter neuroscience marks: ");
    scanf("%d", &b);

    printf("Enter physiology marks: ");
    scanf("%d", &c);

    int d = a + b + c;

    float e = (float)d / 3;

    printf("The total marks of the student is %d\n", d);
    printf("The percentage of the student is %.2f\n", e);

    if (a >= 80 && b >= 80 && c >= 80 && e >= 90) {

        printf("Outstanding Performance!\n");

    }

    if (a < 40 || b < 40 || c < 40) {

        printf("The student has failed.\n");

    }
    else if (e < 50) {

        printf("Pass.\n");

    }
    else if (e < 60) {

        printf("Second Class.\n");

    }
    else if (e < 75) {

        printf("First Class.\n");

    }
    else {

        printf("Distinction.\n");

    }

    return 0;
}