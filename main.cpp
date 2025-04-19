#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int lang=0;
int choice=0;
struct Product {
    string name_en;
    string name_ru;
    string name_uz;
    string code;
    double price;
};
void displayCatalogues() {
    cout << "\n=====================================\n";

    if (lang == 0) {
        cout << "         📋 Available Sections 📋\n";
    }
    else if (lang == 1) {
        cout << "         📋 Доступные разделы 📋\n";
    }
    else {
        cout << "         📋 Mavjud bo‘limlar 📋\n";
    }

    cout << "=====================================\n";

    if (lang == 0) {
        cout << left << setw(5) << "No." << setw(20) << "Section\n";
        cout << "-------------------------------------\n";
        cout << left << setw(5) << "1." << setw(20) << "Fruits" << endl;
        cout << left << setw(5) << "2." << setw(20) << "Vegetables" << endl;
        cout << left << setw(5) << "3." << setw(20) << "Dairy products" << endl;
        cout << left << setw(5) << "4." << setw(20) << "Meat" << endl;
        cout << left << setw(5) << "5." << setw(20) << "Bakery" << endl;
        cout << left << setw(5) << "6." << setw(20) << "Sweets" << endl;
        cout << left << setw(5) << "7." << setw(20) << "Water and beverages" << endl;


    }
    else if (lang == 1) {
        cout << left << setw(5) << "№" << setw(20) << "Раздел\n";
        cout << "-------------------------------------\n";
        cout << left << setw(5) << "1." << setw(20) << "Фрукты" << endl;
        cout << left << setw(5) << "2." << setw(20) << "Овощи" << endl;
        cout << left << setw(5) << "3." << setw(20) << "Молочные продукты" << endl;
        cout << left << setw(5) << "4." << setw(20) << "Мясо" << endl;
        cout << left << setw(5) << "5." << setw(20) << "Выпечка" << endl;
        cout << left << setw(5) << "6." << setw(20) << "Сладости" << endl;
        cout << left << setw(5) << "7." << setw(20) << "Вода и Напитки" << endl;
    }
    else {
        cout << left << setw(5) << "№" << setw(20) << "Bo‘lim\n";
        cout << "-------------------------------------\n";
        cout << left << setw(5) << "1." << setw(20) << "Mevalar" << endl;
        cout << left << setw(5) << "2." << setw(20) << "Sabzavotlar" << endl;
        cout << left << setw(5) << "3." << setw(20) << "Sut mahsulotlari" << endl;
        cout << left << setw(5) << "4." << setw(20) << "Go'sht mahsulotlari" << endl;
        cout << left << setw(5) << "5." << setw(20) << "Non mahsulotlari" << endl;
        cout << left << setw(5) << "6." << setw(20) << "Shirinliklar" << endl;
        cout << left << setw(5) << "7." << setw(20) << "Ichimliklar" << endl;
    }

    cout << "=====================================\n";
}


void displayProducts(Product products[], int size, string sectionName) {
    cout << "\n=====================================\n";

    if (lang == 0) {
        cout << "        🛒 " << sectionName << " Available Products 🛒\n";
    }
    else if (lang == 1) {
        cout << "        🛒 Доступные товары в разделе " << sectionName << " 🛒\n";
    }
    else {
        cout << "        🛒 " << sectionName << " bo‘limidagi mahsulotlar 🛒\n";
    }

    cout << "=====================================\n";
    cout << left << setw(5) << "No." << setw(20) << "Product" << setw(10) << "Code" << setw(10) << "Price" << endl;
    cout << "-----------------------------------------------\n";

    for (int i = 0; i < size; i++) {
        string name = (lang == 0) ? products[i].name_en :
                      (lang == 1) ? products[i].name_ru : products[i].name_uz;

        cout << left << setw(5) << (i + 1)
             << setw(20) << name
             << setw(10) << products[i].code
             << "$" << fixed << setprecision(2) << products[i].price
             << endl;
    }

    cout << "=====================================\n";
}

    void displayCatalogues();
    Product fruits[] = {
        {"Apple", "Яблоко", "Olma", "101", 22.990},
        {"Banana", "Банан", "Banan", "102", 23.990},
        {"Orange", "Апельсин", "Apelsin", "103", 26.990},
        {"Pineapple", "Ананас", "Ananas", "104", 22.990},
        {"Blueberry", "Голубика", " ", "105", 72.990},
        {"Pear", "Груша", "Nok", "106", 18.990},
{"Grapes", "Виноград", "Uzum", "107", 79.900},
{"Pomegranate", "Гранат", "Anor", "108", 39.900},
{"Kiwi", "Киви", "Kivi", "109", 89.900},
{"Strawberry", "Клубника", "Qulupnay", "110", 47.900},
{"Persimmon", "Хурма", "Xurmo", "111", 49.900},
{"Lemon", "Лимон", "Limon", "112", 34.900},
{"Pear", "Груша", "Nok", "113", 44.900},
{"Peach", "Персик", "Shaftoli", "114", 59.900},
{"Watermelon", "Арбуз", "Tarvuz", "115", 14.900},
{"Melon", "Дыня", "Qovun", "116", 19.900},
{"Cherry", "Вишня", "Gilos", "117", 69.900},
{"Mango", "Манго", "Mango", "118", 89.900},
    };

    Product vegetables[] = {
        {"Tomato", "Помидоры", "Pamildori", "201", 30.990},
        {"Cucumber", "Огурцы", "Bodring", "202", 14.990},
        {"Potato", "Картофель", "Kartoshka", "203", 19.990},
        {"Carrot", "Морковь", "Sabzi", "204", 14.990},
        {"Onion", "Лук", "Piyoz", "205", 4.990},
        {"Pepper", "Болгарский перец", "Bulg'or qalampiri","206", 67.990},
{"Eggplant", "Баклажан", "Baqlajon", "207", 17.900},
{"Cabbage", "Капуста", "Karam", "208", 12.900},
{"Garlic", "Чеснок", "Sarimsoq", "209", 39.900},
{"Zucchini", "Кабачок", "Baqlajon", "210", 14.900},
{"Pumpkin", "Тыква", "Qovoq", "211", 9.900},
{"Spinach", "Шпинат", "Ismaloq", "212", 19.900},
{"Green Onion", "Зеленый лук", "Yashil piyoz", "213", 9.900},
{"Dill", "Укроп", "Ukrop", "214", 7.900},
{"Parsley", "Петрушка", "Petrushka", "215", 7.900},
{"Cilantro", "Кинза", "Kashnich", "216", 7.900},
{"Lettuce", "Салат", "Salat bargi", "217", 14.900},
{"Radish", "Редис", "Turp", "218", 12.900},
{"Beetroot", "Свекла", "Lobyo", "219", 9.900},
{"Cauliflower", "Цветная капуста", "Gulkaram", "220", 19.900},

    };
Product dairy_products[] = {
        {"Milk", "Молоко", "Sut", "301", 13.990},
        {"Cream", "Сливки", "Qaymoq", "302", 21.990},
        {"Yogurt", "Йогурт", "Yog'urt", "303", 8.990},
        {"Ayran", "Айран", "Ayron", "304", 6.990},
        {"Feta Cheese", "Брынза", "Oq pishloq", "305", 34.990},
        {"Processed Cheese", "Плавленый сыр", "Qo'shimcha pishloq", "306", 25.990},
        {"Hard Cheese", "Твёрдый сыр", "Qattiq pishloq", "307", 49.990},
        {"Salted Cheese", "Солёный сыр", "Tuzlangan pishloq", "308", 28.990},
        {"Sour Cream", "Сметана", "Smetana", "309", 14.990},
        {"Cottage Cheese", "Творог", "Tvorog", "310", 17.990},
        {"Dried Yogurt Balls", "Курт", "Qurut", "311", 8.990},
        {"Strained Yogurt", "Сюзьма", "Suzma", "312", 11.990},
        {"Butter", "Масло", "Saryog'", "313", 32.990},
        {"Margarine", "Маргарин", "Margarin", "314", 15.990},
        {"Condensed Milk", "Сгущённое молоко", "Qaymoqli sut", "315", 18.990},
        {"Ice Cream", "Мороженое", "Muzqaymoq", "316",24.990}
    };

    Product meats[] = {
        {"Beef", "Мясо говядины", "Mol go'shti", "401", 139.990},
        {"Mutton", "Мясо баранины", "Qo'y go'shti", "402", 114.990},
        {"Chicken fillet", "Филе куриное", "Tovuq go'shti", "403",63.990},
    };

    Product bakery[] = {
        {"White Bread", "Белый хлеб", "Oq non", "501", 8.900},
    {"Black Bread", "Черный хлеб", "Qora non", "502", 9.900},
    {"Baguette", "Багет", "Baget", "503", 12.900},
    {"Croissant", "Круассан", "Cruassan", "504", 14.900},
    {"Donut", "Пончик", "Ponchik", "505", 7.900},
    {"Cake Napoleon", "Торт Наполеон", "Napoleon torti", "506", 89.900},
    {"Eclair", "Эклер", "Ecler", "507", 12.900},
    {"Puff Pastry", "Слоеное тесто", "Qatlam xamir", "508", 19.900},
    {"Biscuits", "Печенье", "Pechene", "509", 17.900},
    {"Cheesecake", "Чизкейк", "Chizkeyk", "510", 49.900},

    };

    Product sweets[] = {
        {"Chocolate Alpen Gold", "Шоколад Alpen Gold", "Alpen Gold shokolad", "601", 24.900},
    {"Snickers", "Сникерс", "Snickers", "602", 14.900},
    {"Rafaello", "Рафаэлло", "Rafaelo", "603", 39.900},
    {"Alpen Gold Crispy", "Альпен Гольд Хрустящий", "Alpen Gold Krispi", "604", 25.900},
    {"Milka Chocolate", "Шоколад Милка", "Milka shokolad", "605", 29.900},
    {"KitKat", "КитКат", "KitKat", "606", 12.900},
    {"Twix", "Твикс", "Twix", "607", 14.900},
    {"Nestle Classic", "Нестле Классик", "Nestle Klassik", "608", 21.900},
    {"Bounty", "Баунти", "Bounty", "609", 14.900},
    {"Ferrero Rocher", "Ферреро Роше", "Ferrero Roshe", "610", 59.900},

    };
    Product water_and_beverages[] = {
        {"Coca-Cola 1L", "Кока-Кола 1л", "Coca-Cola 1L", "701", 12.900},
       {"Fanta 1L", "Фанта 1л", "Fanta 1L", "702", 12.900},
       {"Sprite 1L", "Спрайт 1л", "Sprite 1L", "703", 12.900},
       {"Pepsi 1L", "Пепси 1л", "Pepsi 1L", "704", 11.900},
       {"Nestle Water 1.5L", "Вода Nestle 1.5л", "Nestle suv 1.5L", "705", 5.900},
       {"Juice Rich 1L", "Сок Rich 1л", "Rich sharbat 1L", "706", 19.900},
       {"Lipton Ice Tea", "Липтон Айс Ти", "Lipton Ice Tea", "707", 14.900},
       {"Red Bull", "Ред Булл", "Red Bull", "708", 24.900},
       {"Nescafe Classic", "Нескафе Классик", "Nescafe Klassik", "709", 49.900},
       {"Cappy Juice", "Сок Cappy", "Cappy sharbat", "710", 17.900},
    };

void displaySelectedProducts(int choice) {
    switch(choice) {
        case 1:
            if(lang == 0) {
                displayProducts(fruits, sizeof(fruits)/sizeof(fruits[0]), "Fruits");
            } else if(lang == 1) {
                displayProducts(fruits, sizeof(fruits)/sizeof(fruits[0]), "Фрукты");
            } else {
                displayProducts(fruits, sizeof(fruits)/sizeof(fruits[0]), "Mevalar");
            }
        break;
        case 2:
            if(lang == 0) {
                displayProducts(vegetables, sizeof(vegetables)/sizeof(vegetables[0]), "Vegetables");
            } else if(lang == 1) {
                displayProducts(vegetables, sizeof(vegetables)/sizeof(vegetables[0]), "Овощи");
            } else {
                displayProducts(vegetables, sizeof(vegetables)/sizeof(vegetables[0]), "Sabzavotlar");
            }
        break;
        case 3:
            if(lang == 0) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Dairy");
            }
            else if(lang == 1) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Молочные продукты");
            }
            else{
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Sut mahsulotlari");
            }
        break;
        case 4:
            if(lang == 0) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Meat");
            }
            else if(lang == 1) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Мясо");
            }
            else{
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Go'sht mahsulotlari");
            }
        break;
        case 5:
            if(lang == 0) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Bakery");
            }
            else if(lang == 1) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Выпечка");
            }
            else{
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Non mahsulotlari");
            }
        break;
        case 6:
            if(lang == 0) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Sweets");
            }
            else if(lang == 1) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Сладости");
            }
            else{
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Shirinliklar");
            }
        break;
        case 7:
            if(lang == 0) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Water and beverages");
            }
            else if(lang == 1) {
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Вода и Напитки");
            }
            else{
                displayProducts(dairy_products, sizeof(dairy_products)/sizeof(dairy_products[0]), "Ichimliklar");
            }
        break;
    }
}
int main() {
    cin>>lang;
    displayCatalogues();
    cin>>choice;
    displaySelectedProducts(choice);
}