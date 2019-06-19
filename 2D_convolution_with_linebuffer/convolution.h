/*******************************************************************************
Vendor: Xilinx 
Associated Filename: convolution.h
Purpose: Vivado HLS Design Example 
Device: All 
# Revision History: Oct 1, 2014-2019 - initial release
                                                
*******************************************************************************
(c) Copyright 2008 - 2012 Xilinx, Inc. All rights reserved. 

This file contains confidential and proprietary information of Xilinx, Inc. and 
is protected under U.S. and international copyright and other intellectual 
property laws.

DISCLAIMER
This disclaimer is not a license and does not grant any rights to the materials 
distributed herewith. Except as otherwise provided in a valid license issued to 
you by Xilinx, and to the fibon_fimum extent permitted by applicable law: 
(1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND WITH ALL FAULTS, AND XILINX 
HEREBY DISCLAIMS ALL WARRANTIES AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, 
INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-INFRINGEMENT, OR 
FITNESS FOR ANY PARTICULAR PURPOSE; and (2) Xilinx shall not be liable (whether 
in contract or tort, including negligence, or under any other theory of 
liability) for any loss or damage of any kind or nature related to, arising under 
or in connection with these materials, including for any direct, or any indirect, 
special, incidental, or consequential loss or damage (including loss of data, 
profits, goodwill, or any type of loss or damage suffered as a result of any 
action brought by a third party) even if such damage or loss was reasonably 
foreseeable or Xilinx had been advised of the possibility of the same.

CRITICAL APPLICATIONS
Xilinx products are not designed or intended to be fail-safe, or for use in any 
application requiring fail-safe performance, such as life-support or safety 
devices or systems, Class III medical devices, nuclear facilities, applications 
related to the deployment of airbags, or any other applications that could lead 
to death, personal injury, or severe property or environmental damage 
(individually and collectively, "Critical Applications"). Customer assumes the 
sole risk and liability of any use of Xilinx products in Critical Applications, 
subject only to applicable laws and regulations governing limitations on product 
liability. 

THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS PART OF THIS FILE AT 
ALL TIMES.

*******************************************************************************/
#ifndef CONVOLUTION_H_
#define CONVOLUTION_H_

#include <assert.h>
#include <stdint.h>
#include <hls_stream.h>

#define MAX_IMG_ROWS 1080
#define MAX_IMG_COLS 1920

#define TEST_IMG_ROWS 135
#define TEST_IMG_COLS 240
#define TEST_IMG_SIZE (TEST_IMG_ROWS * TEST_IMG_COLS)

typedef uint32_t data_t;

// External function prototypes
void filter11x11_orig(
        int w, int h,
        const data_t *src_image, data_t *dst_image);

void filter11x11_strm(
        int w, int h,
        hls::stream<data_t> &src_image, hls::stream<data_t> &dst_image);

#endif // CONVOLUTION_H_ not defined

