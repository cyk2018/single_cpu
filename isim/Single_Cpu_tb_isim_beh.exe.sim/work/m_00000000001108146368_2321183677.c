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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/29593/Documents/cyk/computer-system/single_cpu/single_cpu/Memory.v";
static const char *ng1 = "memory.txt";
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static int ng8[] = {24, 0};
static unsigned int ng9[] = {0U, 0U};
static int ng10[] = {16, 0};
static int ng11[] = {20, 0};



static void Initial_39_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 3048);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Cont_43_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 63U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 63U);
    t12 = (t0 + 5568);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 63U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 5);
    t25 = (t0 + 5440);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_45_2(char *t0)
{
    char t13[8];
    char t23[8];
    char t24[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    int t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5456);
    *((int *)t2) = 1;
    t3 = (t0 + 4656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    t11 = (t0 + 3048);
    xsi_vlogfile_readmemb(ng1, 0, t11, 0, 0, 0, 0);
    goto LAB8;

LAB10:    xsi_set_current_line(50, ng0);

LAB13:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng2)));
    t12 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t12 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t12 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t12 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t12 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t12 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB12;

LAB15:    xsi_set_current_line(52, ng0);

LAB22:    xsi_set_current_line(54, ng0);
    t11 = (t0 + 1848U);
    t14 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 255U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 255U);
    t22 = (t0 + 3048);
    t25 = (t0 + 3048);
    t26 = (t25 + 72U);
    t27 = *((char **)t26);
    t28 = (t0 + 3048);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = (t0 + 2488U);
    t32 = *((char **)t31);
    xsi_vlog_generic_convert_array_indices(t23, t24, t27, t30, 2, 1, t32, 6, 2);
    t31 = (t23 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (!(t33));
    t35 = (t24 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB23;

LAB24:    goto LAB21;

LAB17:    xsi_set_current_line(56, ng0);

LAB25:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 8);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t14 = (t0 + 3048);
    t15 = (t0 + 3048);
    t22 = (t15 + 72U);
    t25 = *((char **)t22);
    t26 = (t0 + 3048);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 2488U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t23, t24, t25, t28, 2, 1, t30, 6, 2);
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t34 = (!(t17));
    t31 = (t24 + 4);
    t18 = *((unsigned int *)t31);
    t37 = (!(t18));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t11 = (t0 + 3048);
    t14 = (t0 + 3048);
    t15 = (t14 + 72U);
    t22 = *((char **)t15);
    t25 = (t0 + 3048);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 2488U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng4)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t29, 6, t28, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t22, t27, 2, 1, t43, 32, 2);
    t30 = (t23 + 4);
    t17 = *((unsigned int *)t30);
    t12 = (!(t17));
    t31 = (t24 + 4);
    t18 = *((unsigned int *)t31);
    t34 = (!(t18));
    t37 = (t12 && t34);
    if (t37 == 1)
        goto LAB28;

LAB29:    goto LAB21;

LAB19:    xsi_set_current_line(61, ng0);

LAB30:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 24);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 255U);
    t14 = (t0 + 3048);
    t15 = (t0 + 3048);
    t22 = (t15 + 72U);
    t25 = *((char **)t22);
    t26 = (t0 + 3048);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 2488U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t23, t24, t25, t28, 2, 1, t30, 6, 2);
    t29 = (t23 + 4);
    t17 = *((unsigned int *)t29);
    t34 = (!(t17));
    t31 = (t24 + 4);
    t18 = *((unsigned int *)t31);
    t37 = (!(t18));
    t38 = (t34 && t37);
    if (t38 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 15);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 15);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 511U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 511U);
    t11 = (t0 + 3048);
    t14 = (t0 + 3048);
    t15 = (t14 + 72U);
    t22 = *((char **)t15);
    t25 = (t0 + 3048);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 2488U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng4)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t29, 6, t28, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t22, t27, 2, 1, t43, 32, 2);
    t30 = (t23 + 4);
    t17 = *((unsigned int *)t30);
    t12 = (!(t17));
    t31 = (t24 + 4);
    t18 = *((unsigned int *)t31);
    t34 = (!(t18));
    t37 = (t12 && t34);
    if (t37 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t11 = (t0 + 3048);
    t14 = (t0 + 3048);
    t15 = (t14 + 72U);
    t22 = *((char **)t15);
    t25 = (t0 + 3048);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 2488U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng6)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t29, 6, t28, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t22, t27, 2, 1, t43, 32, 2);
    t30 = (t23 + 4);
    t17 = *((unsigned int *)t30);
    t12 = (!(t17));
    t31 = (t24 + 4);
    t18 = *((unsigned int *)t31);
    t34 = (!(t18));
    t37 = (t12 && t34);
    if (t37 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 255U);
    t11 = (t0 + 3048);
    t14 = (t0 + 3048);
    t15 = (t14 + 72U);
    t22 = *((char **)t15);
    t25 = (t0 + 3048);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 2488U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng7)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t29, 6, t28, 32);
    xsi_vlog_generic_convert_array_indices(t23, t24, t22, t27, 2, 1, t43, 32, 2);
    t30 = (t23 + 4);
    t17 = *((unsigned int *)t30);
    t12 = (!(t17));
    t31 = (t24 + 4);
    t18 = *((unsigned int *)t31);
    t34 = (!(t18));
    t37 = (t12 && t34);
    if (t37 == 1)
        goto LAB37;

LAB38:    goto LAB21;

LAB23:    t39 = *((unsigned int *)t23);
    t40 = *((unsigned int *)t24);
    t41 = (t39 - t40);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t22, t13, 0, *((unsigned int *)t24), t42);
    goto LAB24;

LAB26:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t41 = (t19 - t20);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t24), t42);
    goto LAB27;

LAB28:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t38 = (t19 - t20);
    t41 = (t38 + 1);
    xsi_vlogvar_assign_value(t11, t13, 0, *((unsigned int *)t24), t41);
    goto LAB29;

LAB31:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t41 = (t19 - t20);
    t42 = (t41 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t24), t42);
    goto LAB32;

LAB33:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t38 = (t19 - t20);
    t41 = (t38 + 1);
    xsi_vlogvar_assign_value(t11, t13, 0, *((unsigned int *)t24), t41);
    goto LAB34;

LAB35:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t38 = (t19 - t20);
    t41 = (t38 + 1);
    xsi_vlogvar_assign_value(t11, t13, 0, *((unsigned int *)t24), t41);
    goto LAB36;

LAB37:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t24);
    t38 = (t19 - t20);
    t41 = (t38 + 1);
    xsi_vlogvar_assign_value(t11, t13, 0, *((unsigned int *)t24), t41);
    goto LAB38;

}

static void Always_72_3(char *t0)
{
    char t14[8];
    char t24[8];
    char t28[8];
    char t29[8];
    char t30[8];
    char t41[8];
    char t51[8];
    char t54[8];
    char t58[8];
    char t67[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5472);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(73, ng0);

LAB9:    xsi_set_current_line(74, ng0);
    t11 = (t0 + 3048);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t15 = (t0 + 3048);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 3048);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2488U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t14, 8, t13, t17, t20, 2, 1, t22, 6, 2);
    t21 = (t0 + 3208);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB10:    t2 = ((char*)((ng2)));
    t23 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t23 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t23 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t23 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t23 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t23 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB8;

LAB11:    xsi_set_current_line(76, ng0);

LAB18:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t24, 0, 8);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t4) != 0)
        goto LAB21;

LAB22:    t12 = (t24 + 4);
    t25 = *((unsigned int *)t24);
    t26 = *((unsigned int *)t12);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB23;

LAB24:    t37 = *((unsigned int *)t24);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t12) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t24) > 0)
        goto LAB29;

LAB30:    memcpy(t14, t41, 8);

LAB31:    t46 = (t0 + 2888);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(79, ng0);

LAB32:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t24, 0, 8);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t4) != 0)
        goto LAB35;

LAB36:    t12 = (t24 + 4);
    t25 = *((unsigned int *)t24);
    t26 = *((unsigned int *)t12);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB37;

LAB38:    t37 = *((unsigned int *)t24);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t12) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t24) > 0)
        goto LAB43;

LAB44:    memcpy(t14, t54, 8);

LAB45:    t72 = (t0 + 2888);
    xsi_vlogvar_assign_value(t72, t14, 0, 0, 32);
    goto LAB17;

LAB15:    xsi_set_current_line(82, ng0);

LAB46:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 3048);
    t13 = (t12 + 72U);
    t15 = *((char **)t13);
    t16 = (t0 + 3048);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 2488U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng7)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t20, 6, t19, 32);
    xsi_vlog_generic_get_array_select_value(t24, 8, t11, t15, t18, 2, 1, t28, 32, 2);
    t21 = (t0 + 3048);
    t22 = (t21 + 56U);
    t42 = *((char **)t22);
    t43 = (t0 + 3048);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 3048);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t49 = (t0 + 2488U);
    t50 = *((char **)t49);
    t49 = ((char*)((ng6)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t50, 6, t49, 32);
    xsi_vlog_generic_get_array_select_value(t29, 8, t42, t45, t48, 2, 1, t30, 32, 2);
    t52 = (t0 + 3048);
    t53 = (t52 + 56U);
    t55 = *((char **)t53);
    t56 = (t0 + 3048);
    t57 = (t56 + 72U);
    t59 = *((char **)t57);
    t60 = (t0 + 3048);
    t61 = (t60 + 64U);
    t62 = *((char **)t61);
    t63 = (t0 + 2488U);
    t64 = *((char **)t63);
    t63 = ((char*)((ng4)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 32, t64, 6, t63, 32);
    xsi_vlog_generic_get_array_select_value(t41, 8, t55, t59, t62, 2, 1, t51, 32, 2);
    t65 = (t0 + 3048);
    t66 = (t65 + 56U);
    t68 = *((char **)t66);
    t69 = (t0 + 3048);
    t70 = (t69 + 72U);
    t71 = *((char **)t70);
    t72 = (t0 + 3048);
    t73 = (t72 + 64U);
    t74 = *((char **)t73);
    t75 = (t0 + 2488U);
    t76 = *((char **)t75);
    xsi_vlog_generic_get_array_select_value(t54, 8, t68, t71, t74, 2, 1, t76, 6, 2);
    xsi_vlogtype_concat(t14, 32, 32, 4U, t54, 8, t41, 8, t29, 8, t24, 8);
    t75 = (t0 + 2888);
    xsi_vlogvar_assign_value(t75, t14, 0, 0, 32);
    goto LAB17;

LAB19:    *((unsigned int *)t24) = 1;
    goto LAB22;

LAB21:    t11 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB23:    t13 = (t0 + 3208);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng8)));
    t18 = (t0 + 3208);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t22 = (t20 + 4);
    t31 = *((unsigned int *)t20);
    t32 = (t31 >> 7);
    t33 = (t32 & 1);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t22);
    t35 = (t34 >> 7);
    t36 = (t35 & 1);
    *((unsigned int *)t21) = t36;
    xsi_vlog_mul_concat(t29, 24, 1, t17, 1U, t30, 1);
    xsi_vlogtype_concat(t28, 32, 32, 2U, t29, 24, t16, 8);
    goto LAB24;

LAB25:    t42 = (t0 + 3208);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng9)));
    xsi_vlogtype_concat(t41, 32, 32, 2U, t45, 24, t44, 8);
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t14, 32, t28, 32, t41, 32);
    goto LAB31;

LAB29:    memcpy(t14, t28, 8);
    goto LAB31;

LAB33:    *((unsigned int *)t24) = 1;
    goto LAB36;

LAB35:    t11 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB36;

LAB37:    t13 = (t0 + 3048);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 3048);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 3048);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t42 = (t0 + 2488U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t43, 6, t42, 32);
    xsi_vlog_generic_get_array_select_value(t29, 8, t16, t19, t22, 2, 1, t30, 32, 2);
    t44 = (t0 + 3208);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng10)));
    t48 = (t0 + 3208);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t51, 0, 8);
    t52 = (t51 + 4);
    t53 = (t50 + 4);
    t31 = *((unsigned int *)t50);
    t32 = (t31 >> 7);
    t33 = (t32 & 1);
    *((unsigned int *)t51) = t33;
    t34 = *((unsigned int *)t53);
    t35 = (t34 >> 7);
    t36 = (t35 & 1);
    *((unsigned int *)t52) = t36;
    xsi_vlog_mul_concat(t41, 16, 1, t47, 1U, t51, 1);
    xsi_vlogtype_concat(t28, 32, 32, 3U, t41, 16, t46, 8, t29, 8);
    goto LAB38;

LAB39:    t55 = (t0 + 3048);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t59 = (t0 + 3048);
    t60 = (t59 + 72U);
    t61 = *((char **)t60);
    t62 = (t0 + 3048);
    t63 = (t62 + 64U);
    t64 = *((char **)t63);
    t65 = (t0 + 2488U);
    t66 = *((char **)t65);
    t65 = ((char*)((ng4)));
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 32, t66, 6, t65, 32);
    xsi_vlog_generic_get_array_select_value(t58, 8, t57, t61, t64, 2, 1, t67, 32, 2);
    t68 = (t0 + 3208);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = ((char*)((ng9)));
    xsi_vlogtype_concat(t54, 32, 32, 3U, t71, 16, t70, 8, t58, 8);
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t14, 32, t28, 32, t54, 32);
    goto LAB45;

LAB43:    memcpy(t14, t28, 8);
    goto LAB45;

}

static void Cont_89_4(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3048);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3048);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 5632);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 5488);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001108146368_2321183677_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Cont_43_1,(void *)Always_45_2,(void *)Always_72_3,(void *)Cont_89_4};
	xsi_register_didat("work_m_00000000001108146368_2321183677", "isim/Single_Cpu_tb_isim_beh.exe.sim/work/m_00000000001108146368_2321183677.didat");
	xsi_register_executes(pe);
}
