// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2020 Oplus. All rights reserved.
 */


#include <linux/sched.h>
#include <linux/reciprocal_div.h>
#include <../kernel/sched/sched.h>
#include "special_opt.h"


bool specopt_skip_balance(void)
{
	return false;
}

bool is_heavy_load_task(struct task_struct *p)
{
	if (!p)
		return false;

	return false;
}
