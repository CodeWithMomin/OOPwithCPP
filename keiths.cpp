#include <iostream>
using namespace std;

float calculateTeacherAmount()
{
    float discountAmount;
    float totalPurchase;
    float salestax = 0.05;
    float discountedTotal;
    cout << "Enter the amount of purchase: " << endl;
    cin >> totalPurchase;
    cout << " Total Purchases : " << totalPurchase << endl;

    if (totalPurchase >= 100)
    {

        discountAmount = totalPurchase * 0.12;
        cout << "Teacher's Discount (12%) " << discountAmount << endl;
        cout << "Sales tax " << salestax << endl;
        discountedTotal = totalPurchase - discountAmount;
        cout << "Discounted Total is: " << discountedTotal << endl;
        totalPurchase -= discountAmount;
        totalPurchase *= 1 + salestax;
        cout << "TotalAmount is : " << totalPurchase << endl;
    }
    else
    {
        discountAmount = totalPurchase * 0.10;
        cout << "Teacher's Discount (10%) " << discountAmount << endl;
        discountedTotal = totalPurchase - discountAmount;
        cout << "Discounted Total is : " << discountedTotal << endl;
        cout << "salesTax " << salestax << endl;
        totalPurchase -= discountAmount;
        totalPurchase *= 1 + salestax;
        cout << "Total is : " << totalPurchase << endl;
    }
    return totalPurchase;
}

float calculate_Non_teacher()
{
    float totalPurchase;
    float salesTax = 0.05;
    cout << "Enter your total purchase" << endl;
    cin >> totalPurchase;
    cout << " Total Purchases : " << totalPurchase << endl;
    cout << "SalesTax(5%)" << salesTax << endl;
    totalPurchase += totalPurchase * salesTax;
    cout << "Total" << totalPurchase;
    return totalPurchase;
}

int main()
{
    string profession = " ";
    cout << "Enter your Profession" << endl;
    cin >> profession;
    if (profession == "teacher")
    {
        calculateTeacherAmount();
    }
    else
    {
        calculate_Non_teacher();
    }
}