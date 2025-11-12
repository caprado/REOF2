void func_00155db0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = a2 & 0xf;                                              // 0x00155db0: andi $v1, $a2, 0xf
    /* beqzl $v1, 0x155de0 */                                   // 0x00155db4: beqzl $v1, 0x155de0
    a2 = (unsigned)a2 >> 4;                                     // 0x00155db8: srl $a2, $a2, 4
    /* nop */                                                   // 0x00155dbc: nop 
label_0x155dc0:
    v0 = *(int32_t*)(a1);                                       // 0x00155dc0: lw $v0, 0($a1)
    a1 = a1 + 4;                                                // 0x00155dc4: addiu $a1, $a1, 4
    v1 = v1 + -1;                                               // 0x00155dc8: addiu $v1, $v1, -1
    *(uint32_t*)(a0) = v0;                                      // 0x00155dcc: sw $v0, 0($a0)
    /* nop */                                                   // 0x00155dd0: nop 
    if (v1 != 0) goto label_0x155dc0;                           // 0x00155dd4: bnez $v1, 0x155dc0
    a0 = a0 + 4;                                                // 0x00155dd8: addiu $a0, $a0, 4
    a2 = (unsigned)a2 >> 4;                                     // 0x00155ddc: srl $a2, $a2, 4
    if (a2 == 0) goto label_0x155eb4;                           // 0x00155de0: beqz $a2, 0x155eb4
    /* nop */                                                   // 0x00155de4: nop 
label_0x155de8:
    t0 = *(int32_t*)(a1);                                       // 0x00155de8: lw $t0, 0($a1)
    a1 = a1 + 4;                                                // 0x00155dec: addiu $a1, $a1, 4
    a3 = *(int32_t*)(a1);                                       // 0x00155df0: lw $a3, 0($a1)
    a1 = a1 + 4;                                                // 0x00155df4: addiu $a1, $a1, 4
    v1 = *(int32_t*)(a1);                                       // 0x00155df8: lw $v1, 0($a1)
    a1 = a1 + 4;                                                // 0x00155dfc: addiu $a1, $a1, 4
    v0 = *(int32_t*)(a1);                                       // 0x00155e00: lw $v0, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e04: addiu $a1, $a1, 4
    *(uint32_t*)(a0) = t0;                                      // 0x00155e08: sw $t0, 0($a0)
    a2 = a2 + -1;                                               // 0x00155e0c: addiu $a2, $a2, -1
    *(uint32_t*)((a0) + 4) = a3;                                // 0x00155e10: sw $a3, 4($a0)
    *(uint32_t*)((a0) + 8) = v1;                                // 0x00155e14: sw $v1, 8($a0)
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x00155e18: sw $v0, 0xc($a0)
    t0 = *(int32_t*)(a1);                                       // 0x00155e1c: lw $t0, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e20: addiu $a1, $a1, 4
    a3 = *(int32_t*)(a1);                                       // 0x00155e24: lw $a3, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e28: addiu $a1, $a1, 4
    v1 = *(int32_t*)(a1);                                       // 0x00155e2c: lw $v1, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e30: addiu $a1, $a1, 4
    v0 = *(int32_t*)(a1);                                       // 0x00155e34: lw $v0, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e38: addiu $a1, $a1, 4
    *(uint32_t*)((a0) + 0x10) = t0;                             // 0x00155e3c: sw $t0, 0x10($a0)
    *(uint32_t*)((a0) + 0x14) = a3;                             // 0x00155e40: sw $a3, 0x14($a0)
    *(uint32_t*)((a0) + 0x18) = v1;                             // 0x00155e44: sw $v1, 0x18($a0)
    *(uint32_t*)((a0) + 0x1c) = v0;                             // 0x00155e48: sw $v0, 0x1c($a0)
    t0 = *(int32_t*)(a1);                                       // 0x00155e4c: lw $t0, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e50: addiu $a1, $a1, 4
    a3 = *(int32_t*)(a1);                                       // 0x00155e54: lw $a3, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e58: addiu $a1, $a1, 4
    v1 = *(int32_t*)(a1);                                       // 0x00155e5c: lw $v1, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e60: addiu $a1, $a1, 4
    v0 = *(int32_t*)(a1);                                       // 0x00155e64: lw $v0, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e68: addiu $a1, $a1, 4
    *(uint32_t*)((a0) + 0x20) = t0;                             // 0x00155e6c: sw $t0, 0x20($a0)
    *(uint32_t*)((a0) + 0x24) = a3;                             // 0x00155e70: sw $a3, 0x24($a0)
    *(uint32_t*)((a0) + 0x28) = v1;                             // 0x00155e74: sw $v1, 0x28($a0)
    *(uint32_t*)((a0) + 0x2c) = v0;                             // 0x00155e78: sw $v0, 0x2c($a0)
    t0 = *(int32_t*)(a1);                                       // 0x00155e7c: lw $t0, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e80: addiu $a1, $a1, 4
    a3 = *(int32_t*)(a1);                                       // 0x00155e84: lw $a3, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e88: addiu $a1, $a1, 4
    v1 = *(int32_t*)(a1);                                       // 0x00155e8c: lw $v1, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e90: addiu $a1, $a1, 4
    v0 = *(int32_t*)(a1);                                       // 0x00155e94: lw $v0, 0($a1)
    a1 = a1 + 4;                                                // 0x00155e98: addiu $a1, $a1, 4
    *(uint32_t*)((a0) + 0x30) = t0;                             // 0x00155e9c: sw $t0, 0x30($a0)
    *(uint32_t*)((a0) + 0x34) = a3;                             // 0x00155ea0: sw $a3, 0x34($a0)
    *(uint32_t*)((a0) + 0x38) = v1;                             // 0x00155ea4: sw $v1, 0x38($a0)
    *(uint32_t*)((a0) + 0x3c) = v0;                             // 0x00155ea8: sw $v0, 0x3c($a0)
    if (a2 != 0) goto label_0x155de8;                           // 0x00155eac: bnez $a2, 0x155de8
    a0 = a0 + 0x40;                                             // 0x00155eb0: addiu $a0, $a0, 0x40
label_0x155eb4:
    return;                                                     // 0x00155eb4: jr $ra
    /* nop */                                                   // 0x00155eb8: nop 
}