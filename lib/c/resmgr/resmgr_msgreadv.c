/*
 * $QNXLicenseC:
 * Copyright 2007, QNX Software Systems. All Rights Reserved.
 * 
 * You must obtain a written license from and pay applicable license fees to QNX 
 * Software Systems before you may reproduce, modify or distribute this software, 
 * or any work that includes all or part of this software.   Free development 
 * licenses are available for evaluation and non-commercial purposes.  For more 
 * information visit http://licensing.qnx.com or email licensing@qnx.com.
 *  
 * This file may contain contributions from others.  Please review this entire 
 * file for other proprietary rights or license notices, as well as the QNX 
 * Development Suite License Guide at http://licensing.qnx.com/license-guide/ 
 * for other information.
 * $
 */




#include <sys/neutrino.h>
#include <sys/resmgr.h>

int resmgr_msgreadv(resmgr_context_t *ctp, struct iovec *rmsg, int rparts, int offset) {
	return MsgReadv(ctp->rcvid, rmsg, rparts, ctp->offset + offset);
}

__SRCVERSION("resmgr_msgreadv.c $Rev: 153052 $");
