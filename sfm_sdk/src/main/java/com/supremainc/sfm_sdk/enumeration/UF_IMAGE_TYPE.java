/*
 * Copyright (c) 2001 - 2019. Suprema Inc. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for details.
 */

package com.supremainc.sfm_sdk.enumeration;

/**
 * Please refer to the SFM Protocol Manual for the details.
 */
public enum UF_IMAGE_TYPE {
    UF_GRAY_IMAGE(0x30),
    UF_BINARY_IMAGE(0x31),
    UF_4BIT_GRAY_IMAGE(0x32),
    UF_WSQ_IMAGE(0x33),
    UF_WSQ_HQ_IMAGE(0x33),
    UF_WSQ_MQ_IMAGE(0x34),
    UF_WSQ_LQ_IMAGE(0x35),
    ;
    private int value;

    UF_IMAGE_TYPE(int i) {
        this.value = i;
    }

    public int getValue() {
        return this.value;
    }
}
