#include "stm32f10x.h"                  // Device header

#include "Delay.h"
#include "OLED.h"

/**
  * �����ᶨ�壺
  * ���Ͻ�Ϊ(0, 0)��
  * ��������ΪX�ᣬȡֵ��Χ��0~127
  * ��������ΪY�ᣬȡֵ��Χ��0~63
  *
  *       0             X��           127
  *      .------------------------------->
  *    0 |
  *      |
  *      |
  *      |
  *  Y�� |
  *      |
  *      |
  *      |
  *   63 |
  *      v
  *
  */

int main(void)
{
    /*OLED��ʼ��*/
    OLED_Init();

    /*��(0, 0)λ����ʾ�ַ�'A'�������СΪ8*16����*/
    OLED_ShowChar(0, 0, 'A', OLED_8X16);

    /*��(16, 0)λ����ʾ�ַ���"Hello World!"�������СΪ8*16����*/
    OLED_ShowString(16, 0, "Hello World!", OLED_8X16);

    /*��(0, 18)λ����ʾ�ַ�'A'�������СΪ6*8����*/
    OLED_ShowChar(0, 18, 'A', OLED_6X8);

    /*��(16, 18)λ����ʾ�ַ���"Hello World!"�������СΪ6*8����*/
    OLED_ShowString(16, 18, "Hello World!", OLED_6X8);

    /*��(0, 28)λ����ʾ����12345������Ϊ5�������СΪ6*8����*/
    OLED_ShowNum(0, 28, 12345, 5, OLED_6X8);

    /*��(40, 28)λ����ʾ�з�������-66������Ϊ2�������СΪ6*8����*/
    OLED_ShowSignedNum(40, 28, -66, 2, OLED_6X8);

    /*��(70, 28)λ����ʾʮ����������0xA5A5������Ϊ4�������СΪ6*8����*/
    OLED_ShowHexNum(70, 28, 0xA5A5, 4, OLED_6X8);

    /*��(0, 38)λ����ʾ����������0xA5������Ϊ8�������СΪ6*8����*/
    OLED_ShowBinNum(0, 38, 0xA5, 8, OLED_6X8);

    /*��(60, 38)λ����ʾ��������123.45���������ֳ���Ϊ3��С�����ֳ���Ϊ2�������СΪ6*8����*/
    OLED_ShowFloatNum(60, 38, 123.45, 3, 2, OLED_6X8);

    /*��(0, 48)λ����ʾ���ִ�"��ã����硣"�������СΪ�̶���16*16����*/
    OLED_ShowChinese(0, 48, "��ã����硣");

    /*��(96, 48)λ����ʾͼ�񣬿�16���أ���16���أ�ͼ������ΪDiode����*/
    OLED_ShowImage(96, 48, 16, 16, Diode);

    /*��(96, 18)λ�ô�ӡ��ʽ���ַ����������СΪ6*8���󣬸�ʽ���ַ���Ϊ"[%02d]"*/
    OLED_Printf(96, 18, OLED_6X8, "[%02d]", 6);

    /*����OLED_Update��������OLED�Դ���������ݸ��µ�OLEDӲ��������ʾ*/
    OLED_Update();

    /*��ʱ3000ms���۲�����*/
    Delay_ms(1000);

    /*���OLED�Դ�����*/
    OLED_Clear();

    /*��(5, 8)λ�û���*/
    OLED_DrawPoint(5, 8);

    /*��ȡ(5, 8)λ�õĵ�*/
    if (OLED_GetPoint(5, 8))
    {
        /*���ָ�������������(10, 4)λ����ʾ�ַ���"YES"�������СΪ6*8����*/
        OLED_ShowString(10, 4, "YES", OLED_6X8);
    }
    else
    {
        /*���ָ����δ����������(10, 4)λ����ʾ�ַ���"NO "�������СΪ6*8����*/
        OLED_ShowString(10, 4, "NO ", OLED_6X8);
    }

    /*��(40, 0)��(127, 15)λ��֮�仭ֱ��*/
    OLED_DrawLine(40, 0, 127, 15);

    /*��(40, 15)��(127, 0)λ��֮�仭ֱ��*/
    OLED_DrawLine(40, 15, 127, 0);

    /*��(0, 20)λ�û����Σ���12���أ���15���أ�δ���*/
    OLED_DrawRectangle(0, 20, 12, 15, OLED_UNFILLED);

    /*��(0, 40)λ�û����Σ���12���أ���15���أ����*/
    OLED_DrawRectangle(0, 40, 12, 15, OLED_FILLED);

    /*��(20, 20)��(40, 25)��(30, 35)λ��֮�仭�����Σ�δ���*/
    OLED_DrawTriangle(20, 20, 40, 25, 30, 35, OLED_UNFILLED);

    /*��(20, 40)��(40, 45)��(30, 55)λ��֮�仭�����Σ����*/
    OLED_DrawTriangle(20, 40, 40, 45, 30, 55, OLED_FILLED);

    /*��(55, 27)λ�û�Բ���뾶8���أ�δ���*/
    OLED_DrawCircle(55, 27, 8, OLED_UNFILLED);

    /*��(55, 47)λ�û�Բ���뾶8���أ����*/
    OLED_DrawCircle(55, 47, 8, OLED_FILLED);

    /*��(82, 27)λ�û���Բ���������12���أ��������8���أ�δ���*/
    OLED_DrawEllipse(82, 27, 12, 8, OLED_UNFILLED);

    /*��(82, 47)λ�û���Բ���������12���أ��������8���أ����*/
    OLED_DrawEllipse(82, 47, 12, 8, OLED_FILLED);

    /*��(110, 18)λ�û�Բ�����뾶15���أ���ʼ�Ƕ�25�ȣ���ֹ�Ƕ�125�ȣ�δ���*/
    OLED_DrawArc(110, 18, 15, 25, 125, OLED_UNFILLED);

    /*��(110, 38)λ�û�Բ�����뾶15���أ���ʼ�Ƕ�25�ȣ���ֹ�Ƕ�125�ȣ����*/
    OLED_DrawArc(110, 38, 15, 25, 125, OLED_FILLED);

    /*����OLED_Update��������OLED�Դ���������ݸ��µ�OLEDӲ��������ʾ*/
    OLED_Update();

    /*��ʱ3000ms���۲�����*/
    Delay_ms(3000);

    while (1)
    {
        for (uint8_t i = 0; i < 4; i ++)
        {
            /*��OLED�Դ����鲿������ȡ������(0, i * 16)λ�ÿ�ʼ����128���أ���16����*/
            OLED_ReverseArea(0, i * 16, 128, 16);

            /*����OLED_Update��������OLED�Դ���������ݸ��µ�OLEDӲ��������ʾ*/
            OLED_Update();

            /*��ʱ1000ms���۲�����*/
            Delay_ms(1000);

            /*��ȡ�������ݷ�ת����*/
            OLED_ReverseArea(0, i * 16, 128, 16);
        }

        /*��OLED�Դ�����ȫ������ȡ��*/
        OLED_Reverse();

        /*����OLED_Update��������OLED�Դ���������ݸ��µ�OLEDӲ��������ʾ*/
        OLED_Update();

        /*��ʱ1000ms���۲�����*/
        Delay_ms(1000);
    }
}