

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


void delay_ms(unsigned int ms)
{
    unsigned int i, j;
    for (i = 0; i < ms; i++)
    {
        for (j = 0; j < 110; j++);
    }
}

void main()
{
    unsigned char led = 0x01;

    while (1)
    {
        P0 = led;
        delay_ms(500);

        led <<= 1;
        if (led == 0)
        {
            led = 0x01;
        }
    }
    return 0;
}

