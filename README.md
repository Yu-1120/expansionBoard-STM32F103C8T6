# STM32F103C8T6-扩展板（第一版）



## 项目介绍

https://gitee.com/its-a-slap/STM32F103C8T6-exBorad)



### 第二版-硬件电路





## 更新记录

### 硬件更新记录



| 时间Time | 更新内容 | 说明                                                         |
| -------- | -------- | ------------------------------------------------------------ |
| 23-11-13 |          | 第一版硬件mpu6050和无源蜂鸣器重复使用了同一个端口，导致mpu6050测试的数据不太准确，旋转编码器取消了下拉电阻 |
|          |          |                                                              |
|          |          |                                                              |





### 软件更新记录

| 时间Time      | 更新内容                                 | 说明                                                         |
| ------------- | ---------------------------------------- | ------------------------------------------------------------ |
| 23-12-17      | OLED显示屏,PWM驱动舵机,继电器,无源蜂鸣器 |                                                              |
| 23-12-18      | LED闪烁,按键控制LED,旋转编码器           | 旋转编码器（驱动不了）                                       |
| 23-12-25      | OLED显示屏-HX711                         |                                                              |
| 24-1-31       | 对射式红外传感器计次                     |                                                              |
| 24-2-3        | 2路串口输出                              |                                                              |
| 24-2-05       | WS2812B                                  |                                                              |
| 2024年2月16日 | AD单通道，AD多通道,AD单通道摇杆          |                                                              |
| 2024年2月17日 | 软件I2C，硬件I2C,软件SPI,硬件SPI         |                                                              |
| 2024年3月1日  | OLED更新中文取模                         |                                                              |
| 2024年3月2日  | 更新MPU6050-DMP库                        | 本身板子上的mpu6050和无源蜂鸣器引脚重复，所以用不了硬件I2C来去驱动 |
|               |                                          |                                                              |



## 硬件成本

| 日期       | 链接                                                         | 链接                                                         | 金额 |
| ---------- | ------------------------------------------------------------ | ------------------------------------------------------------ | ---- |
| 2022-09-06 | ![1c6916343854379e5176066280cbcef.png](//image.lceda.cn/pullimage/UQs1kzYUNvRW0AB8WWkw1v6gkHsFFu1u2NQXlfrL.png) | https://item.taobao.com/item.htm?spm=a1z09.2.0.0.76c72e8diCtTXZ&id=620064088112&_u=72teeq1c0983 | 9.2  |
| 2023-11-17 | ![image.png](//image.lceda.cn/pullimage/DNakS9YwtadYLVDg4vOApG2oPygryZEct913SZvm.png) | https://item.taobao.com/item.htm?spm=a1z09.2.0.0.76c72e8diCtTXZ&id=554291566489&_u=72teeq1ca1ab | 2.7  |
| 2023-11-12 | ![image.png](//image.lceda.cn/pullimage/FOpBZas3UewuF5VoDbC3Bs2XgdcrJXgLdpQqoSZF.png) | https://item.taobao.com/item.htm?spm=a1z09.2.0.0.76c72e8diCtTXZ&id=693325195287&_u=72teeq1c8c00 | 1.43 |
| 2021-07-08 | ![image.png](//image.lceda.cn/pullimage/wOJxGm7ESJmWd1vVDvF1a5IQr6dlGRvUMwvoMhkj.png) | https://item.taobao.com/item.htm?spm=a1z09.2.0.0.76c72e8diCtTXZ&id=562145367495&_u=72teeq1c09a1 | 12   |
| 23-11-05   | ![image.png](//image.lceda.cn/pullimage/yp6bRnLJnhFvGwmPc1VEUyEcEYMXgIQHne9IsGUg.png) | https://item.taobao.com/item.htm?spm=a1z09.2.0.0.76c72e8diCtTXZ&id=696015063073&_u=72teeq1cdc85 | 1.82 |
| 23-11-12   | ![image.png](//image.lceda.cn/pullimage/Mlzi2QdiKdPlE3vaxoCnHTkWbEKouuQgmFMSdpyI.png) | [矮体 通用无源蜂鸣器 电磁式 阻抗16欧 直流电阻16欧 (5个)-tmall.com天猫](https://detail.tmall.com/item.htm?_u=72teeq1ccd11&id=41297077381&spm=a1z09.2.0.0.76c72e8diCtTXZ) | 1.87 |
| 23-11-14   | ![image.png](//image.lceda.cn/pullimage/vrIjvaRi1z0mRkQJdWHrHFdNlm3Axy450l5P9iOn.png) | https://item.taobao.com/item.htm?spm=a1z09.2.0.0.76c72e8diCtTXZ&id=686018450822&_u=72teeq1c4583 | 1.25 |
| 23-11-12   | ![image.png](//image.lceda.cn/pullimage/CkPgw8vBKBK2Dt1jS2JH7ugaEr6p09pjh57C4GGr.png) | [原装正品 贴片 W25Q128JVSIQ SOIC-8 128Mbit FLASH存储器芯片-淘宝网 (taobao.com)](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.76c72e8diCtTXZ&id=564591570051&_u=72teeq1c3a8c) | 3.93 |
| 23-07-16   | ![image.png](//image.lceda.cn/pullimage/DXfbW7fD9NmBg5CWIfRuRQ3vEKWuVO2HvZ4daQEG.png) | [商品详情 (tmall.com)](https://detail.tmall.com/item.htm?id=674326140215&spm=a1z09.2.0.0.76c72e8dJBSJ3T&_u=72teeq1c512d) | 7.68 |
|            |                                                              |                                                              |      |
|            |                                                              |                                                              |      |
|            |                                                              |                                                              |      |
|            |                                                              |                                                              |      |
|            |                                                              |                                                              |      |
|            |                                                              |                                                              |      |
|            |                                                              |                                                              |      |
|            |                                                              |                                                              |      |

总金额大概为：



## 实物图

![微信图片_20240206001026.jpg](//image.lceda.cn/pullimage/lwR218CULsUjQsvqIeA2H0cHt9rW8jrnQwB6dZot.jpeg)
![微信图片_20240206001035.jpg](//image.lceda.cn/pullimage/4tp85QK3t7GoE75Nk5UuE4QLINrSi0kkYtiK2otI.jpeg)

###  主要功能

![图片](README.assets/图片.png)

### 最小系统板

![image-20240229115931711](README.assets/image-20240229115931711.png)



## 硬件



`主控:STM32F103C8T6`


### 旋转编码器（代码没调通）

![image.png](//image.lceda.cn/pullimage/sosclFTLFlcKIFLjLxZ80mK9aMJzZ38HfBZAYiNy.png)

### OLED （可以显示）

![image.png](//image.lceda.cn/pullimage/GY5FOspRIGGbTHUdh7eZSfAdxCtoOxGiOQJmi44K.png)

### DHT11（软件上没问题，可以驱动）

软件上没问题，可以驱动
![image.png](//image.lceda.cn/pullimage/SukKBd1tZpKY6IRWG5TsbaSHHNFJv3r89LgwVzJH.png)

### 旋转编码器

![image.png](//image.lceda.cn/pullimage/hQ7Su4eR6v8qG56VlIBcT8MfJtL9FDRbzVV3prpj.png)

### MPU6050

![image.png](//image.lceda.cn/pullimage/X0Vk56b9s6949I2DqIkaleVQtOTMgwfE6NDb7Ec4.png)

### TP4056

![image.png](//image.lceda.cn/pullimage/lqdBmlNas6H5A1dNnZbYthLJjhZcI1C7eSvYE8AC.png)

###  WS2812B （软件上没问题，可以驱动）

`（可以通过软件去改变颜色）`
![image.png](//image.lceda.cn/pullimage/Gf8G0WfHpaYbnZPjOB0tyZEWxsNl7AsPupmE5QCw.png)

### W25Q128 （外部储存器）（软件上没问题，可以驱动）

![image.png](//image.lceda.cn/pullimage/zsp9od9lLfqwh04j5bSXcId9DuTmujl4MKNST8Bo.png)

### 无源蜂鸣器（软件上没问题，可以驱动）

![image.png](//image.lceda.cn/pullimage/g5tqBISDHiXbPnebV223J2jSYxADcC69feuKVrsx.png)
软件上没问题，可以驱动

### 光敏电阻ADC （软件还没写）

![image.png](//image.lceda.cn/pullimage/TuO3HnJbw4BHyzKKZf4c0JstWp1kMYcJrrgP5vC7.png)

### ESP32-01S（软件还没调好）

![image.png](//image.lceda.cn/pullimage/7WKeYXc72zuMANqafeOzLGra5IONaoIjq3ZhrbG8.png)
连接Onenet
软件库:





##  