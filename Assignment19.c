#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char desig[30];
    char gender[10];
    float salary;
};

int main() {
    struct EMPLOYEE e[100];
    int n, male=0, female=0, highSal=0, asstMgr=0;
    
    printf("Enter number of employees: ");
    scanf("%d", &n);
    
    // Input
    for(int i=0; i<n; i++) {
        printf("\nEmployee %d:\n", i+1);
        printf("Name: "); scanf("%s", e[i].name);
        printf("Designation: "); scanf("%s", e[i].desig);
        printf("Gender (M/F): "); scanf("%s", e[i].gender);
        printf("Salary: "); scanf("%f", &e[i].salary);
        
        // Count male/female
        if(strcmp(e[i].gender, "M")==0 || strcmp(e[i].gender, "m")==0)
            male++;
        else if(strcmp(e[i].gender, "F")==0 || strcmp(e[i].gender, "f")==0)
            female++;
        
        // Count high salary
        if(e[i].salary > 10000)
            highSal++;
        
        // Count Asst Manager
        if(strcmp(e[i].desig, "Asst")==0 || strcmp(e[i].desig, "asst")==0)
            asstMgr++;
    }
    
    // Results
    printf("\n========== RESULTS ==========\n");
    printf("a) Total Employees: %d\n", n);
    printf("b) Male: %d, Female: %d\n", male, female);
    printf("c) Salary > 10000: %d\n", highSal);
    printf("d) Asst Manager: %d\n", asstMgr);
    
    return 0;
}