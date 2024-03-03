#include <stdio.h>

struct course {
    int code;
    int credits;
    float grade;
};

struct student {
    char name[50];
    struct course courses[3];
};

float calculate_gpa(struct student s) {
    float total_credits = 0;
    float total_grade_credits = 0;

    for (int i = 0; i < 3; i++) {
        total_credits += s.courses[i].credits;
        total_grade_credits += s.courses[i].credits * s.courses[i].grade;
    }

    return total_grade_credits / total_credits;
}

int main() {
    int n;
    
    scanf("%d", &n);

    struct student students[n];

    for (int i = 0; i < n; i++) {
        
        scanf("%s", students[i].name);

        
        for (int j = 0; j < 3; j++) {
            scanf("%d %f", &students[i].courses[j].code, &students[i].courses[j].grade);
            // Assigning credits based on course code
            switch(students[i].courses[j].code) {
                case 1001:
                    students[i].courses[j].credits = 10;
                    break;
                case 1002:
                case 1003:
                    students[i].courses[j].credits = 5;
                    break;
                case 1004:
                    students[i].courses[j].credits = 1;
                    break;
                default:
                    printf("Invalid course code\n");
                    return 1;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        printf("%s %.1f\n", students[i].name, calculate_gpa(students[i]));
    }

    return 0;
}
