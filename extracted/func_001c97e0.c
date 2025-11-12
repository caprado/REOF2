void func_001c97e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_10, local_11, local_12, local_14, local_18, local_1c, local_20, local_24;
    uint32_t local_2c, local_2e, local_30, local_32, local_34, local_36, local_37, local_3c;
    
    sp = sp + -0x40;                                            // 0x001c97e0: addiu $sp, $sp, -0x40
    v1 = 1;                                                     // 0x001c97e4: addiu $v1, $zero, 1
    v0 = sp + 0x28;                                             // 0x001c97ec: addiu $v0, $sp, 0x28
    local_3c = 0;                                               // 0x001c97f0: sb $zero, 0x3c($sp)
    local_10 = v1;                                              // 0x001c97f4: sb $v1, 0x10($sp)
    v1 = *(int8_t*)((a0) + 6);                                  // 0x001c97f8: lb $v1, 6($a0)
    local_36 = v1;                                              // 0x001c97fc: sb $v1, 0x36($sp)
    v1 = *(int8_t*)((a0) + 7);                                  // 0x001c9800: lb $v1, 7($a0)
    local_11 = v1;                                              // 0x001c9804: sb $v1, 0x11($sp)
    v1 = *(int32_t*)(a0);                                       // 0x001c9808: lw $v1, 0($a0)
    v1 = *(int32_t*)((v1) + 0xc);                               // 0x001c980c: lw $v1, 0xc($v1)
    local_14 = v1;                                              // 0x001c9810: sw $v1, 0x14($sp)
    v1 = *(int32_t*)(a0);                                       // 0x001c9814: lw $v1, 0($a0)
    v1 = *(int32_t*)((v1) + 0x10);                              // 0x001c9818: lw $v1, 0x10($v1)
    local_18 = v1;                                              // 0x001c981c: sw $v1, 0x18($sp)
    v1 = *(int32_t*)(a0);                                       // 0x001c9820: lw $v1, 0($a0)
    v1 = *(int32_t*)((v1) + 0x14);                              // 0x001c9824: lw $v1, 0x14($v1)
    local_1c = v1;                                              // 0x001c9828: sw $v1, 0x1c($sp)
    v1 = *(int32_t*)(a0);                                       // 0x001c982c: lw $v1, 0($a0)
    v1 = *(int32_t*)((v1) + 0x18);                              // 0x001c9830: lw $v1, 0x18($v1)
    local_20 = v1;                                              // 0x001c9834: sw $v1, 0x20($sp)
    v1 = *(int32_t*)(a0);                                       // 0x001c9838: lw $v1, 0($a0)
    v1 = *(int32_t*)((v1) + 0x1c);                              // 0x001c983c: lw $v1, 0x1c($v1)
    local_24 = v1;                                              // 0x001c9840: sw $v1, 0x24($sp)
    v1 = *(int32_t*)(a0);                                       // 0x001c9844: lw $v1, 0($a0)
    v1 = *(int32_t*)((v1) + 4);                                 // 0x001c9848: lw $v1, 4($v1)
    v1 = *(int32_t*)((v1) + 4);                                 // 0x001c984c: lw $v1, 4($v1)
    *(uint32_t*)(v0) = v1;                                      // 0x001c9850: sw $v1, 0($v0)
    v1 = *(int32_t*)(v0);                                       // 0x001c9854: lw $v1, 0($v0)
    if (v1 != 0) goto label_0x1c9868;                           // 0x001c9858: bnez $v1, 0x1c9868
    /* nop */                                                   // 0x001c985c: nop 
    v1 = sp + 0x3c;                                             // 0x001c9860: addiu $v1, $sp, 0x3c
    *(uint32_t*)(v0) = v1;                                      // 0x001c9864: sw $v1, 0($v0)
label_0x1c9868:
    v1 = *(int32_t*)(a0);                                       // 0x001c9868: lw $v1, 0($a0)
    v1 = *(int32_t*)(v1);                                       // 0x001c986c: lw $v1, 0($v1)
    v1 = *(int16_t*)(v1);                                       // 0x001c9870: lh $v1, 0($v1)
    at = ((unsigned)v1 < (unsigned)7) ? 1 : 0;                  // 0x001c9874: sltiu $at, $v1, 7
    if (at == 0) goto label_0x1c98a0;                           // 0x001c9878: beqz $at, 0x1c98a0
    /* nop */                                                   // 0x001c987c: nop 
    a1 = 0x24 << 16;                                            // 0x001c9880: lui $a1, 0x24
    v1 = v1 << 2;                                               // 0x001c9884: sll $v1, $v1, 2
    a1 = a1 + 0x38c0;                                           // 0x001c9888: addiu $a1, $a1, 0x38c0
    v1 = v1 + a1;                                               // 0x001c988c: addu $v1, $v1, $a1
    v1 = *(int32_t*)(v1);                                       // 0x001c9890: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x001c9894: jr $v1
    /* nop */                                                   // 0x001c9898: nop 
    /* nop */                                                   // 0x001c989c: nop 
label_0x1c98a0:
    v1 = 6;                                                     // 0x001c98a0: addiu $v1, $zero, 6
    goto label_0x1c98f8;                                        // 0x001c98a4: b 0x1c98f8
    local_2c = v1;                                              // 0x001c98a8: sh $v1, 0x2c($sp)
    /* nop */                                                   // 0x001c98ac: nop 
    v1 = 5;                                                     // 0x001c98b0: addiu $v1, $zero, 5
    goto label_0x1c98f8;                                        // 0x001c98b4: b 0x1c98f8
    local_2c = v1;                                              // 0x001c98b8: sh $v1, 0x2c($sp)
    /* nop */                                                   // 0x001c98bc: nop 
    v1 = 4;                                                     // 0x001c98c0: addiu $v1, $zero, 4
    goto label_0x1c98f8;                                        // 0x001c98c4: b 0x1c98f8
    local_2c = v1;                                              // 0x001c98c8: sh $v1, 0x2c($sp)
    /* nop */                                                   // 0x001c98cc: nop 
    v1 = 3;                                                     // 0x001c98d0: addiu $v1, $zero, 3
    goto label_0x1c98f8;                                        // 0x001c98d4: b 0x1c98f8
    local_2c = v1;                                              // 0x001c98d8: sh $v1, 0x2c($sp)
    /* nop */                                                   // 0x001c98dc: nop 
    v1 = 2;                                                     // 0x001c98e0: addiu $v1, $zero, 2
    goto label_0x1c98f8;                                        // 0x001c98e4: b 0x1c98f8
    local_2c = v1;                                              // 0x001c98e8: sh $v1, 0x2c($sp)
    /* nop */                                                   // 0x001c98ec: nop 
    local_2c = 0;                                               // 0x001c98f0: sh $zero, 0x2c($sp)
    /* nop */                                                   // 0x001c98f4: nop 
label_0x1c98f8:
    a1 = *(int32_t*)(a0);                                       // 0x001c98f8: lw $a1, 0($a0)
    v1 = 1;                                                     // 0x001c98fc: addiu $v1, $zero, 1
    a1 = g_002438c0;  // Global at 0x002438c0                   // 0x001c9900: lw $a1, 0($a1)
    a1 = g_002438c2;  // Global at 0x002438c2                   // 0x001c9904: lh $a1, 2($a1)
    if (a1 == v1) goto label_0x1c9918;                          // 0x001c9908: beq $a1, $v1, 0x1c9918
    /* nop */                                                   // 0x001c990c: nop 
    goto label_0x1c9920;                                        // 0x001c9910: b 0x1c9920
    local_2e = 0;                                               // 0x001c9914: sh $zero, 0x2e($sp)
label_0x1c9918:
    local_2e = v1;                                              // 0x001c9918: sh $v1, 0x2e($sp)
    /* nop */                                                   // 0x001c991c: nop 
label_0x1c9920:
    v1 = *(int32_t*)(a0);                                       // 0x001c9920: lw $v1, 0($a0)
    v1 = *(int32_t*)(v1);                                       // 0x001c9924: lw $v1, 0($v1)
    a1 = *(int16_t*)((v1) + 4);                                 // 0x001c9928: lh $a1, 4($v1)
    if (a1 == 0) goto label_0x1c9960;                           // 0x001c992c: beqz $a1, 0x1c9960
    /* nop */                                                   // 0x001c9930: nop 
    v1 = 1;                                                     // 0x001c9934: addiu $v1, $zero, 1
    if (a1 == v1) goto label_0x1c9958;                          // 0x001c9938: beq $a1, $v1, 0x1c9958
    /* nop */                                                   // 0x001c993c: nop 
    v1 = 2;                                                     // 0x001c9940: addiu $v1, $zero, 2
    /* nop */                                                   // 0x001c9944: nop 
    v1 = 2;                                                     // 0x001c9948: addiu $v1, $zero, 2
    goto label_0x1c9968;                                        // 0x001c994c: b 0x1c9968
    local_30 = v1;                                              // 0x001c9950: sh $v1, 0x30($sp)
    /* nop */                                                   // 0x001c9954: nop 
label_0x1c9958:
    goto label_0x1c9968;                                        // 0x001c9958: b 0x1c9968
    local_30 = v1;                                              // 0x001c995c: sh $v1, 0x30($sp)
label_0x1c9960:
    local_30 = 0;                                               // 0x001c9960: sh $zero, 0x30($sp)
    /* nop */                                                   // 0x001c9964: nop 
label_0x1c9968:
    v1 = *(int32_t*)(a0);                                       // 0x001c9968: lw $v1, 0($a0)
    v1 = *(int32_t*)(v1);                                       // 0x001c996c: lw $v1, 0($v1)
    a1 = *(int16_t*)((v1) + 6);                                 // 0x001c9970: lh $a1, 6($v1)
    if (a1 == 0) goto label_0x1c9990;                           // 0x001c9974: beqz $a1, 0x1c9990
    /* nop */                                                   // 0x001c9978: nop 
    v1 = 1;                                                     // 0x001c997c: addiu $v1, $zero, 1
    v1 = 3;                                                     // 0x001c9980: addiu $v1, $zero, 3
    goto label_0x1c9998;                                        // 0x001c9984: b 0x1c9998
    local_32 = v1;                                              // 0x001c9988: sh $v1, 0x32($sp)
    /* nop */                                                   // 0x001c998c: nop 
label_0x1c9990:
    v1 = 2;                                                     // 0x001c9990: addiu $v1, $zero, 2
    local_32 = v1;                                              // 0x001c9994: sh $v1, 0x32($sp)
label_0x1c9998:
    v1 = *(int32_t*)(a0);                                       // 0x001c9998: lw $v1, 0($a0)
    v1 = *(int32_t*)(v1);                                       // 0x001c999c: lw $v1, 0($v1)
    a1 = *(int16_t*)((v1) + 8);                                 // 0x001c99a0: lh $a1, 8($v1)
    if (a1 == 0) goto label_0x1c99d8;                           // 0x001c99a4: beqz $a1, 0x1c99d8
    /* nop */                                                   // 0x001c99a8: nop 
    v1 = 2;                                                     // 0x001c99ac: addiu $v1, $zero, 2
    if (a1 == v1) goto label_0x1c99d0;                          // 0x001c99b0: beq $a1, $v1, 0x1c99d0
    /* nop */                                                   // 0x001c99b4: nop 
    v1 = 1;                                                     // 0x001c99b8: addiu $v1, $zero, 1
    /* nop */                                                   // 0x001c99bc: nop 
    v1 = 1;                                                     // 0x001c99c0: addiu $v1, $zero, 1
    goto label_0x1c99e0;                                        // 0x001c99c4: b 0x1c99e0
    local_34 = v1;                                              // 0x001c99c8: sh $v1, 0x34($sp)
    /* nop */                                                   // 0x001c99cc: nop 
label_0x1c99d0:
    goto label_0x1c99e0;                                        // 0x001c99d0: b 0x1c99e0
    local_34 = v1;                                              // 0x001c99d4: sh $v1, 0x34($sp)
label_0x1c99d8:
    local_34 = 0;                                               // 0x001c99d8: sh $zero, 0x34($sp)
    /* nop */                                                   // 0x001c99dc: nop 
label_0x1c99e0:
    a1 = *(int32_t*)(a0);                                       // 0x001c99e0: lw $a1, 0($a0)
    v1 = 1;                                                     // 0x001c99e4: addiu $v1, $zero, 1
    a1 = g_002438c4;  // Global at 0x002438c4                   // 0x001c99e8: lw $a1, 4($a1)
    a1 = g_002438c0;  // Global at 0x002438c0                   // 0x001c99ec: lh $a1, 0($a1)
    if (a1 == v1) goto label_0x1c9a00;                          // 0x001c99f0: beq $a1, $v1, 0x1c9a00
    /* nop */                                                   // 0x001c99f4: nop 
    goto label_0x1c9a08;                                        // 0x001c99f8: b 0x1c9a08
    local_12 = 0;                                               // 0x001c99fc: sh $zero, 0x12($sp)
label_0x1c9a00:
    local_12 = v1;                                              // 0x001c9a00: sh $v1, 0x12($sp)
    /* nop */                                                   // 0x001c9a04: nop 
label_0x1c9a08:
    a1 = *(int32_t*)(a0);                                       // 0x001c9a08: lw $a1, 0($a0)
    v1 = 1;                                                     // 0x001c9a0c: addiu $v1, $zero, 1
    a1 = g_002438c4;  // Global at 0x002438c4                   // 0x001c9a10: lw $a1, 4($a1)
    a1 = g_002438c2;  // Global at 0x002438c2                   // 0x001c9a14: lh $a1, 2($a1)
    if (a1 == v1) goto label_0x1c9a28;                          // 0x001c9a18: beq $a1, $v1, 0x1c9a28
    /* nop */                                                   // 0x001c9a1c: nop 
    v0 = *(int32_t*)(v0);                                       // 0x001c9a20: lw $v0, 0($v0)
    *(uint8_t*)(v0) = 0;                                        // 0x001c9a24: sb $zero, 0($v0)
label_0x1c9a28:
    v1 = *(int32_t*)(a0);                                       // 0x001c9a28: lw $v1, 0($a0)
    v0 = 3;                                                     // 0x001c9a2c: addiu $v0, $zero, 3
    v1 = *(int32_t*)((v1) + 8);                                 // 0x001c9a30: lw $v1, 8($v1)
    v1 = *(int16_t*)(v1);                                       // 0x001c9a34: lh $v1, 0($v1)
    if (v1 == v0) goto label_0x1c9a80;                          // 0x001c9a38: beq $v1, $v0, 0x1c9a80
    /* nop */                                                   // 0x001c9a3c: nop 
    v0 = 2;                                                     // 0x001c9a40: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1c9a78;                          // 0x001c9a44: beq $v1, $v0, 0x1c9a78
    /* nop */                                                   // 0x001c9a48: nop 
    v0 = 1;                                                     // 0x001c9a4c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1c9a70;                          // 0x001c9a50: beq $v1, $v0, 0x1c9a70
    /* nop */                                                   // 0x001c9a54: nop 
    if (v1 == 0) goto label_0x1c9a68;                           // 0x001c9a58: beqz $v1, 0x1c9a68
    /* nop */                                                   // 0x001c9a5c: nop 
    goto label_0x1c9a88;                                        // 0x001c9a60: b 0x1c9a88
    /* nop */                                                   // 0x001c9a64: nop 
label_0x1c9a68:
    goto label_0x1c9a88;                                        // 0x001c9a68: b 0x1c9a88
    local_37 = 0;                                               // 0x001c9a6c: sb $zero, 0x37($sp)
label_0x1c9a70:
    goto label_0x1c9a88;                                        // 0x001c9a70: b 0x1c9a88
    local_37 = v0;                                              // 0x001c9a74: sb $v0, 0x37($sp)
label_0x1c9a78:
    goto label_0x1c9a88;                                        // 0x001c9a78: b 0x1c9a88
    local_37 = v0;                                              // 0x001c9a7c: sb $v0, 0x37($sp)
label_0x1c9a80:
    v0 = 4;                                                     // 0x001c9a80: addiu $v0, $zero, 4
    local_37 = v0;                                              // 0x001c9a84: sb $v0, 0x37($sp)
label_0x1c9a88:
    func_001c8130();  // 0x1c8020                                // 0x001c9a88: jal 0x1c8020
    a0 = sp + 0x10;                                             // 0x001c9a8c: addiu $a0, $sp, 0x10
    v1 = 2;                                                     // 0x001c9a90: addiu $v1, $zero, 2
    at = 0x31 << 16;                                            // 0x001c9a94: lui $at, 0x31
    g_00316a90 = v1;  // Global at 0x00316a90                   // 0x001c9a98: sw $v1, 0x6a90($at)
    return;                                                     // 0x001c9aa8: jr $ra
    sp = sp + 0x40;                                             // 0x001c9aac: addiu $sp, $sp, 0x40
}