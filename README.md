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

芯片固件库文件解压后：

![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/9e1132e3-95c0-4a7c-9e76-fdf8b38585a2)


Libraries 文件夹下面有CMSIS和 STM32F4xx_StdPeriph_Driver 两个目录，这两个目录包含固件库核心的所有子文件夹和文件


![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/5387ad7f-5f07-4741-863e-742cd91056e7)


![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/bd614c2e-4fdc-4a88-8e88-c213955916d0)

![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/e77f3c53-03f0-4b1e-8160-92b85234ae94)


![image](https://github.com/Art-Pig/STM32F04VET6-Self-Studying/assets/121549293/8e28068e-72e0-4627-b47e-6a2d91d6d495)

