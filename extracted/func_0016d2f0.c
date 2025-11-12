void func_0016d2f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016d2f0: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 0x1b38);                            // 0x0016d2f8: lw $a1, 0x1b38($a0)
    return func_001679e0();  // Tail call                        // 0x0016d300: j 0x1679c0
    sp = sp + 0x10;                                             // 0x0016d304: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0016d308: addiu $sp, $sp, -0x10
    v0 = -3;                                                    // 0x0016d310: addiu $v0, $zero, -3
    if (v1 == v0) goto label_0x16d370;                          // 0x0016d318: beq $v1, $v0, 0x16d370
    v0 = ((unsigned)v1 < (unsigned)-2) ? 1 : 0;                 // 0x0016d320: sltiu $v0, $v1, -2
    /* beqzl $v0, 0x16d340 */                                   // 0x0016d324: beqzl $v0, 0x16d340
    v0 = -2;                                                    // 0x0016d328: addiu $v0, $zero, -2
    if (v1 == 0) goto label_0x16d350;                           // 0x0016d32c: beqz $v1, 0x16d350
    goto label_0x16d388;                                        // 0x0016d334: b 0x16d388
    /* nop */                                                   // 0x0016d33c: nop 
    if (v1 == v0) goto label_0x16d358;                          // 0x0016d340: beq $v1, $v0, 0x16d358
    goto label_0x16d388;                                        // 0x0016d348: b 0x16d388
label_0x16d350:
    goto label_0x16d398;                                        // 0x0016d350: b 0x16d398
label_0x16d358:
    if (a2 > 0) goto label_0x16d398;                            // 0x0016d358: bgtz $a2, 0x16d398
    return func_00169940();  // Tail call                        // 0x0016d364: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016d368: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016d36c: nop 
label_0x16d370:
    if (a2 > 0) goto label_0x16d398;                            // 0x0016d370: bgtz $a2, 0x16d398
    return func_00169940();  // Tail call                        // 0x0016d37c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016d380: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016d384: nop 
label_0x16d388:
    return func_00169940();  // Tail call                        // 0x0016d38c: j 0x1698d0
    sp = sp + 0x10;                                             // 0x0016d390: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016d394: nop 
label_0x16d398:
    return;                                                     // 0x0016d39c: jr $ra
    sp = sp + 0x10;                                             // 0x0016d3a0: addiu $sp, $sp, 0x10
}