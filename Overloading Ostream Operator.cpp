// Enter your code here.
ostream& operator<<(ostream& Output, Person& p) {
  Output << "first_name=" << p.get_first_name() << ","
         << "last_name=" << p.get_last_name();
  return Output;
}
