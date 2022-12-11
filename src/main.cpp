#include <iostream>

struct MobilePhone {
  double weight;
  bool is_broken;
  double price;
};

void printPhoneStruct(MobilePhone* phone_ptr){
  std::cout << "Вес мобилы: " << phone_ptr->weight << std::endl;
  std::cout << "Мобила сломана: " << phone_ptr->is_broken << std::endl;
  std::cout << "Сколько стоит мобила: " << phone_ptr->price << std::endl;
}

void printXML(MobilePhone* phones, int n){
  std::cout << "<MobilePhones>" << std::endl;
  for (int i = 0; i < n; i++) {
    std::cout << "\t" << "<MobilePhones id=" << '"' << i << '"' << " weight=" << '"' << phones[i].weight
              << '"' << " is_broken=" << '"' << std::boolalpha << phones[i].is_broken << '"'
              << " price=" << '"' << phones[i].price << "\"/>" << std::endl;
  }
  std::cout << "</MobilePhones>" << std::endl;
}

int main(){
  unsigned int number;
  std::cout << "Введите количество мобил: ";
  std::cin >> number;
  MobilePhone *phones = new MobilePhone[number];

  for (int i=0; i<number; i++){
    std::cout << "Введите данные мобилы №" << i+1 << std::endl;
    std::cout << "Введите вес мобилы: ";
    std::cin >> phones[i].weight;
    std::cout << "Введите состояние мобилы: ";
    std::cin >> phones[i].is_broken;
    std::cout << "Введите цену: ";
    std::cin >> phones[i].price;
  }

   printXML(phones, number);
   delete [] phones;
  return 0;
}
