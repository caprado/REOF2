void func_001054d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x1054d8:
    sp = sp + -0x10;                                            // 0x001054d8: addiu $sp, $sp, -0x10
    a1 = 0x10 << 16;                                            // 0x001054dc: lui $a1, 0x10
    a1 = a1 + 0x50b8;                                           // 0x001054e4: addiu $a1, $a1, 0x50b8
    return func_001067d8();  // Tail call                        // 0x001054ec: j 0x106740
    sp = sp + 0x10;                                             // 0x001054f0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001054f4: nop 
    sp = sp + -0x10;                                            // 0x001054f8: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x001054fc: lui $v0, 0x1f
    a0 = g_001efdf0;  // Global at 0x001efdf0                   // 0x00105504: lw $a0, -0x210($v0)
    goto label_0x1054d8;                                        // 0x0010550c: j 0x1054d8
    sp = sp + 0x10;                                             // 0x00105510: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00105514: nop 
    sp = sp + -0x20;                                            // 0x00105518: addiu $sp, $sp, -0x20
    v0 = 0x10 << 16;                                            // 0x0010551c: lui $v0, 0x10
    v0 = v0 + 0x54d8;                                           // 0x00105528: addiu $v0, $v0, 0x54d8
    v1 = 1;                                                     // 0x0010552c: addiu $v1, $zero, 1
    s1 = s0 + 0x1e4;                                            // 0x00105534: addiu $s1, $s0, 0x1e4
    *(uint32_t*)((s0) + 0x3c) = v0;                             // 0x00105540: sw $v0, 0x3c($s0)
    *(uint32_t*)((s0) + 0x38) = v1;                             // 0x00105548: sw $v1, 0x38($s0)
    a1 = 4;                                                     // 0x0010554c: addiu $a1, $zero, 4
    func_00105368();  // 0x105308                                // 0x00105550: jal 0x105308
    a0 = s0 + 0x23c;                                            // 0x00105558: addiu $a0, $s0, 0x23c
    a1 = 9;                                                     // 0x00105560: addiu $a1, $zero, 9
    func_00105368();  // 0x105308                                // 0x00105564: jal 0x105308
    a2 = 1;                                                     // 0x00105568: addiu $a2, $zero, 1
    a0 = s0 + 0x294;                                            // 0x0010556c: addiu $a0, $s0, 0x294
    a1 = 0xa;                                                   // 0x00105574: addiu $a1, $zero, 0xa
    func_00105368();  // 0x105308                                // 0x00105578: jal 0x105308
    a2 = 2;                                                     // 0x0010557c: addiu $a2, $zero, 2
    *(uint32_t*)((s0) + 0x1d8) = 0;                             // 0x00105580: sw $zero, 0x1d8($s0)
    v0 = 3;                                                     // 0x00105584: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 0x1e0) = s1;                            // 0x00105588: sw $s1, 0x1e0($s0)
    *(uint32_t*)((s0) + 0x1dc) = v0;                            // 0x0010558c: sw $v0, 0x1dc($s0)
    return;                                                     // 0x0010559c: jr $ra
    sp = sp + 0x20;                                             // 0x001055a0: addiu $sp, $sp, 0x20
}