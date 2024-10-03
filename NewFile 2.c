#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int fineRate = 0, fineAmount = 0;

    // User inputs
    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date (as day number): ");
    scanf("%d", &dueDate);

    printf("Enter Return Date (as day number): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate
    if (daysOverdue <= 7 && daysOverdue > 0) {
        fineRate = 20;
    } else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50;
    } else if (daysOverdue >= 15) {
        fineRate = 100;
    } else {
        fineRate = 0; // No fine if returned on or before due date
    }

    // Calculate total fine
    fineAmount = fineRate * daysOverdue;

    // Display results
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh %d per day\n", fineRate);
    printf("Total Fine Amount: Ksh %d\n", fineAmount);

    return 0;
}

