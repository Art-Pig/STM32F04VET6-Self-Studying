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






