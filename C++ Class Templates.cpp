/*Write the class AddElements here*/
template <class T>
class AddElements {
    T element;
  public:
    AddElements (T arg) {element=arg;}
    T add (T x) {return x+element;}
};

// class template specialization:
template <>
class AddElements <string> {
    string element;
  public:
    AddElements (string arg) {element=arg;}
    string concatenate (string arg)
    {
      string s = element+arg;
      return s;
    }
};

int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';
