#include <stdio.h>
enum cat {food,drink,toiletries,clothing};

union productInfo{
    float floatVal;
    int integerVal;
};

struct products {
    char name[50];
    enum cat category;
    float price;
    int stock;
    union productInfo pInfo;
};

union productInfo newp()
{
    union productInfo newpr;
    int cases;
    printf("\nenter 1 for size:\nenter 2 for weight:\n");
    scanf("%d",&cases);
    switch(cases)
    {
        case(1):
        {
            printf("\nEnter float value:");
            scanf("%f",&newpr.floatVal);
        }
        break;
        case(2):
        {
            printf("\nEnter integer value:");
            scanf("%d",&newpr.integerVal);
        }
        break;
        default:
        {
            printf("\nwrong answer");
        }
        break;

    }
    return(newpr);
};

struct products entProduct()
{
    struct products newproduct;
    char cat_num;
    printf("\nproduct name: ");
    scanf("%s",&newproduct.name);
    printf("choose category: \n0 for food\n1 for drink\n2 for toiletrien\n3 for clothing\n");
    scanf("%d",&newproduct.category);
    printf("\nEnter the price: ");
    scanf("%f",&newproduct.price);
    printf("\nEnter the quantity: ");
    scanf("%d",&newproduct.stock);
    printf("\nadditional information of size/weight: ");
    newproduct.pInfo = newp();


    return (newproduct);
};
int main ()
{
    struct products product[3];
    int i;
    printf("Enter product information\n");
    do
    {
        product[i] = entProduct();
        i++;
    }
    while(i<3);
    i=0;
    do
    {
        printf("\n\ninformation of products :\n");
        printf("neme: %s\n", product[i].name);
        printf("category:");
        switch(product[i].category)
        {
            case(food):
                {
                    printf("food\n");
                }break;
            case(drink):
                {
                    printf("drink\n");
                }break;
            case(toiletries):
                {
                    printf("toiletries\n");
                }break;
            case(clothing):
                {
                    printf("clothing");
                }
                break;
        }
        printf("price: %f\n",product[i].price);
        printf("number in stock: %d\n",product[i].stock);
        printf("additional information abour size weight: %f\n",product[i].pInfo);
        i++;
    }
    while(i<3);

    return(0);
}
