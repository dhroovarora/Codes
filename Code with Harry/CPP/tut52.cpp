#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
        // 1  2  3
        //       ^   
        //       |   
        //       |
        //      ptr
        // ptrTemp 
int main()
{
    int size = 2;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // general store item
    // veggies item
    // Hardware item
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).getData(p , q);
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item Number: " << i + 1 << endl;
        ptrTemp->getData();
        ptr++;
    }

    return 0;
}