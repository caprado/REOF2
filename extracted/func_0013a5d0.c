void func_0013a5d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0013a5d0: addiu $sp, $sp, -0x40
    if (s4 <= 0) goto label_0x13a668;                           // 0x0013a604: blez $s4, 0x13a668
    v0 = 0x20 << 16;                                            // 0x0013a60c: lui $v0, 0x20
    s5 = v0 + 0x3ed0;                                           // 0x0013a614: addiu $s5, $v0, 0x3ed0
label_0x13a618:
    v0 = g_00203edc;  // Global at 0x00203edc                   // 0x0013a618: lw $v0, 0xc($s5)
    a1 = g_00203ed8;  // Global at 0x00203ed8                   // 0x0013a620: lw $a1, 8($s5)
    /* multiply: v0 * s0 -> hi:lo */                            // 0x0013a624: mult $ac3, $v0, $s0
    a1 = a1 << 3;                                               // 0x0013a628: sll $a1, $a1, 3
    v0 = v1 + s0;                                               // 0x0013a62c: addu $v0, $v1, $s0
    s0 = s0 + 1;                                                // 0x0013a630: addiu $s0, $s0, 1
    a1 = a1 + v0;                                               // 0x0013a634: addu $a1, $a1, $v0
    func_0013a040();  // 13a040                                // 0x0013a638: jal 0x13a040
    a1 = s2 + a1;                                               // 0x0013a63c: addu $a1, $s2, $a1
    if (v0 != 0) goto label_0x13a660;                           // 0x0013a640: bnez $v0, 0x13a660
    v1 = (s0 < s4) ? 1 : 0;                                     // 0x0013a644: slt $v1, $s0, $s4
    v0 = *(int32_t*)(s1);                                       // 0x0013a648: lw $v0, 0($s1)
    *(uint32_t*)(s3) = v0;                                      // 0x0013a64c: sw $v0, 0($s3)
    v1 = *(int32_t*)((s1) + 4);                                 // 0x0013a650: lw $v1, 4($s1)
    goto label_0x13a670;                                        // 0x0013a654: b 0x13a670
    *(uint32_t*)((s3) + 4) = v1;                                // 0x0013a658: sw $v1, 4($s3)
    /* nop */                                                   // 0x0013a65c: nop 
label_0x13a660:
    if (v1 != 0) goto label_0x13a618;                           // 0x0013a660: bnez $v1, 0x13a618
    s1 = s1 + 8;                                                // 0x0013a664: addiu $s1, $s1, 8
label_0x13a668:
    *(uint32_t*)((s3) + 4) = 0;                                 // 0x0013a668: sw $zero, 4($s3)
    *(uint32_t*)(s3) = 0;                                       // 0x0013a66c: sw $zero, 0($s3)
label_0x13a670:
    return;                                                     // 0x0013a690: jr $ra
    sp = sp + 0x40;                                             // 0x0013a694: addiu $sp, $sp, 0x40
}