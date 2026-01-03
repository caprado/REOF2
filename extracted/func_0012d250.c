void func_0012d250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012d250: addiu $sp, $sp, -0x20
    s0 = *(int32_t*)((s1) + 4);                                 // 0x0012d264: lw $s0, 4($s1)
    func_00124e60();  // 124e60                                // 0x0012d268: jal 0x124e60
    if (v0 != 0) goto label_0x12d280;                           // 0x0012d270: bnez $v0, 0x12d280
    func_0012cc98();  // 12cc98                                // 0x0012d278: jal 0x12cc98
    /* nop */                                                   // 0x0012d27c: nop 
label_0x12d280:
    func_00125428();  // 125428                                // 0x0012d280: jal 0x125428
    func_00124e60();  // 124e60                                // 0x0012d288: jal 0x124e60
    v1 = 3;                                                     // 0x0012d290: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x12d2a4;                          // 0x0012d294: bne $v0, $v1, 0x12d2a4
    func_0012cff8();  // 12cff8                                // 0x0012d29c: jal 0x12cff8
    /* nop */                                                   // 0x0012d2a0: nop 
label_0x12d2a4:
    a0 = *(int16_t*)((s0) + 0x98);                              // 0x0012d2a4: lh $a0, 0x98($s0)
    v0 = 0xa;                                                   // 0x0012d2a8: addiu $v0, $zero, 0xa
    if (a0 == v0) goto label_0x12d2cc;                          // 0x0012d2ac: beq $a0, $v0, 0x12d2cc
    v0 = 0x14;                                                  // 0x0012d2b0: addiu $v0, $zero, 0x14
    if (a0 == v0) goto label_0x12d2cc;                          // 0x0012d2b4: beq $a0, $v0, 0x12d2cc
    v0 = 0xb;                                                   // 0x0012d2b8: addiu $v0, $zero, 0xb
    if (a0 == v0) goto label_0x12d2cc;                          // 0x0012d2bc: beq $a0, $v0, 0x12d2cc
    v0 = 0xf;                                                   // 0x0012d2c0: addiu $v0, $zero, 0xf
    if (a0 != v0) goto label_0x12d2e8;                          // 0x0012d2c4: bne $a0, $v0, 0x12d2e8
label_0x12d2cc:
    return func_0012d250();  // Tail call                        // 0x0012d2dc: j 0x12d1c0
    sp = sp + 0x20;                                             // 0x0012d2e0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0012d2e4: nop 
label_0x12d2e8:
    return;                                                     // 0x0012d2f0: jr $ra
    sp = sp + 0x20;                                             // 0x0012d2f4: addiu $sp, $sp, 0x20
}