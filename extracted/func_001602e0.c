void func_001602e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001602e0: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x001602e4: addiu $v0, $zero, 1
    if (a1 != v0) goto label_0x160308;                          // 0x001602ec: bne $a1, $v0, 0x160308
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x001602f0: lw $a0, 0x40($a0)
    a1 = 4;                                                     // 0x001602f8: addiu $a1, $zero, 4
    a2 = 1;                                                     // 0x001602fc: addiu $a2, $zero, 1
    return func_0016bc40();  // Tail call                        // 0x00160300: j 0x16bb88
    sp = sp + 0x10;                                             // 0x00160304: addiu $sp, $sp, 0x10
label_0x160308:
    a1 = 4;                                                     // 0x0016030c: addiu $a1, $zero, 4
    return func_0016bc40();  // Tail call                        // 0x00160314: j 0x16bb88
    sp = sp + 0x10;                                             // 0x00160318: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016031c: nop 
    sp = sp + -0x10;                                            // 0x00160320: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x00160324: addiu $v0, $zero, 1
    if (a1 != v0) goto label_0x160348;                          // 0x0016032c: bne $a1, $v0, 0x160348
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x00160330: lw $a0, 0x40($a0)
    a1 = 0x27;                                                  // 0x00160338: addiu $a1, $zero, 0x27
    a2 = 1;                                                     // 0x0016033c: addiu $a2, $zero, 1
    return func_001750b0();  // Tail call                        // 0x00160340: j 0x174ff8
    sp = sp + 0x10;                                             // 0x00160344: addiu $sp, $sp, 0x10
label_0x160348:
    a1 = 0x27;                                                  // 0x0016034c: addiu $a1, $zero, 0x27
    return func_001750b0();  // Tail call                        // 0x00160354: j 0x174ff8
    sp = sp + 0x10;                                             // 0x00160358: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016035c: nop 
    sp = sp + -0x10;                                            // 0x00160360: addiu $sp, $sp, -0x10
    a1 = 0x24;                                                  // 0x0016036c: addiu $a1, $zero, 0x24
    if (a0 == 0) goto label_0x160388;                           // 0x00160370: beqz $a0, 0x160388
    v0 = *(int32_t*)((a0) + 0x40);                              // 0x00160374: lw $v0, 0x40($a0)
    return func_001750b0();  // Tail call                        // 0x00160380: j 0x174ff8
    sp = sp + 0x10;                                             // 0x00160384: addiu $sp, $sp, 0x10
label_0x160388:
    return;                                                     // 0x0016038c: jr $ra
    sp = sp + 0x10;                                             // 0x00160390: addiu $sp, $sp, 0x10
}