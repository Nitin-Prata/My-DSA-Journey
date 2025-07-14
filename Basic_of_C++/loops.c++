#include <iostream>
using namespace std;
// Program 1
/*
Write a program that takes an input of age
and prints if you are adult or not
*/

// int main()
// {
//     int age;
//     cin >> age;
//     if (age >= 18)
//         cout << "Adult";
//     else if (age < 18)
//         cout << "Minor/Not an adult";

//     return 0;
// }

// Program 2
/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - A
Ask user to enter marks and print the corresponding grade
*/

// int main()
// {
//     int marks;
//     cin >> marks;
//     if (marks < 25)
//     {
//         cout << "F";
//     }
//     else if (marks <= 44)
//     {
//         cout << "E";
//     }
//     else if (marks <= 49)
//     {
//         cout << "D";
//     }
//     else if (marks <= 59)
//     {
//         cout << "C";
//     }
//     else if (marks <= 79)
//     {
//         cout << "B";
//     }
//     else if (marks <= 100)
//     {
//         cout << "A";
//     }
//     return 0;
// }

/*
Take the age from user and then decide accordingly
1. if age<18
print -> not eligible for job
2. if age>= 18
print-> "eligible for job"
3. if age >= 55 and age <= 57
print -> "eligible for job, but retirement soon"
4. if age > 57
print-> "retirement time"
*/

// string check_job(int age)
// {
//     if (age < 18)
//         return "not eligible for job";
//     else if (age <= 54)
//         return "eligible for job";
//     else if (age <= 57)
//         return "eligible for job but retirement soon";
//     else
//         return "retirement time";
// }

// int main()
// {
//     int age;
//     cin >> age;
//     cout << check_job(age);
// }

/*
Take the day no and print the correesponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday
*/

int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
    }
    return 0;
}
