#define COMMON_5KG 500
#define PREF_5KG 400
#define ENTERPRISE_20KG 1500

void shippingCalculator();

char getUserChoice();

void shippingCalculator()
{
    char choice[1];
    float weight = 0;
    int opt;
    float overWeight = 0;
    float price = 0;

    do
    {
        printf("\n Shipping calculator\n");
        printf("\n Client types:\n 1) Common customer\n 2) Preference customer \n 3) Enterprise customer\n 4) Exit\n");
        printf("\nSelect an option: ");
        scanf("%d", &opt);
        printf("Enter package weight: ");
        scanf("%f", &weight);

        switch (opt)
        {

        case 1:

            if (weight >= 5)
            {
                overWeight = weight - 5;

                price = COMMON_5KG + (overWeight * 100);
            }
            else
            {
                price = COMMON_5KG;
            }
            break;

        case 2:
            if (weight >= 5)
            {
                overWeight = weight - 5;

                price = PREF_5KG + (overWeight * 100);
            }
            else
            {
                price = PREF_5KG;
            }

            break;

        case 3:
            if (weight >= 5)
            {
                overWeight = weight - 5;

                price = ENTERPRISE_20KG + (overWeight * 100);
            }
            else
            {
                price = ENTERPRISE_20KG;
            }
            break;

        case 4:
            printf("Exiting...");
            exit(1);
            break;

        default:
            printf("Invalid option");
            break;
        }

        choice = getUserChoice();

    } while (choice != 'n' && choice != 'N')
}
