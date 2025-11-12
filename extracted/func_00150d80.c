void func_00150d80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 3;                                                     // 0x00150d84: addiu $v1, $zero, 3
    v0 = *(int32_t*)((a1) + 0x118);                             // 0x00150d88: lw $v0, 0x118($a1)
    if (v0 != v1) goto label_0x150da0;                          // 0x00150d8c: bnel $v0, $v1, 0x150da0
    v0 = *(int32_t*)((a1) + 0x424);                             // 0x00150d90: lw $v0, 0x424($a1)
    *(uint32_t*)((a1) + 0x424) = 0;                             // 0x00150d94: sw $zero, 0x424($a1)
    goto label_0x150dc0;                                        // 0x00150d98: b 0x150dc0
    *(uint32_t*)((a1) + 0x420) = 0;                             // 0x00150d9c: sw $zero, 0x420($a1)
label_0x150da0:
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x00150da0: srl $v1, $v0, 0x1f
    a0 = v0 + 1;                                                // 0x00150da4: addiu $a0, $v0, 1
    v1 = v0 + v1;                                               // 0x00150da8: addu $v1, $v0, $v1
    *(uint32_t*)((a1) + 0x424) = a0;                            // 0x00150dac: sw $a0, 0x424($a1)
    v1 = v1 >> 1;                                               // 0x00150db0: sra $v1, $v1, 1
    v1 = v1 << 1;                                               // 0x00150db4: sll $v1, $v1, 1
    v0 = v0 - v1;                                               // 0x00150db8: subu $v0, $v0, $v1
    *(uint32_t*)((a1) + 0x420) = v0;                            // 0x00150dbc: sw $v0, 0x420($a1)
label_0x150dc0:
    v0 = *(int32_t*)((a1) + 0x114);                             // 0x00150dc0: lw $v0, 0x114($a1)
    v0 = v0 << 2;                                               // 0x00150dc4: sll $v0, $v0, 2
    v1 = 0x22 << 16;                                            // 0x00150dc8: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x00150dcc: addu $v1, $v1, $v0
    v1 = g_00226ce0;  // Global at 0x00226ce0                   // 0x00150dd0: lw $v1, 0x6ce0($v1)
    *(uint32_t*)((a1) + 0x36c) = v1;                            // 0x00150dd4: sw $v1, 0x36c($a1)
    a0 = 0x22 << 16;                                            // 0x00150dd8: lui $a0, 0x22
    a0 = a0 + v0;                                               // 0x00150ddc: addu $a0, $a0, $v0
    a0 = g_00226cf0;  // Global at 0x00226cf0                   // 0x00150de0: lw $a0, 0x6cf0($a0)
    return;                                                     // 0x00150de4: jr $ra
    *(uint32_t*)((a1) + 0x37c) = a0;                            // 0x00150de8: sw $a0, 0x37c($a1)
}