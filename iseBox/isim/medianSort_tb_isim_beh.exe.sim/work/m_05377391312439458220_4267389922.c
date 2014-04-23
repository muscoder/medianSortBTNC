/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/mustafa/Dropbox/iseWorkspace/medianSort/medianSort_tb.v";
static const char *ng1 = "/home/mustafa/Dropbox/qtWorkspace/ee562Project/randomNumberGenerator/build-randNumGen-Desktop_Qt_5_2_1_GCC_64bit-Debug/data.txt";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {6, 0};
static int ng5[] = {0, 0};
static int ng6[] = {5, 0};
static int ng7[] = {1, 0};
static int ng8[] = {2, 0};
static int ng9[] = {3, 0};
static int ng10[] = {4, 0};
static int ng11[] = {7, 0};
static int ng12[] = {8, 0};
static int ng13[] = {10, 0};
static int ng14[] = {100, 0};



static void Initial_41_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2040);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Initial_54_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(56, ng0);

LAB6:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1720);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB11:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB12:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1720);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB12;

LAB14:    goto LAB1;

}

static void Initial_63_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 5048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);

LAB4:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4856);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1880);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_68_3(char *t0)
{
    char t13[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 5296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);

LAB4:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 7856);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 7856);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 7860);
    *((int *)t8) = t7;

LAB9:    t9 = (t0 + 7860);
    if (*((int *)t9) > 0)
        goto LAB10;

LAB11:
LAB1:    return;
LAB6:    xsi_set_current_line(70, ng0);
    t10 = (t0 + 5864);
    *((int *)t10) = 1;
    t11 = (t0 + 5328);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 7856);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB10:    xsi_set_current_line(73, ng0);

LAB12:    xsi_set_current_line(74, ng0);
    t10 = (t0 + 2040);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 2040);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = (t0 + 2040);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 3640);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t13, 8, t12, t16, t19, 2, 1, t22, 32, 1);
    t23 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t23, t13, 0, 0, 8, 1000LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2040);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2040);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng7)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t8, t11, t15, 2, 1, t24, 32, 1);
    t20 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 8, 1000LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2040);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2040);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng8)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t8, t11, t15, 2, 1, t24, 32, 1);
    t20 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 8, 1000LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2040);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2040);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng9)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t8, t11, t15, 2, 1, t24, 32, 1);
    t20 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 8, 1000LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2040);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2040);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng10)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t8, t11, t15, 2, 1, t24, 32, 1);
    t20 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 8, 1000LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2040);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2040);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t8, t11, t15, 2, 1, t24, 32, 1);
    t20 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 8, 1000LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2040);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2040);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng4)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t8, t11, t15, 2, 1, t24, 32, 1);
    t20 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 8, 1000LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2040);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2040);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng11)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t8, t11, t15, 2, 1, t24, 32, 1);
    t20 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 8, 1000LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 2040);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 2040);
    t14 = (t12 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 3640);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng12)));
    memset(t24, 0, 8);
    xsi_vlog_signed_add(t24, 32, t18, 32, t19, 32);
    xsi_vlog_generic_get_array_select_value(t13, 8, t8, t11, t15, 2, 1, t24, 32, 1);
    t20 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 8, 1000LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng13)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t8, 32, t9, 32);
    t10 = (t0 + 3640);
    xsi_vlogvar_assign_value(t10, t13, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5880);
    *((int *)t2) = 1;
    t3 = (t0 + 5328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    t2 = (t0 + 7860);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB9;

}

static void Initial_88_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 5544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);

LAB4:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 7864);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 7864);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(90, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB6:    xsi_set_current_line(89, ng0);
    t10 = (t0 + 5896);
    *((int *)t10) = 1;
    t11 = (t0 + 5576);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 7864);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

}


extern void work_m_05377391312439458220_4267389922_init()
{
	static char *pe[] = {(void *)Initial_41_0,(void *)Initial_54_1,(void *)Initial_63_2,(void *)Initial_68_3,(void *)Initial_88_4};
	xsi_register_didat("work_m_05377391312439458220_4267389922", "isim/medianSort_tb_isim_beh.exe.sim/work/m_05377391312439458220_4267389922.didat");
	xsi_register_executes(pe);
}
