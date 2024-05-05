# STM32F04VET6-Self-Studying

I will share my studying  of  STM32F04VET6.

首先我非常不认同学校的那套教学，一开始就用辅助工具来学习stm32，便相当于没先学会走，就想学会跑了。

我还是非常认可网上那些教学方法，最开始学便应该慢慢学，鉴于我们已经学过51单片机了，并且已经打概知道单片机的各个接口是以寄存器来实现相应功能的，那么对于stm32我们更应该学习它各个包该怎么使用，程序编辑的规范性，以及各功能的相互联系，对于复杂的程序应该用C++写，而不是使用C语言，毕竟C++适合于团队协助使用，并且它的库要更多。
#自学stm32

# ArtPig自学stm32

## 第一章 基于STM32VET6的编程环境

### 1.keil软件安装

选择版本:Keil5 MDK版，官网地址：[https://www.keil.com/download/](https://www.keil.com/download/)


安装教程不多赘述，安装路径选择非系统盘加英文文件夹


软件的激活，直接上网搜索（搜索关键字“Keil5 MDK的激活”），添加许可证前，一定要以管理员身份运行

### 2.芯片包的导入Keil

**方法一：软件导入**（科学上网，网速快）

点图片上红框里绿色的按钮

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/b790c7f462a84a118e7c2be99f83ad7c.png)


由于我之前已经安装过了，以我的芯片型号举例，在search那搜索STM32F407，然后点击install安装

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/56b200438f8545288be3ea8401786778.png)


**方法二：离线导入**

***注意：我只是拿我的芯片举例，其他芯片自行搜索***


官网下载：[https://www.keil.arm.com/packs/stm32f4xx_dfp-keil/versions/](https://www.keil.arm.com/packs/stm32f4xx_dfp-keil/versions/)

芯片包下载完后，到Keil里导入，点击File，再点击Import From Folder 找到存放此前下载的芯片包文件夹

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/90bf8295d29d45baa6ce5e4892ac04f2.png)


### 3.基于固件库学习STM32

**芯片固件库下载**

官网下载：

以STMF407VET6举例，其为F4型号,则点F4

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/d2036c6a2fb84cfabec4ff09f7824d77.png)


网页下拉，点击download下载

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/b6647bae95fb4a88b0583e2e302986ce.png)


**STM32官方标准固件介绍**

参考文章：[https://shequ.stmicroelectronics.cn/thread-635243-1-1.html](https://shequ.stmicroelectronics.cn/thread-635243-1-1.html)

芯片固件库文件解压后：


![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/46d1741a503e4aeb9355d394ef980d9f.png)



Libraries 文件夹下面有CMSIS和 STM32F4xx_StdPeriph_Driver 两个目录，这两个目录包含固件库核心的所有子文件夹和文件

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/dbcb0354f15d4e82a19fe910dc344ffc.png)


CMSIS文件夹存放的是符合CMSIS规范的一些文件。包括STM32F4核内外设访问层代码，DSP 软件库，RTOS API，以及 STM32F4 片上外设访问层代码等。我们后面新建工程的时候会从这个文件夹复制一些文件到我们工程。


![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/cca9bb6f1ac542b68db1c9849117ab1e.png)




STM32F4xx_StdPeriph_Driver 放的是 STM32F4 标准外设固件库源码文件和对应的头文件。inc 目录存放的是 stm32f4xx_ppp.h 头文件,无需改动。src 目录下面放的是 stm32f4xx_ppp.c 格式的固件库源码文件。每一个.c 文件和一个相应的.h 文件对应。这里的文件也是固件库外设的关键文件，每个外设对应一组文件。

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/42d274c10905422288c2c6bb42ef86dc.png)


*Libraries 文件夹里面的文件在我们建立工程的时候都会使用到。*

Project 文件夹下面有两个文件夹。顾名思义，STM32F4xx_StdPeriph_Examples 文件夹下面存放的的 ST 官方提供的固件实例源码，在以后的开发过程中，可以参考修改这个官方提供的实例来快速驱动自己的外设，很多开发板的实例都参考了官方提供的例程源码，这些源码对以后的学习非常重要。STM32F4xx_StdPeriph_Template 文件夹下面存放的是工程模板。

[外链图片转存中...(img-5db1178187f24d869920a8b514bc4056.png)


### 4.Keil工程模板创建
**打开STM32固件标准库**   点击project

（如何下载STM32固件标准库，具体请点击目录—— “3.基于寄存器学习stm32” ）

![均以STM32F40XX官方固件库为例](https://img-blog.csdnimg.cn/direct/84280a1653124426bcd4865b7e79e2bf.png)
													均以STM32F40XX官方固件库为例




点击这个模板**STM32F4xx_StdPeriph_Template**s

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/44396cc7fa1849cf9683e04c61c57d00.png)
点击**MDK-ARM**
![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/eb5663cc322048e9b58eee145d30a6e4.png)
之后你能看到这个绿色的**Keil project 工程文件**
![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/c0f3b75089ba4d3696f35d9296db5a10.png)
这便是STM官方替你写好的工程模板

打开工程模板是这样子的界面

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/37ca91a63bb84065a5c50ee107bacdb2.png)

 - 

**打开main程序**，找到main主函数里的while{}，便可以开始写工程了

 - 
 
![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/a491cc71d9504ddba4f8f0769540599c.png)
### 5.自己创建工程模板

个人更推荐B站stm32 大佬 “江协科技”的方法，自己创建一个工程模板

大佬B站首页网址：[添加链接描述]（https://space.bilibili.com/383400717?spm_id_from=333.337.0.0）


## 第二章keil 创建新工程

关于keil安装包与stm32固件包的下载可以看我写的笔记第一章
[https://blog.csdn.net/2302_76783933/article/details/137752785?spm=1001.2014.3001.5502](https://blog.csdn.net/2302_76783933/article/details/137752785?spm=1001.2014.3001.5502)

为了创建基于STM32F407的keil新建工程，我前期遇到不少问题就此分享

### 问题1.固件库缺少源文件

按照B站大佬“江协科技”新建keil文件的教程所遇到的问题

B站大佬教程视频截图

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/edc55e304e424b8f8eef11f1ad304f76.png)




再看看我们下载的官方固件库（以STM32Fxxx为例）

根本就没有后缀名为 **.mds文件**




![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/e8fee7e1f11a427e9830b4df42b5928d.png)





文件夹路径：STM32F4xx_DSP_StdPeriph_Lib_V1.9.0\Libraries\CMSIS\Device\ST\STM32F4xx\Source\Templates\arm





虽然有core_cm4.h文件,但却**没有core_cm4.c文件**

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/8552fff8b22848628cb267492e283280.png)






文件名路径：D:\Stugying of stm32\stm32f40xxx标准库最新版\en.stsw-stm32065_v1-9-0\STM32F4xx_DSP_StdPeriph_Lib_V1.9.0\Libraries\CMSIS\Include





### 问题2.官方keil工程模板过于复杂

stm32官方所提供的keil工程模板过于复杂不利于新手


官方模板截图，有众多的文件占用内存，前期学习根本用不到那么多函数，即使成功生成.hex文件，但警告特别多，新手难以看得懂

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/c01adbdf8beb46bf99ebf056dc16fdbc.png)


### 最为推荐的方法


我找了一下午终于找到一个非常好的教程

[教程链接](https://blog.csdn.net/Yun_yichen/article/details/133233425?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522171335237716800227415362%2522%252C%2522scm%2522%253A%252220140713.130102334%E2%80%A6%2522%257D&request_id=171335237716800227415362&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2alltop_click~default-2-133233425-null-null.142v100pc_search_result_base6&utm_term=stm32f407vet6&spm=1018.2226.3001.4187)


不过我在跟着大佬教程时有遇到一些问题，就是我的stm32f4xx.h文件内容与大佬的内容不同


![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/a65dc18574a64cfab76276e06aa3349a.png)




不过也没关系，直接将`STM32F40_41xxx,USE_STDPERIPH_DRIVER`拷贝过去就好了


![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/a1726aa93e7e4d8894f80ed6fb0828cb.png)




在补充一下大佬没讲的，记得将这里的魔法棒里的Target里的Arm Compiler 改成 5 vision 或者 5.06版本

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/4845804a783c40f6a5f5df609e1802c0.png)



最后点一下编译，0错误、0警告

**注意main.c文件里的程序最后要空一行**




![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/bec9320cdc29438cab066caddcfa143b.png)




### 问题3.下载的keil里的 Arm Compiler 只有 6 vision


下载地址：[https://developer.arm.com/downloads/view/ACOMP5](https://developer.arm.com/downloads/view/ACOMP5)

安装教程：点击三个方块，再点击Foder，再点击Arm Compiler那栏的三个点



![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/2d9f8d1b51914018bda7126086e7147f.png)




点击Add another Arm Compiler ,然后找到刚刚下载好的Arm Compiler文件导进去


![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/8261ecc526834849a06be31fc85c3c2c.png)
## 第三章 正式操作STN32F07系列芯片

<font color=red>注意:以下均以STM32F407VET6为例</font>

### 一、点亮LED灯

复制粘贴我们的**新建工程模板**

<span id="jump">跳转到的地方</span>

我这边找到一个作者开源的STM32F407VET6文件

[Github文件下载网址](https://github.com/Apex-yuan/STM32F407_StudyNotes.git)

点击绿色的Code

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/3578c2236c284a3597eca0fe93936649.png)


点击download zip

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/aa5a3d4da447483bb113d69e7618051a.png)


打开下载好的文件

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/5646b4feee8548df9409c42cebc12555.png)


打开program
![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/b00ee56e28884001b38b3804a3c51456.png)

复制1-新建工程模板

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/4cbd0daffc3b4bdf8caf1884152ceef1.png)


创建新文件夹led_test

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/5085853a11ce43188c0d196ba69980c8.png)


粘贴新建工程模板到文件夹led_test

#### 1.GPIO

[STM32F407VET6下载](https://github.com/Art-Pig/STM32F04VET6-Self-Studying.git)

[github文件下载教程](#jump)

中文手册跳转至175

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/8b02ff8e720842618408c076fa54c522.png)


在上图我们可以知道GPIO其实就是每个**I/O端口**

相信学过51单片机的朋友应该很了解**I/O端口**

我们再来看看这个芯片的原理图

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/f7aa824d83354c5db360519a520ebb3c.png)
我们可以看到我们芯片上写的都是PA0、PB0......PE0之类的，那么我们的GPIO口在哪？

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/34351f83b73d44448aa2e0a27c0a976d.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/a0d7919654f147eb949a59bf659a5519.png)
可以看到PE口就是GPIOE，PA口就是GPIOA，以此类推

如果还不够理解，现在打开我们刚刚的工程文件led_test

打开keil文件选择打开文件**stm32f4xx_gpio.c**

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/23ce9952d98a48fd9a4a49282e7ab924.png)
我们可以看到绿色的注释，

<font color=green>GPIOx peripheral</font>  指GPIOx 外设，而PX（PE、PA之类的）就是外设

<font color=green>GPIOx: where x can be (A..K)</font> 指GPIOx，末尾的“x”可以替换为A、B、C...E，就是PA、PB、PC...PE

LED灯是不是芯片的外设，那我们要点亮它，就得用到我们的外设，就得用到GPIO口

这是我板子的LED灯模块

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/f3092dbf41ee497f926f4827df3091e2.png)
可以看到我们的LED电路是PE口，那么我们的GPIOx就得是GPIOE；

可以看到我们的PE口是下拉电阻，并且是低电平点亮LED灯；

我建议创建一个led.c文件和led.h文件来编写我们的点灯程序，之后直接在main主函数使用；

led.h文件

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/2d4e6057f581404f97ea5b11f6bb6518.png)

led.c文件
![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/1041b29bf0384100b9b4696649b25f96.png)

对于这段代码**GPIO_InitStruct.GPIO_OType = GPIO_OType_PP；** 

<font color=green>**ChatGpt 3.5的回答：**</font>

> GPIO Output type enumeration 可能是指用于描述 GPIO（通用输入输出）引脚输出类型的枚举类型。在嵌入式系统或单片机开发中，GPIO引脚通常可以配置为输出模式，以便控制外部设备的状态。输出类型枚举可能包括：
> 
> 1. **Push-Pull（推挽）**：在输出高电平时输出电压为高电平，输出低电平时输出电压为低电平。这种输出类型具有较快的切换速度和较低的功耗。
> 
> 2. **Open-Drain（开漏）**：在输出高电平时，GPIO引脚处于高阻态，输出电压由外部上拉电阻决定；在输出低电平时，GPIO引脚连接到地，输出电压为低电平。这种输出类型通常用于需要级联多个设备的情况，例如总线通信。
> 
> 3. **Open-Source（开源）**：与开漏类似，但是在输出低电平时，GPIO引脚连接到VCC，输出电压由外部下拉电阻决定。这种类型的输出在一些特定的电路设计中可能会有用。
> 
> 4. **PWM（脉冲宽度调制）**：用于产生脉冲宽度调制信号，常用于控制电机速度、调节亮度等应用中。
> 
> 具体的枚举类型可能会根据硬件平台或开发框架的不同而有所不同，你可能需要查阅相关文档或资料来了解特定平台或框架中的 GPIO 输出类型枚举。

如何查看那些官方帮我们写好的代码



![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/2e8104a4dcea43fea4a000743df9e896.png)
将光标移动到这里，点击鼠标左键![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/43843df7606c4dbe84ab75aca6b24208.png)
点击GO To Definition Of 'GPIO_Init'

这时我们就能看到函数的功能，以及如何使用

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/48fcc82896e74b7591d7267dc10b6f69.png)


<font color=red>**模块化编程**</font>

将创建好的led.h头文件在主函数里使用，即模块化编程

优点是避免了主程序因编写过多的代码而冗长，并且可以随时调用；

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/473733ed38214dce9eefbce07065f626.png)



教大家怎么看keil工程文件

源代码呀，头文件呀

使能，初始化，在同一个寄存器可以使用与或
#### 2.RCC时钟

为什么要初始化时钟？

![在这里插入图片描述](https://img-blog.csdnimg.cn/direct/7d8e2d27e5254fafbf451bd44b84d466.png)


<font color=green>**ChatGpt 3.5的回答：**</font>



> 在使用STM32（STMicroelectronics出品的一系列32位ARM Cortex-M微控制器）时，需要初始化RCC（Reset
> and Clock
> Control）时钟，是因为时钟是微控制器运行的基础。RCC模块负责控制微控制器的时钟源以及时钟分频，确保微控制器能够以正确的时钟频率运行。
> 
> 具体来说，RCC模块可以执行以下功能：
> 
> 1. **时钟源选择**：RCC允许你选择外部晶振、内部时钟源（比如内部RC振荡器）或者外部时钟源作为微控制器的主时钟源。
> 
> 2. **时钟分频**：RCC还允许你设置主时钟频率的分频比例，以便得到你需要的特定时钟频率。
> 
> 3. **时钟使能**：RCC负责使能或者关闭各种外设和总线的时钟，以便控制这些外设和总线的工作状态。
> 
> 
> 因此，在使用STM32时，初始化RCC时钟是非常重要的一步。如果未正确初始化RCC时钟，可能导致微控制器无法正常工作，外设不能正确访问，甚至可能导致系统不稳定或者崩溃。









#### 3.烧录

如何根据电路原理图来判断烧录方法？

<font color=green>**ChatGpt 3.5的回答：**</font>


Fly MCU的使用方法

以及如何根据原理图来判断板子的烧录方式

这个很重要

ST-Link 啊，J-Link啊


我所遇到的错误五


至于Stm32F07，我先发一下


不要拘泥，不要被局限

转化思路


买个F103开始学江科大





