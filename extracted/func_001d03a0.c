void func_001d03a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001d03a0: addiu $sp, $sp, -0x60
    a0 = sp + 0x40;                                             // 0x001d03ac: addiu $a0, $sp, 0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d03b8: addu.qb $zero, $sp, $s1
    func_001ce710();  // 0x1ce700                                // 0x001d03c0: jal 0x1ce700
    func_001ce720();  // 0x1ce710                                // 0x001d03c8: jal 0x1ce710
    a0 = sp + 0x40;                                             // 0x001d03cc: addiu $a0, $sp, 0x40
    at = (s0 < 2) ? 1 : 0;                                      // 0x001d03d4: slti $at, $s0, 2
    if (at == 0) goto label_0x1d03e8;                           // 0x001d03d8: beqz $at, 0x1d03e8
    a0 = sp + 0x40;                                             // 0x001d03dc: addiu $a0, $sp, 0x40
    goto label_0x1d0470;                                        // 0x001d03e0: b 0x1d0470
label_0x1d03e8:
    func_001ce990();  // 0x1ce8f0                                // 0x001d03e8: jal 0x1ce8f0
    /* nop */                                                   // 0x001d03ec: nop 
    s1 = v0 & 0xff;                                             // 0x001d03f0: andi $s1, $v0, 0xff
    func_001ce990();  // 0x1ce8f0                                // 0x001d03f4: jal 0x1ce8f0
    a0 = sp + 0x40;                                             // 0x001d03f8: addiu $a0, $sp, 0x40
    at = (s1 < 2) ? 1 : 0;                                      // 0x001d03fc: slti $at, $s1, 2
    if (at == 0) goto label_0x1d0410;                           // 0x001d0400: beqz $at, 0x1d0410
    v0 = 0x28;                                                  // 0x001d0404: addiu $v0, $zero, 0x28
    goto label_0x1d0470;                                        // 0x001d0408: b 0x1d0470
    v0 = -1;                                                    // 0x001d040c: addiu $v0, $zero, -1
label_0x1d0410:
    if (s1 == v0) goto label_0x1d0438;                          // 0x001d0410: beq $s1, $v0, 0x1d0438
    at = (s0 < 6) ? 1 : 0;                                      // 0x001d0414: slti $at, $s0, 6
    at = (s0 < s1) ? 1 : 0;                                     // 0x001d0418: slt $at, $s0, $s1
    if (at == 0) goto label_0x1d042c;                           // 0x001d041c: beqz $at, 0x1d042c
    *(uint32_t*)(s2) = s1;                                      // 0x001d0420: sw $s1, 0($s2)
    goto label_0x1d0430;                                        // 0x001d0424: b 0x1d0430
label_0x1d042c:
    v0 = 2;                                                     // 0x001d042c: addiu $v0, $zero, 2
label_0x1d0430:
    goto label_0x1d0474;                                        // 0x001d0430: b 0x1d0474
label_0x1d0438:
    if (at == 0) goto label_0x1d0448;                           // 0x001d0438: beqz $at, 0x1d0448
    a0 = sp + 0x40;                                             // 0x001d043c: addiu $a0, $sp, 0x40
    goto label_0x1d0470;                                        // 0x001d0440: b 0x1d0470
label_0x1d0448:
    thunk_func_001cfeb0();  // 0x1ce8e0                          // 0x001d0448: jal 0x1ce8e0
    /* nop */                                                   // 0x001d044c: nop 
    thunk_func_001cfeb0();  // 0x1ce8e0                          // 0x001d0450: jal 0x1ce8e0
    a0 = sp + 0x40;                                             // 0x001d0454: addiu $a0, $sp, 0x40
    v0 = v0 & 0xffff;                                           // 0x001d0458: andi $v0, $v0, 0xffff
    v0 = v0 + 0xc;                                              // 0x001d045c: addiu $v0, $v0, 0xc
    *(uint32_t*)(s2) = v0;                                      // 0x001d0460: sw $v0, 0($s2)
    v0 = *(int32_t*)(s2);                                       // 0x001d0464: lw $v0, 0($s2)
    v0 = (s0 < v0) ? 1 : 0;                                     // 0x001d0468: slt $v0, $s0, $v0
    v0 = v0 ^ 1;                                                // 0x001d046c: xori $v0, $v0, 1
label_0x1d0470:
label_0x1d0474:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d0474: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d0478: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d047c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d0480: jr $ra
    sp = sp + 0x60;                                             // 0x001d0484: addiu $sp, $sp, 0x60
}