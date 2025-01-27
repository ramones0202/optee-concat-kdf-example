/*
 * Copyright (c) 2017, Linaro Limited
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __AES_TA_H__
#define __AES_TA_H__

/* UUID of the CONCAT KDF example trusted application */
#define TA_CONCAT_KDF_UUID \
	{ 0xe29228a8, 0x65bc, 0x4921, \
		{ 0x86, 0x32, 0xc3, 0x21, 0xe2, 0x5c, 0x1e, 0x4b } }

	//e29228a8-65bc-4921-8632-c321e25c1e4b

/*
 * TA_AES_CMD_PREPARE - Allocate resources for the AES ciphering
 * param[0] (value) a: TA_AES_ALGO_xxx, b: unused
 * param[1] (value) a: key size in bytes, b: unused
 * param[2] (value) a: TA_AES_MODE_ENCODE/_DECODE, b: unused
 * param[3] unused
 */

//3. REVIEW THIS PART (SAME REASON OF REVIEW 1 AND 2)

//	a. REPLACING BY THE TA_CONCAT_CMD_PREPARE
/*
 * TA_AES_CMD_PREPARE - Allocate resources for the AES ciphering
 * param[0] (value) a: TA_AES_ALGO_xxx, b: unused
 * param[1] (value) a: key size in bytes, b: unused
 * param[2] (value) a: TA_AES_MODE_ENCODE/_DECODE, b: unused
 * param[3] unused
 *
 *	#define TA_AES_CMD_PREPARE		0
 */
#define TA_CONCAT_CMD_PREPARE		0

/*
 * a. REPLACING BY JUST ONE PARAMETER
 * #define TA__ALGO_ECB			    0
 * #define TA_AES_ALGO_CBC			1
 * #define TA_AES_ALGO_CTR			2
 */
#define TA_CONCAT_ALGO_SHA256 	0


/*
 * a. REPLACING BY THE SHA-256 SIZE AND ONLY SUPPORTED KEY SIZE
 * #define TA_AES_SIZE_128BIT		(128 / 8)
 * #define TA_AES_SIZE_256BIT		(256 / 8)
 * #define TA_AES_SIZE_128BIT		(128 / 8)
 * #define TA_AES_SIZE_256BIT		(256 / 8)
*/
#define TA_CONCAT_SIZE_256BIT		(256 / 8)


/*
 * a. REPLACING BY CONCAT ONLY SUPPORTED MODE
 * #define TA_AES_MODE_ENCODE		1
 * #define TA_AES_MODE_DECODE		0
 */
#define TA_CONCAT_MODE_DERIVE 0

/*
 * TA_CONCAT_CMD_SET_KEY - Allocate resources for the AES ciphering
 * param[0] (memref) key data, size shall equal key length
 * param[1] unused
 * param[2] unused
 * param[3] unused
 */
#define TA_CONCAT_CMD_SET_KEY		1


/* a. UNUSED PARAMETER
 * TA_AES_CMD_SET_IV - reset IV
 * param[0] (memref) initial vector, size shall equal block length
 * param[1] unused
 * param[2] unused
 * param[3] unused
 */
// #define TA_AES_CMD_SET_IV		2

/* a. UNUSED PARAMETER
 * TA_AES_CMD_CIPHER - Cipher input buffer into output buffer
 * param[0] (memref) input buffer
 * param[1] (memref) output buffer (shall be bigger than input buffer)
 * param[2] unused
 * param[3] unused
 */
//#define TA_AES_CMD_CIPHER		3

#endif /* __AES_TA_H */
