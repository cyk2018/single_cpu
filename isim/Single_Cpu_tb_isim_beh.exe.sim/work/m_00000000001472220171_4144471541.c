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
static const char *ng0 = "C:/Users/29593/Documents/cyk/computer-system/single_cpu/single_cpu/Controller.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {36U, 0U};
static unsigned int ng5[] = {39U, 0U};
static unsigned int ng6[] = {37U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {32U, 0U};
static unsigned int ng13[] = {33U, 0U};
static unsigned int ng14[] = {26U, 0U};
static unsigned int ng15[] = {27U, 0U};
static unsigned int ng16[] = {24U, 0U};
static unsigned int ng17[] = {25U, 0U};
static unsigned int ng18[] = {34U, 0U};
static unsigned int ng19[] = {35U, 0U};
static unsigned int ng20[] = {42U, 0U};
static unsigned int ng21[] = {43U, 0U};
static unsigned int ng22[] = {8U, 0U};



static void Always_36_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:
LAB9:    goto LAB2;

LAB7:    xsi_set_current_line(48, ng0);

LAB10:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB11:    t4 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t7 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB9;

LAB12:    xsi_set_current_line(50, ng0);

LAB53:    goto LAB52;

LAB14:    xsi_set_current_line(54, ng0);

LAB54:    goto LAB52;

LAB16:    xsi_set_current_line(60, ng0);

LAB55:    goto LAB52;

LAB18:    xsi_set_current_line(64, ng0);

LAB56:    goto LAB52;

LAB20:    xsi_set_current_line(68, ng0);

LAB57:    goto LAB52;

LAB22:    xsi_set_current_line(72, ng0);

LAB58:    goto LAB52;

LAB24:    xsi_set_current_line(76, ng0);

LAB59:    goto LAB52;

LAB26:    xsi_set_current_line(80, ng0);

LAB60:    goto LAB52;

LAB28:    xsi_set_current_line(84, ng0);

LAB61:    goto LAB52;

LAB30:    xsi_set_current_line(88, ng0);

LAB62:    goto LAB52;

LAB32:    xsi_set_current_line(92, ng0);

LAB63:    goto LAB52;

LAB34:    xsi_set_current_line(96, ng0);

LAB64:    goto LAB52;

LAB36:    xsi_set_current_line(102, ng0);

LAB65:    goto LAB52;

LAB38:    xsi_set_current_line(108, ng0);

LAB66:    goto LAB52;

LAB40:    xsi_set_current_line(114, ng0);

LAB67:    goto LAB52;

LAB42:    xsi_set_current_line(120, ng0);

LAB68:    goto LAB52;

LAB44:    xsi_set_current_line(124, ng0);

LAB69:    goto LAB52;

LAB46:    xsi_set_current_line(128, ng0);

LAB70:    goto LAB52;

LAB48:    xsi_set_current_line(132, ng0);

LAB71:    goto LAB52;

LAB50:    xsi_set_current_line(136, ng0);

LAB72:    xsi_set_current_line(137, ng0);
    t4 = ((char*)((ng1)));
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 1);
    goto LAB52;

}


extern void work_m_00000000001472220171_4144471541_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000001472220171_4144471541", "isim/Single_Cpu_tb_isim_beh.exe.sim/work/m_00000000001472220171_4144471541.didat");
	xsi_register_executes(pe);
}
