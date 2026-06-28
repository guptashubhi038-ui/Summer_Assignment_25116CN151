#include <stdio.h>
#include <string.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    char destination[50];
    int seatNo;
    int booked;
};

int main()
{
    struct Ticket t[100];
    int n = 0, choice, i, ticketNo, found;

    while (1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Bookings\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Ticket Number: ");
            scanf("%d", &t[n].ticketNo);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", t[n].name);

            printf("Enter Destination: ");
            scanf(" %[^\n]", t[n].destination);

            printf("Enter Seat Number: ");
            scanf("%d", &t[n].seatNo);

            t[n].booked = 1;
            n++;

            printf("Ticket Booked Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Bookings Available!\n");
            }
            else
            {
                printf("\n------ Booking Details ------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nTicket %d\n", i + 1);
                    printf("Ticket No   : %d\n", t[i].ticketNo);
                    printf("Passenger   : %s\n", t[i].name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Seat No     : %d\n", t[i].seatNo);

                    if (t[i].booked)
                        printf("Status      : Booked\n");
                    else
                        printf("Status      : Cancelled\n");
                }
            }
            break;

        case 3:
            printf("Enter Ticket Number to Search: ");
            scanf("%d", &ticketNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    printf("\nTicket Found!\n");
                    printf("Ticket No   : %d\n", t[i].ticketNo);
                    printf("Passenger   : %s\n", t[i].name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Seat No     : %d\n", t[i].seatNo);

                    if (t[i].booked)
                        printf("Status      : Booked\n");
                    else
                        printf("Status      : Cancelled\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Ticket Not Found!\n");

            break;

        case 4:
            printf("Enter Ticket Number to Cancel: ");
            scanf("%d", &ticketNo);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (t[i].ticketNo == ticketNo)
                {
                    found = 1;

                    if (t[i].booked)
                    {
                        t[i].booked = 0;
                        printf("Ticket Cancelled Successfully!\n");
                    }
                    else
                    {
                        printf("Ticket Already Cancelled!\n");
                    }

                    break;
                }
            }

            if (found == 0)
                printf("Ticket Not Found!\n");

            break;

        case 5:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}