---
typora-copy-images-to: ./images
---

可以将这部分理解成目录



#### 架构，性能和游戏

总会有人改动代码，因此代码对改动的响应将是至关重要的。

修改的流程可以是这样的：

![截屏2020-04-06下午5.09.12](/Users/fregs/Desktop/代码区/Markdown-Notes/Design_Pattern/images/截屏2020-04-06下午5.09.12.png)

**解耦的好处**：

* 由于在理解代码上往往要花费太多时间，所以在设计架构时要考虑**最小化在编写代码前需要了解的信息**，这就是解耦的好处，你在修改代码时有时只需了解其中一块而不是全部。

**解耦的坏处**：

* 与之对应的是，有时候会因为过分追求解耦而设计了太多抽象类、接口，以至于每次回溯的时候不清楚哪一个脚手架是真正有用的。

* 同时，由于虚函数和接口是运行时多态，使用过多也会造成程序性能的下降。

因此，这里的推荐是，保持代码的灵活直到确定设计，再去除不必要的抽象层来提高性能。



综上，游戏架构的设计其实是以下三方的平衡：

1、 为了在项目的整个生命周期保持其可读性，需要好的架构（长期开发的速度）

2、需要更好的运行时性能 （运行时速度）

3、需要让现在想要的特性更快地实现（原型开发，短期开发的速度）