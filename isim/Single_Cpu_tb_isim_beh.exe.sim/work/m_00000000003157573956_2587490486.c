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
static const char *ng0 = "C:/Users/29593/Documents/cyk/computer-system/single_cpu/single_cpu/Alu.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {36U, 0U};
static unsigned int ng5[] = {39U, 0U};
static unsigned int ng6[] = {37U, 0U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {63, 0};
static int ng9[] = {32, 0};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {6U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {3U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {38U, 0U};
static unsigned int ng16[] = {32U, 0U};
static int ng17[] = {1, 0};
static unsigned int ng18[] = {33U, 0U};
static unsigned int ng19[] = {26U, 0U};
static unsigned int ng20[] = {27U, 0U};
static unsigned int ng21[] = {24U, 0U};
static unsigned int ng22[] = {25U, 0U};
static unsigned int ng23[] = {34U, 0U};
static unsigned int ng24[] = {35U, 0U};
static unsigned int ng25[] = {42U, 0U};
static unsigned int ng26[] = {43U, 0U};
static unsigned int ng27[] = {8U, 0U};



static void Always_38_0(char *t0)
{
    char t11[8];
    char t43[8];
    char t49[8];
    char t55[16];
    char t63[8];
    char t90[16];
    char t91[16];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4696);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:
LAB10:
LAB9:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB12:    t4 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB57:    goto LAB11;

LAB13:    xsi_set_current_line(44, ng0);

LAB58:    xsi_set_current_line(46, ng0);
    t8 = (t0 + 1688U);
    t9 = *((char **)t8);
    t8 = (t0 + 1848U);
    t10 = *((char **)t8);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t10);
    t14 = (t12 & t13);
    *((unsigned int *)t11) = t14;
    t8 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB59;

LAB60:
LAB61:    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t11, 0, 0, 32);
    goto LAB57;

LAB15:    xsi_set_current_line(48, ng0);

LAB62:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1848U);
    t8 = *((char **)t4);
    t4 = (t0 + 1368U);
    t9 = *((char **)t4);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_lshift(t11, 32, t8, 32, t9, 5);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB57;

LAB17:    xsi_set_current_line(54, ng0);

LAB63:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    t14 = (t12 | t13);
    *((unsigned int *)t43) = t14;
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t15 = (t43 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t10);
    t19 = (t17 | t18);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB64;

LAB65:
LAB66:    memset(t11, 0, 8);
    t25 = (t11 + 4);
    t42 = (t43 + 4);
    t38 = *((unsigned int *)t43);
    t39 = (~(t38));
    *((unsigned int *)t11) = t39;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB68;

LAB67:    t46 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t46 & 4294967295U);
    t47 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t47 & 4294967295U);
    t48 = (t0 + 2408);
    xsi_vlogvar_assign_value(t48, t11, 0, 0, 32);
    goto LAB57;

LAB19:    xsi_set_current_line(58, ng0);

LAB69:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t15 = (t11 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t10);
    t19 = (t17 | t18);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB70;

LAB71:
LAB72:    t25 = (t0 + 2408);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 32);
    goto LAB57;

LAB21:    xsi_set_current_line(62, ng0);

LAB73:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1848U);
    t8 = *((char **)t4);
    t4 = (t0 + 2568);
    t9 = (t0 + 2568);
    t10 = (t9 + 72U);
    t15 = *((char **)t10);
    t16 = ((char*)((ng8)));
    t24 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t11, t43, t49, ((int*)(t15)), 2, t16, 32, 1, t24, 32, 1);
    t25 = (t11 + 4);
    t12 = *((unsigned int *)t25);
    t7 = (!(t12));
    t42 = (t43 + 4);
    t13 = *((unsigned int *)t42);
    t34 = (!(t13));
    t35 = (t7 && t34);
    t48 = (t49 + 4);
    t14 = *((unsigned int *)t48);
    t50 = (!(t14));
    t51 = (t35 && t50);
    if (t51 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t0 + 1368U);
    t10 = *((char **)t9);
    xsi_vlog_unsigned_rshift(t55, 64, t8, 64, t10, 5);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t55, 0, 0, 64);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t11, 0, 8);
    t8 = (t4 + 4);
    t9 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t14 | t19);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t26 = (~(t23));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB79;

LAB76:    if (t23 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t11) = 1;

LAB79:    t15 = (t11 + 4);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(69, ng0);

LAB87:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t8 + 8);
    t15 = (t8 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t15);
    t17 = (t14 >> 0);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 4294967295U);
    t16 = (t0 + 2408);
    xsi_vlogvar_assign_value(t16, t11, 0, 0, 32);

LAB82:    goto LAB57;

LAB23:    xsi_set_current_line(74, ng0);

LAB88:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 1848U);
    t8 = *((char **)t4);
    t4 = (t0 + 2568);
    t9 = (t0 + 2568);
    t10 = (t9 + 72U);
    t15 = *((char **)t10);
    t16 = ((char*)((ng8)));
    t24 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t11, t43, t49, ((int*)(t15)), 2, t16, 32, 1, t24, 32, 1);
    t25 = (t11 + 4);
    t12 = *((unsigned int *)t25);
    t7 = (!(t12));
    t42 = (t43 + 4);
    t13 = *((unsigned int *)t42);
    t34 = (!(t13));
    t35 = (t7 && t34);
    t48 = (t49 + 4);
    t14 = *((unsigned int *)t48);
    t50 = (!(t14));
    t51 = (t35 && t50);
    if (t51 == 1)
        goto LAB89;

LAB90:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t0 + 1688U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t15 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t15);
    t17 = (t14 >> 0);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 31U);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 31U);
    xsi_vlog_unsigned_rshift(t55, 64, t8, 64, t11, 5);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t55, 0, 0, 64);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t11, 0, 8);
    t8 = (t4 + 4);
    t9 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t14 | t19);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t26 = (~(t23));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB94;

LAB91:    if (t23 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t11) = 1;

LAB94:    t15 = (t11 + 4);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(82, ng0);

LAB102:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t8 + 8);
    t15 = (t8 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t15);
    t17 = (t14 >> 0);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 4294967295U);
    t16 = (t0 + 2408);
    xsi_vlogvar_assign_value(t16, t11, 0, 0, 32);

LAB97:    goto LAB57;

LAB25:    xsi_set_current_line(86, ng0);

LAB103:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 1848U);
    t8 = *((char **)t4);
    t4 = (t0 + 1688U);
    t9 = *((char **)t4);
    memset(t11, 0, 8);
    t4 = (t11 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t10);
    t17 = (t14 >> 0);
    *((unsigned int *)t4) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 31U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 31U);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_lshift(t43, 32, t8, 32, t11, 5);
    t15 = (t0 + 2408);
    xsi_vlogvar_assign_value(t15, t43, 0, 0, 32);
    goto LAB57;

LAB27:    xsi_set_current_line(90, ng0);

LAB104:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 1848U);
    t8 = *((char **)t4);
    t4 = (t0 + 1368U);
    t9 = *((char **)t4);
    memset(t43, 0, 8);
    xsi_vlog_signed_arith_rshift(t43, 32, t8, 32, t9, 5);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t43, 0, 0, 32);
    goto LAB57;

LAB29:    xsi_set_current_line(94, ng0);

LAB105:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 1848U);
    t8 = *((char **)t4);
    t4 = (t0 + 1688U);
    t9 = *((char **)t4);
    memset(t43, 0, 8);
    t4 = (t43 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t43) = t13;
    t14 = *((unsigned int *)t10);
    t17 = (t14 >> 0);
    *((unsigned int *)t4) = t17;
    t18 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t18 & 31U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 31U);
    memset(t49, 0, 8);
    xsi_vlog_signed_arith_rshift(t49, 32, t8, 32, t43, 5);
    t15 = (t0 + 2408);
    xsi_vlogvar_assign_value(t15, t49, 0, 0, 32);
    goto LAB57;

LAB31:    xsi_set_current_line(98, ng0);

LAB106:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    *((unsigned int *)t11) = t14;
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t15 = (t11 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t10);
    t19 = (t17 | t18);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB107;

LAB108:
LAB109:    t16 = (t0 + 2408);
    xsi_vlogvar_assign_value(t16, t11, 0, 0, 32);
    goto LAB57;

LAB33:    xsi_set_current_line(102, ng0);

LAB110:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t4 = (t11 + 4);
    t9 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t9);
    t17 = (t14 >> 0);
    *((unsigned int *)t4) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 4294967295U);
    t10 = (t0 + 1688U);
    t15 = *((char **)t10);
    memset(t43, 0, 8);
    t10 = (t43 + 4);
    t16 = (t15 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t43) = t22;
    t23 = *((unsigned int *)t16);
    t26 = (t23 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t10) = t27;
    xsi_vlogtype_concat(t55, 33, 33, 2U, t43, 1, t11, 32);
    t24 = (t0 + 2728);
    xsi_vlogvar_assign_value(t24, t55, 0, 0, 33);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t8 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t8);
    t17 = (t14 >> 0);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 4294967295U);
    t9 = (t0 + 1848U);
    t10 = *((char **)t9);
    memset(t43, 0, 8);
    t9 = (t43 + 4);
    t15 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t43) = t22;
    t23 = *((unsigned int *)t15);
    t26 = (t23 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t9) = t27;
    xsi_vlogtype_concat(t55, 33, 33, 2U, t43, 1, t11, 32);
    t16 = (t0 + 2888);
    xsi_vlogvar_assign_value(t16, t55, 0, 0, 33);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t0 + 2888);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    xsi_vlog_unsigned_add(t55, 33, t8, 33, t15, 33);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t55, 0, 0, 33);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t8 + 8);
    t15 = (t8 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t17 = *((unsigned int *)t15);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t9) = t19;
    t16 = (t0 + 3048);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    memset(t43, 0, 8);
    t42 = (t43 + 4);
    t48 = (t25 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t43) = t22;
    t23 = *((unsigned int *)t48);
    t26 = (t23 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t42) = t27;
    memset(t49, 0, 8);
    t56 = (t11 + 4);
    t57 = (t43 + 4);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t43);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t56);
    t32 = *((unsigned int *)t57);
    t33 = (t31 ^ t32);
    t36 = (t30 | t33);
    t37 = *((unsigned int *)t56);
    t38 = *((unsigned int *)t57);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB112;

LAB111:    if (t39 != 0)
        goto LAB113;

LAB114:    t59 = (t49 + 4);
    t44 = *((unsigned int *)t59);
    t45 = (~(t44));
    t46 = *((unsigned int *)t49);
    t47 = (t46 & t45);
    t62 = (t47 != 0);
    if (t62 > 0)
        goto LAB115;

LAB116:    xsi_set_current_line(113, ng0);

LAB119:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t10);
    t17 = (t14 >> 0);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 4294967295U);
    t15 = (t0 + 2408);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 32);

LAB117:    goto LAB57;

LAB35:    xsi_set_current_line(117, ng0);

LAB120:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t8, 32, t9, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB57;

LAB37:    xsi_set_current_line(121, ng0);

LAB121:    xsi_set_current_line(122, ng0);
    t4 = (t0 + 1368U);
    t8 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t9 = (t8 + 4);
    t10 = (t4 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t14 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t26 = (~(t23));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB125;

LAB122:    if (t23 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t11) = 1;

LAB125:    t16 = (t11 + 4);
    t28 = *((unsigned int *)t16);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(126, ng0);

LAB130:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 1848U);
    t8 = *((char **)t2);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_mod(t43, 32, t4, 32, t8, 32);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t43, 0, 0, 32);

LAB128:    goto LAB57;

LAB39:    xsi_set_current_line(131, ng0);

LAB131:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 1368U);
    t8 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t9 = (t8 + 4);
    t10 = (t4 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t14 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t26 = (~(t23));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB135;

LAB132:    if (t23 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t11) = 1;

LAB135:    t16 = (t11 + 4);
    t28 = *((unsigned int *)t16);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(136, ng0);

LAB140:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 1848U);
    t8 = *((char **)t2);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t4, 32, t8, 32);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t11, 0, 0, 32);

LAB138:    goto LAB57;

LAB41:    xsi_set_current_line(141, ng0);

LAB141:    xsi_set_current_line(142, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    xsi_vlogtype_sign_extend(t55, 64, t8, 32);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    xsi_vlogtype_sign_extend(t90, 64, t9, 32);
    xsi_vlog_signed_multiply(t91, 64, t55, 64, t90, 64);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t91, 0, 0, 64);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t8 = (t4 + 4);
    t9 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t14 | t19);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t26 = (~(t23));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB145;

LAB142:    if (t23 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t11) = 1;

LAB145:    t15 = (t11 + 4);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB146;

LAB147:    xsi_set_current_line(147, ng0);

LAB150:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t8 + 8);
    t15 = (t8 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t15);
    t17 = (t14 >> 0);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 4294967295U);
    t16 = (t0 + 2408);
    xsi_vlogvar_assign_value(t16, t11, 0, 0, 32);

LAB148:    goto LAB57;

LAB43:    xsi_set_current_line(152, ng0);

LAB151:    xsi_set_current_line(153, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    xsi_vlog_unsigned_multiply(t55, 64, t8, 32, t9, 32);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t55, 0, 0, 64);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t8 = (t4 + 4);
    t9 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t14 | t19);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t26 = (~(t23));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB155;

LAB152:    if (t23 != 0)
        goto LAB154;

LAB153:    *((unsigned int *)t11) = 1;

LAB155:    t15 = (t11 + 4);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB156;

LAB157:    xsi_set_current_line(158, ng0);

LAB160:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t8 + 8);
    t15 = (t8 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t15);
    t17 = (t14 >> 0);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 4294967295U);
    t16 = (t0 + 2408);
    xsi_vlogvar_assign_value(t16, t11, 0, 0, 32);

LAB158:    goto LAB57;

LAB45:    xsi_set_current_line(163, ng0);

LAB161:    xsi_set_current_line(165, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t4 = (t11 + 4);
    t9 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t9);
    t17 = (t14 >> 0);
    *((unsigned int *)t4) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 4294967295U);
    t10 = (t0 + 1688U);
    t15 = *((char **)t10);
    memset(t43, 0, 8);
    t10 = (t43 + 4);
    t16 = (t15 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t43) = t22;
    t23 = *((unsigned int *)t16);
    t26 = (t23 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t10) = t27;
    xsi_vlogtype_concat(t55, 33, 33, 2U, t43, 1, t11, 32);
    t24 = (t0 + 2728);
    xsi_vlogvar_assign_value(t24, t55, 0, 0, 33);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t8 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t8);
    t17 = (t14 >> 0);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 4294967295U);
    t9 = (t0 + 1848U);
    t10 = *((char **)t9);
    memset(t43, 0, 8);
    t9 = (t43 + 4);
    t15 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t43) = t22;
    t23 = *((unsigned int *)t15);
    t26 = (t23 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t9) = t27;
    xsi_vlogtype_concat(t55, 33, 33, 2U, t43, 1, t11, 32);
    t16 = (t0 + 2888);
    xsi_vlogvar_assign_value(t16, t55, 0, 0, 33);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t9 = (t0 + 2888);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    xsi_vlog_unsigned_minus(t55, 33, t8, 33, t15, 33);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t55, 0, 0, 33);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t8 + 8);
    t15 = (t8 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t17 = *((unsigned int *)t15);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t9) = t19;
    t16 = (t0 + 3048);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    memset(t43, 0, 8);
    t42 = (t43 + 4);
    t48 = (t25 + 4);
    t20 = *((unsigned int *)t25);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t43) = t22;
    t23 = *((unsigned int *)t48);
    t26 = (t23 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t42) = t27;
    memset(t49, 0, 8);
    t56 = (t11 + 4);
    t57 = (t43 + 4);
    t28 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t43);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t56);
    t32 = *((unsigned int *)t57);
    t33 = (t31 ^ t32);
    t36 = (t30 | t33);
    t37 = *((unsigned int *)t56);
    t38 = *((unsigned int *)t57);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB163;

LAB162:    if (t39 != 0)
        goto LAB164;

LAB165:    t59 = (t49 + 4);
    t44 = *((unsigned int *)t59);
    t45 = (~(t44));
    t46 = *((unsigned int *)t49);
    t47 = (t46 & t45);
    t62 = (t47 != 0);
    if (t62 > 0)
        goto LAB166;

LAB167:    xsi_set_current_line(173, ng0);

LAB170:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t10);
    t17 = (t14 >> 0);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 4294967295U);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 4294967295U);
    t15 = (t0 + 2408);
    xsi_vlogvar_assign_value(t15, t11, 0, 0, 32);

LAB168:    goto LAB57;

LAB47:    xsi_set_current_line(177, ng0);

LAB171:    xsi_set_current_line(179, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t8, 32, t9, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB57;

LAB49:    xsi_set_current_line(181, ng0);

LAB172:    xsi_set_current_line(183, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    memset(t92, 0, 8);
    xsi_vlog_signed_less(t92, 32, t8, 32, t9, 32);
    memset(t43, 0, 8);
    t4 = (t92 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (~(t12));
    t14 = *((unsigned int *)t92);
    t17 = (t14 & t13);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t4) != 0)
        goto LAB175;

LAB176:    t15 = (t43 + 4);
    t19 = *((unsigned int *)t43);
    t20 = *((unsigned int *)t15);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB177;

LAB178:    t22 = *((unsigned int *)t43);
    t23 = (~(t22));
    t26 = *((unsigned int *)t15);
    t27 = (t23 || t26);
    if (t27 > 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t15) > 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t43) > 0)
        goto LAB183;

LAB184:    memcpy(t11, t24, 8);

LAB185:    t25 = (t0 + 2408);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 32);
    goto LAB57;

LAB51:    xsi_set_current_line(185, ng0);

LAB186:    xsi_set_current_line(187, ng0);
    t4 = (t0 + 1688U);
    t8 = *((char **)t4);
    t4 = (t0 + 1848U);
    t9 = *((char **)t4);
    memset(t49, 0, 8);
    t4 = (t8 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB188;

LAB187:    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB188;

LAB191:    if (*((unsigned int *)t8) < *((unsigned int *)t9))
        goto LAB189;

LAB190:    memset(t43, 0, 8);
    t16 = (t49 + 4);
    t12 = *((unsigned int *)t16);
    t13 = (~(t12));
    t14 = *((unsigned int *)t49);
    t17 = (t14 & t13);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB192;

LAB193:    if (*((unsigned int *)t16) != 0)
        goto LAB194;

LAB195:    t25 = (t43 + 4);
    t19 = *((unsigned int *)t43);
    t20 = *((unsigned int *)t25);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB196;

LAB197:    t22 = *((unsigned int *)t43);
    t23 = (~(t22));
    t26 = *((unsigned int *)t25);
    t27 = (t23 || t26);
    if (t27 > 0)
        goto LAB198;

LAB199:    if (*((unsigned int *)t25) > 0)
        goto LAB200;

LAB201:    if (*((unsigned int *)t43) > 0)
        goto LAB202;

LAB203:    memcpy(t11, t48, 8);

LAB204:    t56 = (t0 + 2408);
    xsi_vlogvar_assign_value(t56, t11, 0, 0, 32);
    goto LAB57;

LAB53:    xsi_set_current_line(189, ng0);

LAB205:    goto LAB57;

LAB59:    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t11) = (t22 | t23);
    t24 = (t9 + 4);
    t25 = (t10 + 4);
    t26 = *((unsigned int *)t9);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (~(t32));
    t34 = (t27 & t29);
    t35 = (t31 & t33);
    t36 = (~(t34));
    t37 = (~(t35));
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & t36);
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t39 & t37);
    t40 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t40 & t36);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & t37);
    goto LAB61;

LAB64:    t22 = *((unsigned int *)t43);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t43) = (t22 | t23);
    t16 = (t8 + 4);
    t24 = (t9 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t7 = (t28 & t27);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t34 = (t31 & t30);
    t32 = (~(t7));
    t33 = (~(t34));
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t32);
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t33);
    goto LAB66;

LAB68:    t40 = *((unsigned int *)t11);
    t41 = *((unsigned int *)t42);
    *((unsigned int *)t11) = (t40 | t41);
    t44 = *((unsigned int *)t25);
    t45 = *((unsigned int *)t42);
    *((unsigned int *)t25) = (t44 | t45);
    goto LAB67;

LAB70:    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t11) = (t22 | t23);
    t16 = (t8 + 4);
    t24 = (t9 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t7 = (t28 & t27);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t34 = (t31 & t30);
    t32 = (~(t7));
    t33 = (~(t34));
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t32);
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t33);
    goto LAB72;

LAB74:    t17 = *((unsigned int *)t49);
    t52 = (t17 + 0);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t43);
    t53 = (t18 - t19);
    t54 = (t53 + 1);
    xsi_vlogvar_assign_value(t4, t8, t52, *((unsigned int *)t43), t54);
    goto LAB75;

LAB78:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(65, ng0);

LAB83:    xsi_set_current_line(67, ng0);
    t16 = (t0 + 2568);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    memset(t43, 0, 8);
    t42 = (t43 + 4);
    t48 = (t25 + 4);
    t33 = *((unsigned int *)t25);
    t36 = (t33 >> 0);
    *((unsigned int *)t43) = t36;
    t37 = *((unsigned int *)t48);
    t38 = (t37 >> 0);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t39 & 4294967295U);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t40 & 4294967295U);
    t56 = (t0 + 2568);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t49, 0, 8);
    t59 = (t49 + 4);
    t60 = (t58 + 8);
    t61 = (t58 + 12);
    t41 = *((unsigned int *)t60);
    t44 = (t41 >> 0);
    *((unsigned int *)t49) = t44;
    t45 = *((unsigned int *)t61);
    t46 = (t45 >> 0);
    *((unsigned int *)t59) = t46;
    t47 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t47 & 4294967295U);
    t62 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t62 & 4294967295U);
    t64 = *((unsigned int *)t43);
    t65 = *((unsigned int *)t49);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t43 + 4);
    t68 = (t49 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB84;

LAB85:
LAB86:    t89 = (t0 + 2408);
    xsi_vlogvar_assign_value(t89, t63, 0, 0, 32);
    goto LAB82;

LAB84:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t43 + 4);
    t78 = (t49 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t43);
    t6 = (t81 & t80);
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t49);
    t7 = (t84 & t83);
    t85 = (~(t6));
    t86 = (~(t7));
    t87 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t87 & t85);
    t88 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t88 & t86);
    goto LAB86;

LAB89:    t17 = *((unsigned int *)t49);
    t52 = (t17 + 0);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t43);
    t53 = (t18 - t19);
    t54 = (t53 + 1);
    xsi_vlogvar_assign_value(t4, t8, t52, *((unsigned int *)t43), t54);
    goto LAB90;

LAB93:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(78, ng0);

LAB98:    xsi_set_current_line(80, ng0);
    t16 = (t0 + 2568);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    memset(t43, 0, 8);
    t42 = (t43 + 4);
    t48 = (t25 + 4);
    t33 = *((unsigned int *)t25);
    t36 = (t33 >> 0);
    *((unsigned int *)t43) = t36;
    t37 = *((unsigned int *)t48);
    t38 = (t37 >> 0);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t39 & 4294967295U);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t40 & 4294967295U);
    t56 = (t0 + 2568);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t49, 0, 8);
    t59 = (t49 + 4);
    t60 = (t58 + 8);
    t61 = (t58 + 12);
    t41 = *((unsigned int *)t60);
    t44 = (t41 >> 0);
    *((unsigned int *)t49) = t44;
    t45 = *((unsigned int *)t61);
    t46 = (t45 >> 0);
    *((unsigned int *)t59) = t46;
    t47 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t47 & 4294967295U);
    t62 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t62 & 4294967295U);
    t64 = *((unsigned int *)t43);
    t65 = *((unsigned int *)t49);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t43 + 4);
    t68 = (t49 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB99;

LAB100:
LAB101:    t89 = (t0 + 2408);
    xsi_vlogvar_assign_value(t89, t63, 0, 0, 32);
    goto LAB97;

LAB99:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t43 + 4);
    t78 = (t49 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t43);
    t6 = (t81 & t80);
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t49);
    t7 = (t84 & t83);
    t85 = (~(t6));
    t86 = (~(t7));
    t87 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t87 & t85);
    t88 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t88 & t86);
    goto LAB101;

LAB107:    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t11) = (t22 | t23);
    goto LAB109;

LAB112:    *((unsigned int *)t49) = 1;
    goto LAB114;

LAB113:    t58 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB114;

LAB115:    xsi_set_current_line(108, ng0);

LAB118:    xsi_set_current_line(110, ng0);
    t60 = ((char*)((ng3)));
    t61 = (t0 + 2408);
    xsi_vlogvar_assign_value(t61, t60, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng17)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB117;

LAB124:    t15 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(122, ng0);

LAB129:    xsi_set_current_line(124, ng0);
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    t24 = (t0 + 1848U);
    t42 = *((char **)t24);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_divide(t49, 32, t25, 32, t42, 32);
    t24 = (t0 + 2408);
    xsi_vlogvar_assign_value(t24, t49, 0, 0, 32);
    goto LAB128;

LAB134:    t15 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB135;

LAB136:    xsi_set_current_line(132, ng0);

LAB139:    xsi_set_current_line(134, ng0);
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    t24 = (t0 + 1848U);
    t42 = *((char **)t24);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_divide(t43, 32, t25, 32, t42, 32);
    t24 = (t0 + 2408);
    xsi_vlogvar_assign_value(t24, t43, 0, 0, 32);
    goto LAB138;

LAB144:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB145;

LAB146:    xsi_set_current_line(143, ng0);

LAB149:    xsi_set_current_line(145, ng0);
    t16 = (t0 + 2568);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    memset(t43, 0, 8);
    t42 = (t43 + 4);
    t48 = (t25 + 4);
    t33 = *((unsigned int *)t25);
    t36 = (t33 >> 0);
    *((unsigned int *)t43) = t36;
    t37 = *((unsigned int *)t48);
    t38 = (t37 >> 0);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t39 & 4294967295U);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t40 & 4294967295U);
    t56 = (t0 + 2408);
    xsi_vlogvar_assign_value(t56, t43, 0, 0, 32);
    goto LAB148;

LAB154:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB155;

LAB156:    xsi_set_current_line(154, ng0);

LAB159:    xsi_set_current_line(156, ng0);
    t16 = (t0 + 2568);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    memset(t43, 0, 8);
    t42 = (t43 + 4);
    t48 = (t25 + 4);
    t33 = *((unsigned int *)t25);
    t36 = (t33 >> 0);
    *((unsigned int *)t43) = t36;
    t37 = *((unsigned int *)t48);
    t38 = (t37 >> 0);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t39 & 4294967295U);
    t40 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t40 & 4294967295U);
    t56 = (t0 + 2408);
    xsi_vlogvar_assign_value(t56, t43, 0, 0, 32);
    goto LAB158;

LAB163:    *((unsigned int *)t49) = 1;
    goto LAB165;

LAB164:    t58 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB165;

LAB166:    xsi_set_current_line(168, ng0);

LAB169:    xsi_set_current_line(170, ng0);
    t60 = ((char*)((ng17)));
    t61 = (t0 + 3208);
    xsi_vlogvar_assign_value(t61, t60, 0, 0, 1);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB168;

LAB173:    *((unsigned int *)t43) = 1;
    goto LAB176;

LAB175:    t10 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB176;

LAB177:    t16 = ((char*)((ng10)));
    goto LAB178;

LAB179:    t24 = ((char*)((ng3)));
    goto LAB180;

LAB181:    xsi_vlog_unsigned_bit_combine(t11, 32, t16, 32, t24, 32);
    goto LAB185;

LAB183:    memcpy(t11, t16, 8);
    goto LAB185;

LAB188:    t15 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB190;

LAB189:    *((unsigned int *)t49) = 1;
    goto LAB190;

LAB192:    *((unsigned int *)t43) = 1;
    goto LAB195;

LAB194:    t24 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB195;

LAB196:    t42 = ((char*)((ng10)));
    goto LAB197;

LAB198:    t48 = ((char*)((ng3)));
    goto LAB199;

LAB200:    xsi_vlog_unsigned_bit_combine(t11, 32, t42, 32, t48, 32);
    goto LAB204;

LAB202:    memcpy(t11, t42, 8);
    goto LAB204;

}

static void Cont_199_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t0 + 4792);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t17, 0, 8);
    t18 = 1U;
    t19 = t18;
    t20 = (t3 + 4);
    t21 = *((unsigned int *)t3);
    t18 = (t18 & t21);
    t22 = *((unsigned int *)t20);
    t19 = (t19 & t22);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 | t18);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 | t19);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t26 = (t0 + 4712);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}


extern void work_m_00000000003157573956_2587490486_init()
{
	static char *pe[] = {(void *)Always_38_0,(void *)Cont_199_1};
	xsi_register_didat("work_m_00000000003157573956_2587490486", "isim/Single_Cpu_tb_isim_beh.exe.sim/work/m_00000000003157573956_2587490486.didat");
	xsi_register_executes(pe);
}
