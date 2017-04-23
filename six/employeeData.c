#include <stdio.h>

struct database {
  int id_number;
  int age;
  float salary;
};

int main(void)
{
  struct database employee; /* There is now an employee variable that has modifiable variables inside it. */
  employee.age = 38;
  employee.id_number = 1;
  employee.salary = 87000.99;

  printf("Age: %d\nID Number: %d\nSalary: %.2f\n", employee.age, employee.id_number, employee.salary);

}
