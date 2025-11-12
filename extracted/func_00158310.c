void func_00158310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00158310: addiu $sp, $sp, -0x30
    s1 = s0 - a1;                                               // 0x00158324: subu $s1, $s0, $a1
    v0 = ((unsigned)s1 < (unsigned)s0) ? 1 : 0;                 // 0x00158328: sltu $v0, $s1, $s0
    if (v0 == 0) goto label_0x1583ec;                           // 0x0015833c: beqz $v0, 0x1583ec
    s2 = 1;                                                     // 0x00158344: addiu $s2, $zero, 1
    s4 = 3;                                                     // 0x00158348: addiu $s4, $zero, 3
    s0 = s0 + -1;                                               // 0x0015834c: addiu $s0, $s0, -1
label_0x158350:
    if (v1 == s2) goto label_0x158380;                          // 0x00158350: beq $v1, $s2, 0x158380
    v0 = *(int8_t*)(s0);                                        // 0x00158354: lb $v0, 0($s0)
    /* beqzl $v1, 0x1583e0 */                                   // 0x00158358: beqzl $v1, 0x1583e0
    v1 = 1;                                                     // 0x0015835c: addiu $v1, $zero, 1
    a0 = 2;                                                     // 0x00158360: addiu $a0, $zero, 2
    if (v1 == a0) goto label_0x158390;                          // 0x00158364: beq $v1, $a0, 0x158390
    /* nop */                                                   // 0x00158368: nop 
    if (v1 == s4) goto label_0x1583b0;                          // 0x0015836c: beq $v1, $s4, 0x1583b0
    /* nop */                                                   // 0x00158370: nop 
    goto label_0x1583e4;                                        // 0x00158374: b 0x1583e4
    v0 = ((unsigned)s1 < (unsigned)s0) ? 1 : 0;                 // 0x00158378: sltu $v0, $s1, $s0
    /* nop */                                                   // 0x0015837c: nop 
label_0x158380:
    if (v0 == v1) goto label_0x1583e0;                          // 0x00158380: beql $v0, $v1, 0x1583e0
    v1 = 2;                                                     // 0x00158384: addiu $v1, $zero, 2
    goto label_0x1583e4;                                        // 0x00158388: b 0x1583e4
    v0 = ((unsigned)s1 < (unsigned)s0) ? 1 : 0;                 // 0x0015838c: sltu $v0, $s1, $s0
label_0x158390:
    if (v0 != 0) goto label_0x1583a0;                           // 0x00158390: bnez $v0, 0x1583a0
    /* nop */                                                   // 0x00158394: nop 
    goto label_0x1583e0;                                        // 0x00158398: b 0x1583e0
    v1 = 3;                                                     // 0x0015839c: addiu $v1, $zero, 3
label_0x1583a0:
    if (v0 == s2) goto label_0x1583e4;                          // 0x001583a0: beq $v0, $s2, 0x1583e4
    v0 = ((unsigned)s1 < (unsigned)s0) ? 1 : 0;                 // 0x001583a4: sltu $v0, $s1, $s0
    goto label_0x1583e4;                                        // 0x001583a8: b 0x1583e4
    v1 = 1;                                                     // 0x001583ac: addiu $v1, $zero, 1
label_0x1583b0:
    /* bnezl $v0, 0x1583d8 */                                   // 0x001583b0: bnezl $v0, 0x1583d8
    v0 = v0 ^ 1;                                                // 0x001583b4: xori $v0, $v0, 1
    func_00158310();  // 0x158278                                // 0x001583b8: jal 0x158278
    v1 = s3 & v0;                                               // 0x001583c0: and $v1, $s3, $v0
    if (v1 != 0) goto label_0x1583f0;                           // 0x001583c4: bnez $v1, 0x1583f0
    goto label_0x1583e0;                                        // 0x001583cc: b 0x1583e0
    /* nop */                                                   // 0x001583d4: nop 
    if (v0 == 0) v1 = a0;                                       // 0x001583dc: movz $v1, $a0, $v0
label_0x1583e0:
    v0 = ((unsigned)s1 < (unsigned)s0) ? 1 : 0;                 // 0x001583e0: sltu $v0, $s1, $s0
label_0x1583e4:
    if (v0 != 0) goto label_0x158350;                           // 0x001583e4: bnez $v0, 0x158350
    s0 = s0 + -1;                                               // 0x001583e8: addiu $s0, $s0, -1
label_0x1583ec:
label_0x1583f0:
    return;                                                     // 0x00158408: jr $ra
    sp = sp + 0x30;                                             // 0x0015840c: addiu $sp, $sp, 0x30
}