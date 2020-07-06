标题的意思其实是“尽量以编译器替换预处理器”

```c++
#define ASPECT_RATIO 1.653
```

如果上述1.653出现了错误，编译器不会报出ASPECT_RATIO，因为它被替换掉了，这导致追踪错误变得有些困难

正确的做法：

```c++
const double ASPECT_RATIO = 1.653;
```

如果要限制const的作用域到class内，必须要让他成为class的一个成员，为了保障它只有一个实体，必须让他成为一个static成员（多个const没什么意义）

```c++
class GamePlayer{
  private:
  static const int NumTurns = 5;
  int scores[NumTurns];
}
```

能够被指定类型和声明为私有也是const优于define的原因

此后还介绍了实现文件内声明const和enum hack的做法，它们主要对应编译器不通过类内指定值的情况，由于现在多用c++11和c++14，上述情况已经不会发生，故略。

define在定义宏的时候同样有很大缺陷：

```c++
#define Call_Max(a,b) func((a) > (b)?(a):(b))
//即使加上了小括号，防止了运算符优先级的问题，它还会有其他问题
Call_Max(++a,b)
//在上面这句里a被加了两次
```

宏这么垃圾，你为什么要用？

* 预处理，不必为该函数定义空间：**inline**
* a和b可以是任意类型：**模版**

那么：

```c++
template<class T> //typename can be considered same as class here
inline void Call_Max(const T &a, const T &b){
  f(a > b?a : b);
}
```

就是完全的上位替代

* 对于单纯常量，用const替代#define
* 对于形似函数的宏，用inline配合template替换