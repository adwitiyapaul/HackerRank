class Message 
{
  private:
      string text;
      static int id;
      int current_id;
  public:
      Message() { current_id = ++id; }
      Message(string t){ current_id = ++id; text=t; }
      const string& get_text() {
          return text;
      }
      // overloaded < operator
      bool operator < (const Message& M2) {
          if(current_id < M2.current_id)
              return true;
          else
              return false;
      }
};
int Message::id = 0;

class MessageFactory 
{
  public:
      MessageFactory() {}
      Message create_message(const string& text) {
          Message m = Message(text);
          return m;
      }
};
