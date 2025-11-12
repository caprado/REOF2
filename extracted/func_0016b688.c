void func_0016b688() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016b688: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x0016b68c: lui $a1, 0xff00
    a1 = a1 | 0xd0b;                                            // 0x0016b694: ori $a1, $a1, 0xd0b
    return func_00169940();  // Tail call                        // 0x0016b69c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016b6a0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016b6a4: nop 
    sp = sp + -0x10;                                            // 0x0016b6a8: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x0016b6ac: lui $a1, 0xff00
    a1 = a1 | 0xd0b;                                            // 0x0016b6b4: ori $a1, $a1, 0xd0b
    return func_00169940();  // Tail call                        // 0x0016b6bc: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016b6c0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016b6c4: nop 
    sp = sp + -0x10;                                            // 0x0016b6c8: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x0016b6cc: lui $a1, 0xff00
    a1 = a1 | 0xd0b;                                            // 0x0016b6d4: ori $a1, $a1, 0xd0b
    return func_00169940();  // Tail call                        // 0x0016b6dc: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016b6e0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016b6e4: nop 
    sp = sp + -0x10;                                            // 0x0016b6e8: addiu $sp, $sp, -0x10
    a1 = 0xff00 << 16;                                          // 0x0016b6ec: lui $a1, 0xff00
    a1 = a1 | 0xd0b;                                            // 0x0016b6f4: ori $a1, $a1, 0xd0b
    return func_00169940();  // Tail call                        // 0x0016b6fc: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016b700: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016b704: nop 
    sp = sp + -0x30;                                            // 0x0016b708: addiu $sp, $sp, -0x30
    func_0016b8a8();  // 0x16b858                                // 0x0016b720: jal 0x16b858
    /* beqzl $s0, 0x16b794 */                                   // 0x0016b72c: beqzl $s0, 0x16b794
    v1 = *(int32_t*)(s0);                                       // 0x0016b734: lw $v1, 0($s0)
    if (v1 == 0) goto label_0x16b790;                           // 0x0016b738: beqz $v1, 0x16b790
    s2 = *(int32_t*)((s1) + 0x1aec);                            // 0x0016b740: lw $s2, 0x1aec($s1)
    func_00168fa0();  // 0x168f38                                // 0x0016b744: jal 0x168f38
    func_0016b7b8();  // 0x16b7b0                                // 0x0016b74c: jal 0x16b7b0
    func_0016b858();  // 0x16b7b8                                // 0x0016b760: jal 0x16b7b8
    s3 = s1 + 0xcc0;                                            // 0x0016b764: addiu $s3, $s1, 0xcc0
    /* bnezl $v0, 0x16b794 */                                   // 0x0016b768: bnezl $v0, 0x16b794
    v1 = *(int32_t*)((s0) + 0x1c);                              // 0x0016b770: lw $v1, 0x1c($s0)
    *(uint32_t*)((s2) + 0x20) = v1;                             // 0x0016b774: sw $v1, 0x20($s2)
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x0016b778: lw $a0, 0x20($s0)
    *(uint32_t*)((s2) + 0x24) = a0;                             // 0x0016b77c: sw $a0, 0x24($s2)
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x0016b780: lw $v1, 0x14($s0)
    *(uint32_t*)((s3) + 0x114) = v1;                            // 0x0016b784: sw $v1, 0x114($s3)
    a0 = *(int32_t*)((s0) + 0x18);                              // 0x0016b788: lw $a0, 0x18($s0)
    *(uint32_t*)((s2) + 0xc) = a0;                              // 0x0016b78c: sw $a0, 0xc($s2)
label_0x16b790:
    return;                                                     // 0x0016b7a4: jr $ra
    sp = sp + 0x30;                                             // 0x0016b7a8: addiu $sp, $sp, 0x30
}