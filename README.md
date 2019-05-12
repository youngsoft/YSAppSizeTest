# YSAppSizeTest
Solution of reduce iOS application size(减少iOS应用程序尺寸的解决方案)。

---

通过对静态库的正确使用，可以有效的减少应用程序包的尺寸，其原理是根据对静态库的编译和链接规则得出来的，详细的原理介绍请参考文章：[深入iOS系统底层之静态库介绍](https://www.jianshu.com/p/ef3415255808)。

在本例中的同一个Workspace中分别建立ThinApp和FatApp两个工程，这两个工程实现的功能是一样。在整个应用程序中分别定义了CA、CB、CC、CD、CE一共5个OC类，定义了一个UIView(Test)分类，还有定义了两个C函数：libFoo1和libFoo1。

整个应用程序中只使用了CA和CC两个OC类，以及调用了UIView(Test)分类方法，以及调用了libFoo1函数，并且同时都采用导入静态库的形式。但是因为这两个工程对类文件的分布和引用策略不同使得两个应用程序的最终可执行代码的尺寸是不相同的。

### FatApp中的文件定义和分布策略
1. CA,CB两个类都定义在主程序工程中。
2. CC,CD,CE三个类，以及UIView(Test)分类，还有libFoo1,libFoo2两个函数都定义在FatAppLib静态库工程中。
3. CC,CD两个类定义在同一个文件中，CE类则定义在单独的文件中。
3. FatApp工程依赖并导入了FatAppLib静态库工程。
4. FatApp工程的Other Linker Flags中设置了 -ObjC选项。

### ThinApp中的文件定义和分布策略
1.	主程序工程就是一个壳工程。
2. CA,CB,CC,CD,CE5个类，以及UIView(Test)分类，还有libFoo1,libFoo2两个函数都定义在ThinAppLib静态库工程中。
3. 上述的5个类都分别定义在不同的文件中。
4. ThinApp工程依赖并导入了ThinAppLib静态库工程。
5. ThinApp工程的Other Linker Flags中没有设置-ObjC选项。


因为上述的两个相同功能的工程的策略不同，在程序被Archive出来后，FatApp可执行程序的尺寸是367KB，而ThinApp可执行程序的尺寸是334KB。通过一些工具比如Mach-O View或者 IDA可以看出：FatApp中5个OC类的代码以及libFoo1函数，还有UIView(Test)分类的代码都被链接进可执行程序中；而ThinApp中则只有CA,CC两个类以及libFoo1函数，还有UIView(Test)分类的代码被链接进可执行程序中。

您可以从：[iOS应用程序瘦身的静态库解决方案](https://juejin.im/post/5cd2be66e51d456e831f69e4)一文中详细了解具体的构建规则。
