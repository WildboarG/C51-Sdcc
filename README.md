# arch linux 下单片机的烧写

## 工具：
	1. sdcc 编译器
		shell yay -S sdcc	
		
	2. 烧录器stcflash(基于python环境)
		shell yay -S stcflash

## 教程：
- 在工作目录下编写main.c

- 编译

```shell 
	sdcc main.c
```


		编译后会生成许多main.* 文件
		我们需要main.ihx 文件


- 文件转换
  由于单片烧录需要hex文件，我们需要将ihx文件转换并重定向到hex文件

  ```shell
  packihx main.ihx > main.hex




- 烧录到单片机
    stcflash运行需要root权限
    
    ```shell
    sudo stcflash main.hex
    
- 多文件的烧录
    ```shell 
    	sdcc -c tool1.c
    	sdcc -c tool2.c
    	sdcc main.c too1.rel tool2.rel   -> main.ihx

## make脚本：
---
编写makefile文件

 ```makefile 
 test.hex : test.c
 	    sdcc test.c
  		packihx test.ihx > test.hex
  clean:
  	  	rm -rf *asm *.lst *.mem *.rst *.lnk *.rel *.sym *.ihx *.map
  Writein:
   	    sudo stcflash test.hex
 ```



## 值得注意的是：
linux 下头文件略有不同
    `头文件`:  放在此目录 自行查看

> /usr/share/sdcc/include/mcs51/8051.h
> 	
