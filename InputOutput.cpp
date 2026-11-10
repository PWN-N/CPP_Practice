class solution {
public:
  void printInput(){
  int a;
  std::cin >>a;
  std::cin.ignore();
  
  std::string s;
  std::getline(std::cin, s);
  std::cout<<a<<" "<<s;
}
};
