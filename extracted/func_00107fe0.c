void func_00107fe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00107fe0: addiu $sp, $sp, -0x30
    v0 = 9;                                                     // 0x00107fe4: addiu $v0, $zero, 9
    v1 = s4 + 8;                                                // 0x00107ff0: addiu $v1, $s4, 8
    a3 = 1;                                                     // 0x00107ff4: addiu $a3, $zero, 1
    /* divide: v1 / v0 -> hi:lo */                              // 0x00107ff8: div $zero, $v1, $v0
    /* beqzl $v0, 0x108024 */                                   // 0x0010801c: beqzl $v0, 0x108024
    /* break (trap) */                                          // 0x00108020: break 0, 7
    /* mflo $v1 */                                              // 0x00108028
    v0 = (a3 < v1) ? 1 : 0;                                     // 0x0010802c: slt $v0, $a3, $v1
    if (v0 == 0) goto label_0x108054;                           // 0x00108030: beqz $v0, 0x108054
label_0x108038:
    a3 = a3 << 1;                                               // 0x00108038: sll $a3, $a3, 1
    v0 = (a3 < v1) ? 1 : 0;                                     // 0x0010803c: slt $v0, $a3, $v1
    /* nop */                                                   // 0x00108040: nop 
    /* nop */                                                   // 0x00108044: nop 
    /* nop */                                                   // 0x00108048: nop 
    if (v0 != 0) goto label_0x108038;                           // 0x0010804c: bnez $v0, 0x108038
    a1 = a1 + 1;                                                // 0x00108050: addiu $a1, $a1, 1
label_0x108054:
    func_00107ea8();  // 0x107e00                                // 0x00108054: jal 0x107e00
    v1 = (s2 < 0xa) ? 1 : 0;                                    // 0x0010805c: slti $v1, $s2, 0xa
    v0 = 1;                                                     // 0x00108064: addiu $v0, $zero, 1
    *(uint32_t*)((a1) + 0x14) = s1;                             // 0x00108068: sw $s1, 0x14($a1)
    s1 = 9;                                                     // 0x0010806c: addiu $s1, $zero, 9
    if (v1 != 0) goto label_0x1080b0;                           // 0x00108070: bnez $v1, 0x1080b0
    *(uint32_t*)((a1) + 0x10) = v0;                             // 0x00108074: sw $v0, 0x10($a1)
    s0 = s0 + 9;                                                // 0x00108078: addiu $s0, $s0, 9
    a3 = *(int8_t*)(s0);                                        // 0x0010807c: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00108080: addiu $s0, $s0, 1
    a2 = 0xa;                                                   // 0x00108088: addiu $a2, $zero, 0xa
    a3 = a3 + -0x30;                                            // 0x0010808c: addiu $a3, $a3, -0x30
    func_00107fe0();  // 0x107ed8                                // 0x00108090: jal 0x107ed8
    s1 = s1 + 1;                                                // 0x00108094: addiu $s1, $s1, 1
    v0 = (s1 < s2) ? 1 : 0;                                     // 0x0010809c: slt $v0, $s1, $s2
    /* bnezl $v0, 0x108080 */                                   // 0x001080a0: bnezl $v0, 0x108080
    a3 = *(int8_t*)(s0);                                        // 0x001080a4: lb $a3, 0($s0)
    goto label_0x1080b4;                                        // 0x001080a8: b 0x1080b4
    s0 = s0 + 1;                                                // 0x001080ac: addiu $s0, $s0, 1
label_0x1080b0:
    s0 = s0 + 0xa;                                              // 0x001080b0: addiu $s0, $s0, 0xa
label_0x1080b4:
    v0 = (s1 < s4) ? 1 : 0;                                     // 0x001080b4: slt $v0, $s1, $s4
    /* beqzl $v0, 0x1080f0 */                                   // 0x001080b8: beqzl $v0, 0x1080f0
    s1 = s4 - s1;                                               // 0x001080c0: subu $s1, $s4, $s1
    /* nop */                                                   // 0x001080c4: nop 
label_0x1080c8:
    a3 = *(int8_t*)(s0);                                        // 0x001080c8: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x001080cc: addiu $s0, $s0, 1
    a2 = 0xa;                                                   // 0x001080d4: addiu $a2, $zero, 0xa
    a3 = a3 + -0x30;                                            // 0x001080d8: addiu $a3, $a3, -0x30
    func_00107fe0();  // 0x107ed8                                // 0x001080dc: jal 0x107ed8
    s1 = s1 + -1;                                               // 0x001080e0: addiu $s1, $s1, -1
    if (s1 != 0) goto label_0x1080c8;                           // 0x001080e4: bnez $s1, 0x1080c8
    return;                                                     // 0x00108108: jr $ra
    sp = sp + 0x30;                                             // 0x0010810c: addiu $sp, $sp, 0x30
}