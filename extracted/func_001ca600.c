void func_001ca600() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ca600: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001ca604: addiu $v0, $zero, 1
    if (a1 == v0) goto label_0x1ca628;                          // 0x001ca60c: beq $a1, $v0, 0x1ca628
    v1 = 0x16;                                                  // 0x001ca614: addiu $v1, $zero, 0x16
    at = 0x31 << 16;                                            // 0x001ca618: lui $at, 0x31
    v0 = -1;                                                    // 0x001ca61c: addiu $v0, $zero, -1
    goto label_0x1ca6a0;                                        // 0x001ca620: b 0x1ca6a0
    g_00317698 = v1;  // Global at 0x00317698                   // 0x001ca624: sw $v1, 0x7698($at)
label_0x1ca628:
    func_001ca260();  // 1ca260                                // 0x001ca628: jal 0x1ca260
    /* nop */                                                   // 0x001ca62c: nop 
    a0 = 0x31 << 16;                                            // 0x001ca630: lui $a0, 0x31
    a0 = a0 + 0x76a0;                                           // 0x001ca638: addiu $a0, $a0, 0x76a0
    v1 = -1;                                                    // 0x001ca63c: addiu $v1, $zero, -1
label_0x1ca640:
    v0 = g_003176a0;  // Global at 0x003176a0                   // 0x001ca640: lw $v0, 0($a0)
    if (v0 == v1) goto label_0x1ca660;                          // 0x001ca644: beq $v0, $v1, 0x1ca660
    /* nop */                                                   // 0x001ca648: nop 
    s0 = s0 + 1;                                                // 0x001ca64c: addiu $s0, $s0, 1
    v0 = (s0 < 3) ? 1 : 0;                                      // 0x001ca650: slti $v0, $s0, 3
    if (v0 != 0) goto label_0x1ca640;                           // 0x001ca654: bnez $v0, 0x1ca640
    a0 = a0 + 4;                                                // 0x001ca658: addiu $a0, $a0, 4
    /* nop */                                                   // 0x001ca65c: nop 
label_0x1ca660:
    v0 = 3;                                                     // 0x001ca660: addiu $v0, $zero, 3
    if (s0 != v0) goto label_0x1ca680;                          // 0x001ca664: bne $s0, $v0, 0x1ca680
    v0 = 0xc;                                                   // 0x001ca668: addiu $v0, $zero, 0xc
    at = 0x31 << 16;                                            // 0x001ca66c: lui $at, 0x31
    func_001ca270();  // 1ca270                                // 0x001ca670: jal 0x1ca270
    g_00317698 = v0;  // Global at 0x00317698                   // 0x001ca674: sw $v0, 0x7698($at)
    goto label_0x1ca6a0;                                        // 0x001ca678: b 0x1ca6a0
    v0 = -1;                                                    // 0x001ca67c: addiu $v0, $zero, -1
label_0x1ca680:
    v0 = 0x31 << 16;                                            // 0x001ca680: lui $v0, 0x31
    v1 = s0 << 2;                                               // 0x001ca684: sll $v1, $s0, 2
    v0 = v0 + 0x76a0;                                           // 0x001ca688: addiu $v0, $v0, 0x76a0
    a0 = -2;                                                    // 0x001ca68c: addiu $a0, $zero, -2
    v0 = v0 + v1;                                               // 0x001ca690: addu $v0, $v0, $v1
    func_001ca270();  // 1ca270                                // 0x001ca694: jal 0x1ca270
    g_003176a0 = a0;  // Global at 0x003176a0                   // 0x001ca698: sw $a0, 0($v0)
label_0x1ca6a0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ca6a4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ca6a8: jr $ra
    sp = sp + 0x20;                                             // 0x001ca6ac: addiu $sp, $sp, 0x20
}