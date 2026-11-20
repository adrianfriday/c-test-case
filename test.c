#include <stdio.h>
#include <string.h>

extern const char *outcome_from_grade(int);

int test_case(int grade, const char* expected)
{
    const char* actual = outcome_from_grade(grade);

    if (strcmp(actual, expected) != 0)
    {
        printf(
            "FAIL: grade=%d expected=%s got=%s\n",
            grade,
            expected,
            actual
        );


        return 1; // I've failed, return 1
    }
    
    // must've passed the test

    return 0;
}

int main()
{
    int failures = 0;

    failures += test_case(1, "fail");
    failures += test_case(4, "fail");

    failures += test_case(5, "pass");
    failures += test_case(7, "pass");

    failures += test_case(8, "distinction");
    failures += test_case(10, "distinction");

    if (failures == 0)
    {
        printf("All tests passed\n");
        return 0;
    }

    printf("%d tests failed\n", failures);
    return 1;
}
