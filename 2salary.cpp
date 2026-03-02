#include <stdio.h>

int main() {
    int n;
    float salary, pf, latecut,total, leave, esic, net_salary, ect;
    char name[50];

    printf("...... Salary Management System ......\n");
    printf("How many employees are you calculating for?: ");
    
    // ?? scanf ????? ? ????? ??? ?? ????? ??? ?? ??? ???? ???? ? ???? ??? ??
    if (scanf("%d", &n) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    for(int i = 1; i <= n; i++) {
        printf("\n--- Entry for Employee #%d ---\n", i);
        
        printf("Enter Name: ");
        // %s ?? ??? ?? ????? ????? ??? ? ????? ??
        scanf("%s", name); 
        
        printf("Enter Basic Salary: ");
        scanf("%f", &salary);
        
        printf("Enter Latecut day: ");
        scanf("%f", &latecut);      
        
        printf("Enter Leave deduction: ");
        scanf("%f", &leave);

        printf("Enter extra (ect) amount: ");
        scanf("%f", &ect);
        total=salary-latecut-leave+ect;
        printf("total:%f",total);

        // ?????
        pf = total * 0.11;
        esic =total* 0.04;
        net_salary = total-(pf-esic);

        // ??????
        printf("\n--- Salary Slip for %s ---\n", name);
        printf("Basic Salary  : %.2f\n", salary);
        printf("Extra (ect)   : %.2f\n", ect);
        printf("PF (12%%)      : %.2f\n", pf);
        printf("ESIC (4%%)  : %.2f\n", esic);
        printf("Latecut/Leave : %.2f\n", (latecut + leave));
        printf("---------------------------\n");
        printf("FINAL TAKE-HOME: %.2f\n", net_salary);
        printf("---------------------------\n");
    }

    return 0;
}
