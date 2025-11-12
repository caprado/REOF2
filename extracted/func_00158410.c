void func_00158410() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00158410: addiu $sp, $sp, -0x40
    s2 = s1 + a1;                                               // 0x00158424: addu $s2, $s1, $a1
    v0 = ((unsigned)s1 < (unsigned)s2) ? 1 : 0;                 // 0x00158428: sltu $v0, $s1, $s2
    if (v0 == 0) goto label_0x1584ec;                           // 0x00158444: beqz $v0, 0x1584ec
    s4 = 1;                                                     // 0x0015844c: addiu $s4, $zero, 1
    s3 = 2;                                                     // 0x00158450: addiu $s3, $zero, 2
    s6 = 3;                                                     // 0x00158454: addiu $s6, $zero, 3
    v0 = *(int8_t*)(s1);                                        // 0x00158458: lb $v0, 0($s1)
    /* nop */                                                   // 0x0015845c: nop 
    if (v1 == s4) goto label_0x158498;                          // 0x00158460: beq $v1, $s4, 0x158498
    s1 = s1 + 1;                                                // 0x00158464: addiu $s1, $s1, 1
    if (v1 == 0) goto label_0x158488;                           // 0x00158468: beqz $v1, 0x158488
    /* nop */                                                   // 0x0015846c: nop 
    if (v1 == s3) goto label_0x1584a8;                          // 0x00158470: beq $v1, $s3, 0x1584a8
    /* nop */                                                   // 0x00158474: nop 
    if (v1 == s6) goto label_0x1584c8;                          // 0x00158478: beql $v1, $s6, 0x1584c8
    s0 = s1 + -4;                                               // 0x0015847c: addiu $s0, $s1, -4
    goto label_0x1584e4;                                        // 0x00158480: b 0x1584e4
    v0 = ((unsigned)s1 < (unsigned)s2) ? 1 : 0;                 // 0x00158484: sltu $v0, $s1, $s2
label_0x158488:
    /* beqzl $v0, 0x1584e0 */                                   // 0x00158488: beqzl $v0, 0x1584e0
    v1 = 1;                                                     // 0x0015848c: addiu $v1, $zero, 1
    goto label_0x1584e4;                                        // 0x00158490: b 0x1584e4
    v0 = ((unsigned)s1 < (unsigned)s2) ? 1 : 0;                 // 0x00158494: sltu $v0, $s1, $s2
label_0x158498:
    goto label_0x1584e0;                                        // 0x0015849c: b 0x1584e0
    if (v0 != 0) v1 = 0;                                        // 0x001584a0: movn $v1, $zero, $v0
    /* nop */                                                   // 0x001584a4: nop 
label_0x1584a8:
    if (v0 != s4) goto label_0x1584b8;                          // 0x001584a8: bne $v0, $s4, 0x1584b8
    /* nop */                                                   // 0x001584ac: nop 
    goto label_0x1584e0;                                        // 0x001584b0: b 0x1584e0
    v1 = 3;                                                     // 0x001584b4: addiu $v1, $zero, 3
label_0x1584b8:
    if (v0 == 0) goto label_0x1584e4;                           // 0x001584b8: beqz $v0, 0x1584e4
    v0 = ((unsigned)s1 < (unsigned)s2) ? 1 : 0;                 // 0x001584bc: sltu $v0, $s1, $s2
    goto label_0x1584e4;                                        // 0x001584c0: b 0x1584e4
label_0x1584c8:
    func_00158310();  // 0x158278                                // 0x001584c8: jal 0x158278
    v1 = s5 & v0;                                               // 0x001584d0: and $v1, $s5, $v0
    if (v1 != 0) goto label_0x1584f0;                           // 0x001584d4: bnez $v1, 0x1584f0
label_0x1584e0:
    v0 = ((unsigned)s1 < (unsigned)s2) ? 1 : 0;                 // 0x001584e0: sltu $v0, $s1, $s2
label_0x1584e4:
    /* bnezl $v0, 0x158460 */                                   // 0x001584e4: bnezl $v0, 0x158460
    v0 = *(int8_t*)(s1);                                        // 0x001584e8: lb $v0, 0($s1)
label_0x1584ec:
label_0x1584f0:
    return;                                                     // 0x00158510: jr $ra
    sp = sp + 0x40;                                             // 0x00158514: addiu $sp, $sp, 0x40
}