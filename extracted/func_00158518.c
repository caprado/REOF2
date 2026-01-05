void func_00158518() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00158518: addiu $sp, $sp, -0x40
    s2 = s0 + a2;                                               // 0x0015852c: addu $s2, $s0, $a2
    v0 = ((unsigned)s0 < (unsigned)s2) ? 1 : 0;                 // 0x00158530: sltu $v0, $s0, $s2
    if (v0 == 0) goto label_0x1585fc;                           // 0x00158550: beqz $v0, 0x1585fc
    s4 = 1;                                                     // 0x00158558: addiu $s4, $zero, 1
    s3 = 2;                                                     // 0x0015855c: addiu $s3, $zero, 2
    s6 = 3;                                                     // 0x00158560: addiu $s6, $zero, 3
    v0 = *(int8_t*)(s0);                                        // 0x00158564: lb $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00158568: addiu $s0, $s0, 1
    *(uint8_t*)(s1) = v0;                                       // 0x0015856c: sb $v0, 0($s1)
    if (v1 == s4) goto label_0x1585a8;                          // 0x00158570: beq $v1, $s4, 0x1585a8
    s1 = s1 + 1;                                                // 0x00158574: addiu $s1, $s1, 1
    if (v1 == 0) goto label_0x158598;                           // 0x00158578: beqz $v1, 0x158598
    /* nop */                                                   // 0x0015857c: nop 
    if (v1 == s3) goto label_0x1585b8;                          // 0x00158580: beq $v1, $s3, 0x1585b8
    /* nop */                                                   // 0x00158584: nop 
    if (v1 == s6) goto label_0x1585d8;                          // 0x00158588: beq $v1, $s6, 0x1585d8
    /* nop */                                                   // 0x0015858c: nop 
    goto label_0x1585f4;                                        // 0x00158590: b 0x1585f4
    v0 = ((unsigned)s0 < (unsigned)s2) ? 1 : 0;                 // 0x00158594: sltu $v0, $s0, $s2
label_0x158598:
    /* beqzl $v0, 0x1585f0 */                                   // 0x00158598: beqzl $v0, 0x1585f0
    v1 = 1;                                                     // 0x0015859c: addiu $v1, $zero, 1
    goto label_0x1585f4;                                        // 0x001585a0: b 0x1585f4
    v0 = ((unsigned)s0 < (unsigned)s2) ? 1 : 0;                 // 0x001585a4: sltu $v0, $s0, $s2
label_0x1585a8:
    goto label_0x1585f0;                                        // 0x001585ac: b 0x1585f0
    if (v0 != 0) v1 = 0;                                        // 0x001585b0: movn $v1, $zero, $v0
    /* nop */                                                   // 0x001585b4: nop 
label_0x1585b8:
    if (v0 != s4) goto label_0x1585c8;                          // 0x001585b8: bne $v0, $s4, 0x1585c8
    /* nop */                                                   // 0x001585bc: nop 
    goto label_0x1585f0;                                        // 0x001585c0: b 0x1585f0
    v1 = 3;                                                     // 0x001585c4: addiu $v1, $zero, 3
label_0x1585c8:
    if (v0 == 0) goto label_0x1585f4;                           // 0x001585c8: beqz $v0, 0x1585f4
    v0 = ((unsigned)s0 < (unsigned)s2) ? 1 : 0;                 // 0x001585cc: sltu $v0, $s0, $s2
    goto label_0x1585f4;                                        // 0x001585d0: b 0x1585f4
label_0x1585d8:
    func_00158278();  // 158278                                // 0x001585d8: jal 0x158278
    a0 = s0 + -4;                                               // 0x001585dc: addiu $a0, $s0, -4
    v1 = s5 & v0;                                               // 0x001585e0: and $v1, $s5, $v0
    if (v1 != 0) goto label_0x158600;                           // 0x001585e4: bnez $v1, 0x158600
label_0x1585f0:
    v0 = ((unsigned)s0 < (unsigned)s2) ? 1 : 0;                 // 0x001585f0: sltu $v0, $s0, $s2
label_0x1585f4:
    /* bnezl $v0, 0x158568 */                                   // 0x001585f4: bnezl $v0, 0x158568
    v0 = *(int8_t*)(s0);                                        // 0x001585f8: lb $v0, 0($s0)
label_0x1585fc:
label_0x158600:
    return;                                                     // 0x00158620: jr $ra
    sp = sp + 0x40;                                             // 0x00158624: addiu $sp, $sp, 0x40
}