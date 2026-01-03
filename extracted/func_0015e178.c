void func_0015e178() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x0015e178: addiu $sp, $sp, -0x30
    a2 = sp + 4;                                                // 0x0015e188: addiu $a2, $sp, 4
    func_00175660();  // 175660                                // 0x0015e190: jal 0x175660
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x0015e194: lw $a0, 0x40($a0)
    if (v0 != 0) goto label_0x15e218;                           // 0x0015e198: bnez $v0, 0x15e218
    v0 = -1;                                                    // 0x0015e19c: addiu $v0, $zero, -1
    a1 = local_4;                                               // 0x0015e1a0: lw $a1, 4($sp)
    v0 = ((unsigned)a1 < (unsigned)0x800) ? 1 : 0;              // 0x0015e1a4: sltiu $v0, $a1, 0x800
    /* bnezl $v0, 0x15e218 */                                   // 0x0015e1a8: bnezl $v0, 0x15e218
    v0 = -1;                                                    // 0x0015e1ac: addiu $v0, $zero, -1
    a0 = local_0;                                               // 0x0015e1b0: lw $a0, 0($sp)
    /* beqzl $a0, 0x15e218 */                                   // 0x0015e1b4: beqzl $a0, 0x15e218
    v0 = -1;                                                    // 0x0015e1b8: addiu $v0, $zero, -1
    func_00178db0();  // 178db0                                // 0x0015e1bc: jal 0x178db0
    /* nop */                                                   // 0x0015e1c0: nop 
    if (s1 == 0) goto label_0x15e218;                           // 0x0015e1c8: beqz $s1, 0x15e218
    v0 = -1;                                                    // 0x0015e1cc: addiu $v0, $zero, -1
    func_00178fc8();  // 178fc8                                // 0x0015e1d4: jal 0x178fc8
    a1 = sp + 8;                                                // 0x0015e1d8: addiu $a1, $sp, 8
    if (v0 == 0) goto label_0x15e1ec;                           // 0x0015e1dc: beqz $v0, 0x15e1ec
    v0 = local_8;                                               // 0x0015e1e0: lw $v0, 8($sp)
    if (v0 != 0) goto label_0x15e200;                           // 0x0015e1e4: bnez $v0, 0x15e200
    /* nop */                                                   // 0x0015e1e8: nop 
label_0x15e1ec:
    func_00178e78();  // 178e78                                // 0x0015e1ec: jal 0x178e78
    goto label_0x15e218;                                        // 0x0015e1f4: b 0x15e218
    v0 = -1;                                                    // 0x0015e1f8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x0015e1fc: nop 
label_0x15e200:
    func_0015e230();  // 15e230                                // 0x0015e200: jal 0x15e230
    func_00178e78();  // 178e78                                // 0x0015e20c: jal 0x178e78
label_0x15e218:
    return;                                                     // 0x0015e224: jr $ra
    sp = sp + 0x30;                                             // 0x0015e228: addiu $sp, $sp, 0x30
}