# STM32F04VET6-Self-Studying

I will share my studying  of  STM32F04VET6.

首先我非常不认同学校的那套教学，一开始就用辅助工具来学习stm32，便相当于没先学会走，就想学会跑了。

我还是非常认可网上那些教学方法，最开始学便应该慢慢学，鉴于我们已经学过51单片机了，并且已经打概知道单片机的各个接口是以寄存器来实现相应功能的，那么对于stm32我们更应该学习它各个包该怎么使用，程序编辑的规范性，以及各功能的相互联系，对于复杂的程序应该用C++写，而不是使用C语言，毕竟C++适合于团队协助使用，并且它的库要更多。
#自学stm32

##第一章 基于STM32VET6的编程环境

###1.keil软件安装

选择版本:Keil5 MDK版，官网地址：[https://www.keil.com/download/](https://www.keil.com/download/)


安装教程不多赘述，安装路径选择非系统盘加英文文件夹


软件的激活，直接上网搜索（搜索关键字“Keil5 MDK的激活”），添加许可证前，一定要以管理员身份运行

###2.芯片包的导入Keil

**方法一：软件导入**（科学上网，网速快）

点图片上红框里绿色的按钮

![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/d39dab9a-861b-4d4f-bfbb-fec30bcb2c50)

由于我之前已经安装过了，以我的芯片型号举例，在search那搜索STM32F407，然后点击install安装

![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/f487e107-b9d4-4de3-ae6d-2af8dd76606a)

**方法二：离线导入**

***注意：我只是拿我的芯片举例，其他芯片自行搜索***


官网下载：[https://www.keil.arm.com/packs/stm32f4xx_dfp-keil/versions/](https://www.keil.arm.com/packs/stm32f4xx_dfp-keil/versions/)

芯片包下载完后，到Keil里导入，点击File，再点击Import From Folder 找到存放此前下载的芯片包文件夹

![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/c8dd568f-e7a7-40c3-924a-0bd3106c4d2f)

###3.基于寄存器学习STM32

**芯片固件库下载**

官网下载：

以STMF407VET6举例，其为F4型号,则点F4

![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/eab394d2-f022-43ea-b8fb-65cd6ab25e47)

网页下拉，点击download下载

![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/ad80032f-f461-4df4-9031-fc9193346797)

**STM32官方标准固件介绍**

参考文章：[https://shequ.stmicroelectronics.cn/thread-635243-1-1.html](https://shequ.stmicroelectronics.cn/thread-635243-1-1.html)

芯片固件库文件解压后：

![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/9e1132e3-95c0-4a7c-9e76-fdf8b38585a2)


Libraries 文件夹下面有CMSIS和 STM32F4xx_StdPeriph_Driver 两个目录，这两个目录包含固件库核心的所有子文件夹和文件


![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/5387ad7f-5f07-4741-863e-742cd91056e7)


CMSIS文件夹存放的是符合CMSIS规范的一些文件。包括STM32F4核内外设访问层代码，DSP 软件库，RTOS API，以及 STM32F4 片上外设访问层代码等。我们后面新建工程的时候会从这个文件夹复制一些文件到我们工程。


![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/bd614c2e-4fdc-4a88-8e88-c213955916d0)



STM32F4xx_StdPeriph_Driver 放的是 STM32F4 标准外设固件库源码文件和对应的头文件。inc 目录存放的是 stm32f4xx_ppp.h 头文件,无需改动。src 目录下面放的是 stm32f4xx_ppp.c 格式的固件库源码文件。每一个.c 文件和一个相应的.h 文件对应。这里的文件也是固件库外设的关键文件，每个外设对应一组文件。


![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/e77f3c53-03f0-4b1e-8160-92b85234ae94)


*Libraries 文件夹里面的文件在我们建立工程的时候都会使用到。*

Project 文件夹下面有两个文件夹。顾名思义，STM32F4xx_StdPeriph_Examples 文件夹下面存放的的 ST 官方提供的固件实例源码，在以后的开发过程中，可以参考修改这个官方提供的实例来快速驱动自己的外设，很多开发板的实例都参考了官方提供的例程源码，这些源码对以后的学习非常重要。STM32F4xx_StdPeriph_Template 文件夹下面存放的是工程模板。

![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/8e28068e-72e0-4627-b47e-6a2d91d6d495)

# 第二章keil 创建新工程



关于keil安装包与stm32固件包的下载可以看我写的笔记第一章
[https://blog.csdn.net/2302_76783933/article/details/137752785?spm=1001.2014.3001.5502](https://blog.csdn.net/2302_76783933/article/details/137752785?spm=1001.2014.3001.5502)

为了创建基于STM32F407的keil新建工程，我前期遇到不少问题就此分享

##问题1.固件库缺少源文件

按照B站大佬“江协科技”新建keil文件的教程所遇到的问题

B站大佬教程视频截图





再看看我们下载的官方固件库（以STM32Fxxx为例）

根本就没有后缀名为 **.mds文件**









文件夹路径：STM32F4xx_DSP_StdPeriph_Lib_V1.9.0\Libraries\CMSIS\Device\ST\STM32F4xx\Source\Templates\arm





虽然有core_cm4.h文件,但却**没有core_cm4.c文件**







文件名路径：D:\Stugying of stm32\stm32f40xxx标准库最新版\en.stsw-stm32065_v1-9-0\STM32F4xx_DSP_StdPeriph_Lib_V1.9.0\Libraries\CMSIS\Include





##问题2.官方keil工程模板过于复杂

stm32官方所提供的keil工程模板过于复杂不利于新手


官方模板截图，有众多的文件占用内存，前期学习根本用不到那么多函数，即使成功生成.hex文件，但警告特别多，新手难以看得懂



##最为推荐的方法


我找了一下午终于找到一个非常好的教程

教程链接：[kiel模板教程](https://blog.csdn.net/Yun_yichen/article/details/133233425?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522171335237716800227415362%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=171335237716800227415362&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_click~default-2-133233425-null-null.142^v100^pc_search_result_base6&utm_term=stm32f407vet6&spm=1018.2226.3001.4187)


不过我在跟着大佬教程时有遇到一些问题，就是我的stm32f4xx.h文件内容与大佬的内容不同






不过也没关系，直接将`STM32F40_41xxx,USE_STDPERIPH_DRIVER`拷贝过去就好了






在补充一下大佬没讲的，记得将这里的魔法棒里的Target里的Arm Compiler 改成 5 vision 或者 5.06版本




最后点一下编译，0错误、0警告

注意main.c文件里的程序最后要空一行








##问题3.下载的keil里的 Arm Compiler 只有 6 vision


下载地址：[https://developer.arm.com/downloads/view/ACOMP5](https://developer.arm.com/downloads/view/ACOMP5)

安装教程：点击三个方块，再点击Foder，再点击Arm Compiler那栏的三个点







点击Add another Arm Compiler ,然后找到刚刚下载好的Arm Compiler文件导进去







----------
<a name="2.芯片包导入keil"></a>
    



## 第三章 正式操作STN32F07系列芯片

<font color=red>注意:以下均以STM32F407VET6为例</font>

### 一、点亮LED灯

复制粘贴我们的**新建工程模板**

我这边找到一个作者开源的STM32F407VET6文件

[Github网址：](https://github.com/Apex-yuan/STM32F407_StudyNotes.git)

点击绿色的Code

点击download zip

打开下载好的文件

打开program

打开新建工程模板

复制新建工程模板复制

创建新文件夹led_test

粘贴新建工程模板到文件夹led_test

#### 1.GPIO

**文档链接**，文档手册

GPIO口寄存器,就是端口，看这一段就好了

**我们需要学会去看代码**

教大家怎么看keil工程文件

源代码呀，头文件呀

使能，初始化，在同一个寄存器可以使用与或


#### 2.RCC时钟

电源复位

RCC的作用，为什么启动单片机就会用到RCC



#### 3.调试

Fly MCU的使用方法

以及如何根据原理图来判断板子的烧录方式

这个很重要

ST-Link 啊，J-Link啊


我所遇到的错误五


至于Stm32F07，我先发一下


不要拘泥，不要被局限

转化思路


买个F103开始学江科大














You
为什么在STM32F407VET6中，GPIO_Pin对应PE口
ChatGPT
ChatGPT
在STM32F407VET6微控制器中，GPIO_Pin对应PE口的原因主要是由于STM32F系列微控制器具有可配置的通用输入输出(GPIO)端口，可以通过软件配置将特定的引脚映射到特定的GPIO端口。PE口是GPIO端口之一，用于控制一组特定的引脚。

在STM32F407VET6中，GPIO引脚是通过字母和数字的组合来标识的，例如PE0，PE1等。这些引脚可以用于连接外部设备或执行特定的功能。PE口表示的是GPIO端口E，它是STM32F407VET6微控制器上的一个物理GPIO端口。

为了控制特定的引脚，需要通过设置相应的寄存器来配置GPIO端口的工作模式、输入/输出状态、上拉/下拉等参数。在程序中，你可以使用相关的STM32库或者直接操作寄存器来控制GPIO引脚的状态和功能。

总之，GPIO_Pin对应PE口是因为在STM32F407VET6微控制器中，特定的GPIO引脚被映射到了GPIO端口E上。

You
哦哦原来是这样呀，就是GPIO约等于PE的意思
ChatGPT
ChatGPT
是的，对于STM32微控制器来说，GPIO（通用输入输出）通常与具体的引脚端口相关联。例如，PE口表示的是GPIO端口E，这意味着GPIO库中的引脚编号通常与端口E上的引脚相关联。因此，当你在代码中看到GPIO_Pin对应PE口时，它表示你在操作与端口E相关的GPIO引脚。

You
哈哈，怪不得我找了半天头文件和源文件也没有找到PE这个词，谢谢你了
ChatGPT
ChatGPT
不客气！有时候在阅读文档或代码时可能会遇到一些缩写或简化的表示方法，但是理解了背后的含义之后就能更轻松地进行开发和调试了。如果你有任何其他问题，都可以随时问我哦！





