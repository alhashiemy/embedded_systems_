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
    union productInfo info;
};
union productInfo newp()
{
    union productInfo newpr;
    scanf("%f",newpr.floatVal);
    return(newpr);
};

struct products entProduct()
{
    struct products newproduct;
    printf("product name:");
    scanf("%s\n",&newproduct.name);
    printf("Enter the price");
    scanf("%f\n",&newproduct.price);
    printf("inter the quantity:");
    scanf("%d",&newproduct.stock);
    printf("for any additional information:");
    newproduct.info = newp();



    return (newproduct);
};
int main ()
{
    struct products product[3];
    int i=0,j;
    char pcat[50];
    printf("Enter product information\n");
    do
    {
        product[i] = entProduct();
        i++;
    }
    while(i<3);
    for(j=0;j<3;j++)
    {
        printf("information of product number %d :\n",j);
        printf("neme: %s", product[i]);
    }
    return(0);
}
