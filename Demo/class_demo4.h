class Demo {
// 宣告 public 的成員
public:
    Demo();
    Demo(int);
    Demo(int, int);
    void set_a(int);
    void set_b(int);
    int get_a();
    int get_b();
    int do_something();
    
// 宣告 private 的成員
private:
    int a;
    int b;
    int *arrays;
};