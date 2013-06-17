class Container{
  int& _ref;
  int _data;
public:
  //constructor here:
  Container(int& ref, int data):_ref(ref){
    _data = data;
  }
};
