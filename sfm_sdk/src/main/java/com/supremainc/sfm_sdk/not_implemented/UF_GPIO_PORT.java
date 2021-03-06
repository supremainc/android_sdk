/*
 * Copyright (c) 2001 - 2019. Suprema Inc. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root for details.
 */

package com.supremainc.sfm_sdk.not_implemented;

//SFM3000/SFM6000
public enum UF_GPIO_PORT {
    UF_GPIO_0(0),
    UF_GPIO_1(1),
    UF_GPIO_2(2),
    UF_GPIO_3(3),
    UF_GPIO_4(4),
    UF_GPIO_5(5),
    UF_GPIO_6(6),
    UF_GPIO_7(7),
    ;

    private int value;

    UF_GPIO_PORT(int i) {
        this.value = i;
    }

    public int getValue() {
        return this.value;
    }
}
