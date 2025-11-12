void func_0015b860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t5 = *(int32_t*)((a0) + 0x14);                              // 0x0015b860: lw $t5, 0x14($a0)
    v1 = 1;                                                     // 0x0015b864: addiu $v1, $zero, 1
    t6 = *(int32_t*)(a0);                                       // 0x0015b868: lw $t6, 0($a0)
    t3 = 2;                                                     // 0x0015b86c: addiu $t3, $zero, 2
    v0 = (0 < t5) ? 1 : 0;                                      // 0x0015b870: slt $v0, $zero, $t5
    if (v0 == 0) t5 = v1;                                       // 0x0015b87c: movz $t5, $v1, $v0
    if (t6 != t3) goto label_0x15b8b8;                          // 0x0015b884: bne $t6, $t3, 0x15b8b8
    t4 = *(int32_t*)((a0) + 4);                                 // 0x0015b888: lw $t4, 4($a0)
    a0 = t4 + 0x3fff;                                           // 0x0015b88c: addiu $a0, $t4, 0x3fff
    v1 = (t4 < 0) ? 1 : 0;                                      // 0x0015b890: slti $v1, $t4, 0
    if (v1 != 0) t4 = a0;                                       // 0x0015b894: movn $t4, $a0, $v1
    v0 = t4 >> 0xe;                                             // 0x0015b898: sra $v0, $t4, 0xe
    /* multiply: v0 * t5 -> hi:lo */                            // 0x0015b89c: mult $ac2, $v0, $t5
    v0 = v0 << 0xb;                                             // 0x0015b8a0: sll $v0, $v0, 0xb
    *(uint32_t*)(t7) = v0;                                      // 0x0015b8a4: sw $v0, 0($t7)
    *(uint32_t*)(t8) = 0;                                       // 0x0015b8a8: sw $zero, 0($t8)
    goto label_0x15b8f0;                                        // 0x0015b8ac: b 0x15b8f0
    *(uint32_t*)(t9) = 0;                                       // 0x0015b8b0: sw $zero, 0($t9)
    /* nop */                                                   // 0x0015b8b4: nop 
label_0x15b8b8:
    v0 = 3;                                                     // 0x0015b8b8: addiu $v0, $zero, 3
    if (t6 != v0) return;  // Branch to 0x15b900                // 0x0015b8bc: bne $t6, $v0, 0x15b900
    v1 = (t4 < 0) ? 1 : 0;                                      // 0x0015b8c0: slti $v1, $t4, 0
    v0 = (t4 < 0) ? 1 : 0;                                      // 0x0015b8c4: slti $v0, $t4, 0
    a0 = t4 + 0x3fff;                                           // 0x0015b8c8: addiu $a0, $t4, 0x3fff
    if (v0 != 0) t4 = a0;                                       // 0x0015b8cc: movn $t4, $a0, $v0
    v1 = t4 >> 0xe;                                             // 0x0015b8d0: sra $v1, $t4, 0xe
    /* multiply: v1 * t5 -> hi:lo */                            // 0x0015b8d4: mult $ac2, $v1, $t5
    v1 = v1 << 0xa;                                             // 0x0015b8d8: sll $v1, $v1, 0xa
    v1 = v1 + 0x800;                                            // 0x0015b8dc: addiu $v1, $v1, 0x800
    v0 = v0 << 0xb;                                             // 0x0015b8e0: sll $v0, $v0, 0xb
    *(uint32_t*)(t7) = v0;                                      // 0x0015b8e4: sw $v0, 0($t7)
    *(uint32_t*)(t8) = 0;                                       // 0x0015b8e8: sw $zero, 0($t8)
    *(uint32_t*)(t9) = v1;                                      // 0x0015b8ec: sw $v1, 0($t9)
label_0x15b8f0:
    *(uint32_t*)(t0) = 0;                                       // 0x0015b8f0: sw $zero, 0($t0)
    *(uint32_t*)(t1) = 0;                                       // 0x0015b8f4: sw $zero, 0($t1)
    return;                                                     // 0x0015b8f8: jr $ra
    *(uint32_t*)(t2) = 0;                                       // 0x0015b8fc: sw $zero, 0($t2)
}