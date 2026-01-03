void func_001ca510() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ca510: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ca518: addu.qb $zero, $sp, $s1
    if (s0 < 0) goto label_0x1ca538;                            // 0x001ca524: bltz $s0, 0x1ca538
    v0 = (s0 < 3) ? 1 : 0;                                      // 0x001ca528: slti $v0, $s0, 3
    if (v0 != 0) goto label_0x1ca540;                           // 0x001ca52c: bnez $v0, 0x1ca540
    /* nop */                                                   // 0x001ca530: nop 
    /* nop */                                                   // 0x001ca534: nop 
label_0x1ca538:
    goto label_0x1ca5d0;                                        // 0x001ca538: b 0x1ca5d0
    v0 = -1;                                                    // 0x001ca53c: addiu $v0, $zero, -1
label_0x1ca540:
    func_001ca260();  // 1ca260                                // 0x001ca540: jal 0x1ca260
    /* nop */                                                   // 0x001ca544: nop 
    v0 = 0x31 << 16;                                            // 0x001ca548: lui $v0, 0x31
    s0 = s0 << 2;                                               // 0x001ca54c: sll $s0, $s0, 2
    v0 = v0 + 0x76a0;                                           // 0x001ca550: addiu $v0, $v0, 0x76a0
    s1 = v0 + s0;                                               // 0x001ca554: addu $s1, $v0, $s0
    v1 = *(int32_t*)(s1);                                       // 0x001ca558: lw $v1, 0($s1)
    v0 = -2;                                                    // 0x001ca55c: addiu $v0, $zero, -2
    if (v1 != v0) goto label_0x1ca588;                          // 0x001ca560: bne $v1, $v0, 0x1ca588
    v0 = 0x31 << 16;                                            // 0x001ca564: lui $v0, 0x31
    v1 = 1;                                                     // 0x001ca568: addiu $v1, $zero, 1
    v0 = v0 + 0x7680;                                           // 0x001ca56c: addiu $v0, $v0, 0x7680
    v0 = v0 + s0;                                               // 0x001ca570: addu $v0, $v0, $s0
    func_001ca270();  // 1ca270                                // 0x001ca574: jal 0x1ca270
    g_00317680 = v1;  // Global at 0x00317680                   // 0x001ca578: sw $v1, 0($v0)
    goto label_0x1ca5d0;                                        // 0x001ca57c: b 0x1ca5d0
    /* nop */                                                   // 0x001ca584: nop 
label_0x1ca588:
    func_001ca270();  // 1ca270                                // 0x001ca588: jal 0x1ca270
    /* nop */                                                   // 0x001ca58c: nop 
    v0 = *(int32_t*)(s1);                                       // 0x001ca590: lw $v0, 0($s1)
    if (v0 >= 0) goto label_0x1ca5a8;                           // 0x001ca594: bgez $v0, 0x1ca5a8
    v0 = -1;                                                    // 0x001ca598: addiu $v0, $zero, -1
    goto label_0x1ca5d0;                                        // 0x001ca59c: b 0x1ca5d0
    /* nop */                                                   // 0x001ca5a0: nop 
    /* nop */                                                   // 0x001ca5a4: nop 
label_0x1ca5a8:
    func_001ca260();  // 1ca260                                // 0x001ca5a8: jal 0x1ca260
    /* nop */                                                   // 0x001ca5ac: nop 
    v0 = 0x31 << 16;                                            // 0x001ca5b0: lui $v0, 0x31
    v1 = 1;                                                     // 0x001ca5b4: addiu $v1, $zero, 1
    v0 = v0 + 0x7680;                                           // 0x001ca5b8: addiu $v0, $v0, 0x7680
    v0 = v0 + s0;                                               // 0x001ca5bc: addu $v0, $v0, $s0
    func_001ca270();  // 1ca270                                // 0x001ca5c0: jal 0x1ca270
    g_00317680 = v1;  // Global at 0x00317680                   // 0x001ca5c4: sw $v1, 0($v0)
    /* nop */                                                   // 0x001ca5cc: nop 
label_0x1ca5d0:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ca5d4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ca5d8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ca5dc: jr $ra
    sp = sp + 0x30;                                             // 0x001ca5e0: addiu $sp, $sp, 0x30
}