#### const和指针

````c++
char greeting[] = "Hello";

char* p = greeting; //没有用const
const char* p = greeting; //你不可以通过指针修改greeting的值，但可以不通过指针进行修改
char* const p = greeting; //你不可以修改指针的指向，但可以通过指针修改greeting的值
const char* const p = greeting; //即不可以通过指针修改也不可以改变指针的指向
````

具体指针是const还是被指物是const主要取决于星号和const的位置：

```c++
void f1(const Widget* pw)
void f2(Widget const *pw)
```

这两个是一样的，表示你不可以通过指针修改值

在stl中，迭代器类似一个指针，对它声明const类似声明指针为const，即它不能指向其他东西，但可以修改值。

```c++
std::vector<int> vec;

const std::vector<int>::iterator iter = vec.begin();
*iter = 10; //ok
iter++; //error
```

如果你不想允许通过迭代器修改值，可以使用const_iterator

```c++
std::vector<int>::const_iterator iter = vec.begin();
*iter = 10 //error
iter++; //ok
```

#### const和函数

const常被用作修饰函数返回值，防止一些明显的bug：

```c++
class Rational{}; //自定义了一个有理数类
const Rational operator * (const Rational& lhs,const Rational& rhs);

if(a * b = c){} //上述写法可以解决这种bug
```

