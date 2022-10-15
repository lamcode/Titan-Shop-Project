/*Titan Payment System Project CPSC 335*/

#include <string>
#include <iostream>
using namespace std;

class TitanUser
{
    private:
        string m_Name;
        string m_FullName;
        string m_Phno;
        string m_Password;
        string m_Country;
        string m_Address;
    public:
        TitanUser();
        TitanUser(const string& name, const string& fullname, const string& phno, const string& password, const string& country, const string& address);
        void CheckLogin();
        void CreateAccount();
        void QueryInformation();
        void StorePurchases();
        void ViewMaxMinTransaction();
        void ViewPaymentsDue();
        void ViewPaymentHistory();
        void DisplayAllPurchases();

        //Test Case Functions
        TitanUser(const string& name);
        string GetName() { return m_Name; }
};

TitanUser :: TitanUser() //Initializer list for Default Constructor
    : m_Name("Unknown Name")
    , m_FullName("Unknown Full Name")
    , m_Phno("Unknown Number")
    , m_Password("Unknown Password")
    , m_Country ("Unknown Country")
    , m_Address ("Unknown Address")
{}

TitanUser :: TitanUser(const string& name, const string& fullname, const string& phno, const string& password, const string& country, const string& address) //Parameterized Constructor
    : m_Name(name)
    , m_FullName(fullname)
    , m_Phno(phno)
    , m_Password(password)
    , m_Country(country)
    , m_Address(address)
{}

TitanUser :: TitanUser(const string& name) //Parameterized Test-Case For Single Name Input
    : m_Name (name)
{}

void CheckLogin()
{
}

void CreateAccount()
{
}

void QueryInformation()
{
}

void StorePurchases()
{
}

void ViewMaxMinTransaction()
{
}

void ViewPaymentsDue()
{
}

void ViewPaymentHistory()
{
}

void DisplayAllPurchases()
{
}

void MenuDisplay()
{
    int choice;

    do{
    //Display Menu
    cout << "\n***** Titan Payment System *****\n\n";
    cout << "1. Log Into Account\n";
    cout << "2. Create Account\n";
    cout << "3. Query User Information\n";
    cout << "4. Upload Purchases\n";
    cout << "5. Query Minimum And Maximum Transactions\n";
    cout << "6. Query Amount Due and Total Paid\n";
    cout << "7. Retrieve Payment History (Table Of Amt Paid On Different Occasions)\n";
    cout << "8. Display All Purchases Made (Filter for purchases made between certain days)\n";
    cout << "9. Quit\n";

    cout << "\nEnter Selection: ";

    //Selection Choice
    cin >> choice;

    //Evaluate Choice
        switch(choice){
                case 1:
                    cout << "Login: " <<endl;
                    break;
                    //Login Information
                case 2:
                    //Create Account
                    break;
                case 3:
                    //Query User Information
                    break;
                case 4:
                    //Upload Purchases
                    break;
                case 5:
                    //Query Minimum and Maximum Transaction
                    break;
                case 6:
                    //Query Amount Due and Total Paid
                    break;
                case 7:
                    //Retrieve Payment History
                    break;
                case 8:
                    //Display All Purchases Made
                    break;
        }
    } while (choice != 9);
}

int main ()
{
    MenuDisplay();

    //Test Cases
    TitanUser e0;
    cout << e0.GetName() << endl;
    TitanUser e1("Bob");
    cout << e1.GetName() << endl;
}
