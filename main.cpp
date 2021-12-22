#include "iostream"

struct MobilePhone {
    double weight;
    bool is_broken;
    double price;
};

int main() {
    using namespace std;
    size_t phone_counter;
    cin >> phone_counter ;

    MobilePhone *phone_array = new MobilePhone[phone_counter];

    for (int i = 0; i < phone_counter; ++i) {
        cin >> phone_array[i].weight >> phone_array[i].is_broken >> phone_array[i].price ;
    }

    cout << "<MobilePhones>" << endl;
    for (int i = 0; i < phone_counter; ++i){
        cout << "<MobilePhone id=\"" << i << "\" weight=\"" << phone_array[i].weight << "\" is_broken=\"" << boolalpha << phone_array[i].is_broken << "\" price=\"" << phone_array[i].price << "\"/>" << endl;
    }

    cout << "</MobilePhones>" << endl;
    delete [] phone_array;

    return 0;
}

