void func_00124f90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x124f90:
    sp = sp + -0x10;                                            // 0x00124f90: addiu $sp, $sp, -0x10
    v0 = a0 + 0x48;                                             // 0x00124f94: addiu $v0, $a0, 0x48
    a3 = *(int32_t*)((v0) + 0x20);                              // 0x00124fa4: lw $a3, 0x20($v0)
    s0 = *(int32_t*)((a0) + 8);                                 // 0x00124fa8: lw $s0, 8($a0)
    v1 = *(int32_t*)((v0) + 0x14);                              // 0x00124fac: lw $v1, 0x14($v0)
    a3 = a3 << 1;                                               // 0x00124fb0: sll $a3, $a3, 1
    a1 = *(int32_t*)(v0);                                       // 0x00124fb4: lw $a1, 0($v0)
    func_00134c90();  // 0x134c60                                // 0x00124fbc: jal 0x134c60
    a3 = v1 + a3;                                               // 0x00124fc0: addu $a3, $v1, $a3
    return func_00134cc0();  // Tail call                       // 0x00124fd0: j 0x134cc0
    sp = sp + 0x10;                                             // 0x00124fd4: addiu $sp, $sp, 0x10
label_0x124fd8:
    sp = sp + -0x10;                                            // 0x00124fd8: addiu $sp, $sp, -0x10
    v1 = a0 + 0x48;                                             // 0x00124fdc: addiu $v1, $a0, 0x48
    a1 = a1 << 1;                                               // 0x00124fe4: sll $a1, $a1, 1
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x00124ff0: lw $v0, 0x20($v1)
    a3 = *(int32_t*)((v1) + 0x14);                              // 0x00124ff4: lw $a3, 0x14($v1)
    t0 = *(int32_t*)((v1) + 0x1c);                              // 0x00124ff8: lw $t0, 0x1c($v1)
    v0 = v0 << 1;                                               // 0x00124ffc: sll $v0, $v0, 1
    s0 = *(int32_t*)((a0) + 8);                                 // 0x00125000: lw $s0, 8($a0)
    a3 = a3 + v0;                                               // 0x00125004: addu $a3, $a3, $v0
    a1 = *(int32_t*)(v1);                                       // 0x00125008: lw $a1, 0($v1)
    t0 = t0 << 1;                                               // 0x0012500c: sll $t0, $t0, 1
    func_00134ce0();  // 0x134c90                                // 0x00125014: jal 0x134c90
    t0 = a3 + t0;                                               // 0x00125018: addu $t0, $a3, $t0
    return func_00134cc0();  // Tail call                       // 0x00125028: j 0x134cc0
    sp = sp + 0x10;                                             // 0x0012502c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00125030: addiu $sp, $sp, -0x10
    a1 = a0 + 0x48;                                             // 0x00125034: addiu $a1, $a0, 0x48
    t6 = *(int32_t*)((a1) + 8);                                 // 0x0012503c: lw $t6, 8($a1)
    a2 = *(int32_t*)((a1) + 4);                                 // 0x00125040: lw $a2, 4($a1)
    /* beqzl $t6, 0x12504c */                                   // 0x00125044: beqzl $t6, 0x12504c
    /* break (trap) */                                          // 0x00125048: break 0, 7
    t7 = *(int32_t*)((a1) + 0x18);                              // 0x0012504c: lw $t7, 0x18($a1)
    /* divide: a2 / t6 -> hi:lo */                              // 0x00125050: div $zero, $a2, $t6
    t0 = *(int32_t*)((a1) + 0x20);                              // 0x00125054: lw $t0, 0x20($a1)
    t1 = *(int32_t*)((a1) + 0x10);                              // 0x00125058: lw $t1, 0x10($a1)
    v0 = t7 - t0;                                               // 0x0012505c: subu $v0, $t7, $t0
    a3 = *(int32_t*)((a1) + 0x28);                              // 0x00125060: lw $a3, 0x28($a1)
    v0 = v0 + t1;                                               // 0x00125064: addu $v0, $v0, $t1
    v0 = v0 + -1;                                               // 0x00125068: addiu $v0, $v0, -1
    v1 = a3 + t1;                                               // 0x0012506c: addu $v1, $a3, $t1
    v1 = v1 + -1;                                               // 0x00125070: addiu $v1, $v1, -1
    t4 = *(int32_t*)((a1) + 0x24);                              // 0x00125074: lw $t4, 0x24($a1)
    a3 = (a3 < t4) ? 1 : 0;                                     // 0x00125078: slt $a3, $a3, $t4
    /* mflo $a2 */                                              // 0x0012507c
    /* divide: v0 / t1 -> hi:lo */                              // 0x00125080: div $zero, $v0, $t1
    /* mflo $v0 */                                              // 0x00125088
    /* divide: v1 / t1 -> hi:lo */                              // 0x0012508c: div $zero, $v1, $t1
    /* mflo $t5 */                                              // 0x00125094
    /* mfhi $a1 */                                              // 0x00125098
    /* multiply: t3 * t1 -> hi:lo */                            // 0x0012509c: mult $ac3, $t3, $t1
    a1 = t1 - a1;                                               // 0x001250a0: subu $a1, $t1, $a1
    v0 = (t5 < t3) ? 1 : 0;                                     // 0x001250a4: slt $v0, $t5, $t3
    a1 = a1 + -1;                                               // 0x001250a8: addiu $a1, $a1, -1
    if (v0 == 0) goto label_0x1250c0;                           // 0x001250ac: beqz $v0, 0x1250c0
    t0 = t0 + v1;                                               // 0x001250b0: addu $t0, $t0, $v1
    v0 = t0 - a1;                                               // 0x001250b4: subu $v0, $t0, $a1
    v0 = (v0 < t7) ? 1 : 0;                                     // 0x001250b8: slt $v0, $v0, $t7
    t3 = t3 + v0;                                               // 0x001250bc: addu $t3, $t3, $v0
label_0x1250c0:
    /* multiply: a3 * a1 -> hi:lo */                            // 0x001250c0: mult $ac2, $a3, $a1
    a2 = 2;                                                     // 0x001250c4: addiu $a2, $zero, 2
    /* beqzl $t1, 0x1250d0 */                                   // 0x001250c8: beqzl $t1, 0x1250d0
    /* break (trap) */                                          // 0x001250cc: break 0, 7
    t4 = v0 + t4;                                               // 0x001250d0: addu $t4, $v0, $t4
    /* divide: t4 / t1 -> hi:lo */                              // 0x001250d4: div $zero, $t4, $t1
    /* mflo $a1 */                                              // 0x001250d8
    v0 = (a1 < t2) ? 1 : 0;                                     // 0x001250dc: slt $v0, $a1, $t2
    if (v0 != 0) t2 = a1;                                       // 0x001250e0: movn $t2, $a1, $v0
    v1 = (t5 < t2) ? 1 : 0;                                     // 0x001250e4: slt $v1, $t5, $t2
    if (v1 != 0) t2 = t5;                                       // 0x001250e8: movn $t2, $t5, $v1
    v0 = (t3 < t2) ? 1 : 0;                                     // 0x001250ec: slt $v0, $t3, $t2
    if (t6 != a2) goto label_0x125108;                          // 0x001250f0: bne $t6, $a2, 0x125108
    if (v0 != 0) t2 = t3;                                       // 0x001250f4: movn $t2, $t3, $v0
    goto label_0x124fd8;                                        // 0x00125100: j 0x124fd8
    sp = sp + 0x10;                                             // 0x00125104: addiu $sp, $sp, 0x10
label_0x125108:
    goto label_0x124f90;                                        // 0x00125110: j 0x124f90
    sp = sp + 0x10;                                             // 0x00125114: addiu $sp, $sp, 0x10
    if (a2 <= 0) goto label_0x12513c;                           // 0x00125118: blez $a2, 0x12513c
    /* nop */                                                   // 0x0012511c: nop 
label_0x125120:
    v0 = *(uint16_t*)(a1);                                      // 0x00125120: lhu $v0, 0($a1)
    a1 = a1 + 2;                                                // 0x00125124: addiu $a1, $a1, 2
    a2 = a2 + -1;                                               // 0x00125128: addiu $a2, $a2, -1
    *(uint16_t*)(a0) = v0;                                      // 0x0012512c: sh $v0, 0($a0)
    /* nop */                                                   // 0x00125130: nop 
    if (a2 > 0) goto label_0x125120;                            // 0x00125134: bgtz $a2, 0x125120
    a0 = a0 + 2;                                                // 0x00125138: addiu $a0, $a0, 2
label_0x12513c:
    return;                                                     // 0x0012513c: jr $ra
    /* nop */                                                   // 0x00125140: nop 
}