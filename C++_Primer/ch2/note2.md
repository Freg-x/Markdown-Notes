#### main

* main被启动代码调用，启动代码是由编译器添加到程序中的，是程序和os之间的桥梁
* 部分框架提供了框架程序包含一个隐含的main



####注释

* /**/是C风格注释，//是cpp风格，尽量使用cpp风格，因为它不需要检查匹配



#### 头文件和命名空间

* 预处理器在源代码被编译之前将头文件和源代码组合起来

* c的头文件都按.h结尾命名，c++也可以使用；但按照c++风格转换后一般去掉.h并在文件前加上c

  eg: math.h -> cmath

  iostream等为纯粹的c++头文件

* 使用using定义一种命名空间是一种偷懒的做法，大型项目中可能存在风险，可以按需使用

  ```c++
  using std::cout;
  using std::endl;
  using std::cin;
  ```

  还可以放到特定的函数定义前面

  简单项目中无所谓

  



#### cout

* 输出是一个流，即从程序输出的一系列字符，cout是一个预先定义好的对象，它表示这种流，其属性是在iostream中定义的。'<<'是一个插入运算符（在c中表示移位运算，这是一个运算符重载），它将右侧的信息插入了输出流中。
* endl是一个特殊的控制符号(manipulator)，它定义在iostream中，对cout有特殊含义。
* 输出一个数字时，cout会智能地把数字转为字符串输出，而非像printf一样必须指出输出的类型，这来源于运算符重载，我们也可以对该运算符重载让cout可以输出自己的类型
* cin同样可以根据声明类型将输入智能转化



#### 目前为止的代码规则

* 每条语句占一行
* 每个函数都有一个开始/结束花括号，各占一行
* 所有语句相对花括号进行缩进
* 与函数名称相关的小括号周围没有空白



#### 声明和变量

* 计算机在存储变量时须指明 存储的位置 和 所需内存
* 从语言设计的角度讲，变量使用必须声明，否则可能会在某些拼写错误的情况下创建出新的变量
* c++只需在首次使用前声明即可，无需都声明在函数/过程的开始，以致于使用过程中到处寻找
* c++允许连续赋值

```c++
int a;
int b;
int c;
a=b=c=0;
```



#### 基础的类

* cout是一个ostream对象，cin是一个istream对象



#### 函数

* 函数的原型描述函数接口，定义中包含了函数的代码
* c++不允许函数定义在函数中，每个函数都是平等的
