void func_001559f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001559f0: addiu $sp, $sp, -0x20
    v0 = 8;                                                     // 0x001559f4: addiu $v0, $zero, 8
    if (s2 != v0) goto label_0x155a28;                          // 0x00155a14: bne $s2, $v0, 0x155a28
    if (s1 != 0) goto label_0x155a28;                           // 0x00155a1c: bnez $s1, 0x155a28
    v0 = 0x15 << 16;                                            // 0x00155a20: lui $v0, 0x15
    s1 = v0 + -0x28;                                            // 0x00155a24: addiu $s1, $v0, -0x28
label_0x155a28:
    if (s0 != 0) goto label_0x155a48;                           // 0x00155a28: bnez $s0, 0x155a48
    /* nop */                                                   // 0x00155a2c: nop 
    func_00155aa0();  // 155aa0                                // 0x00155a30: jal 0x155aa0
    v0 = 0x25 << 16;                                            // 0x00155a38: lui $v0, 0x25
    goto label_0x155a7c;                                        // 0x00155a3c: b 0x155a7c
    a0 = v0 + 0x6390;                                           // 0x00155a40: addiu $a0, $v0, 0x6390
    /* nop */                                                   // 0x00155a44: nop 
label_0x155a48:
    func_00155af8();  // 155af8                                // 0x00155a48: jal 0x155af8
    a1 = 0xff03 << 16;                                          // 0x00155a50: lui $a1, 0xff03
    if (v0 == 0) goto label_0x155a78;                           // 0x00155a54: beqz $v0, 0x155a78
    a1 = a1 | 0x202;                                            // 0x00155a60: ori $a1, $a1, 0x202
    return func_00150380();  // Tail call                        // 0x00155a70: j 0x150330
    sp = sp + 0x20;                                             // 0x00155a74: addiu $sp, $sp, 0x20
label_0x155a78:
    a0 = s0 + 0x18;                                             // 0x00155a78: addiu $a0, $s0, 0x18
label_0x155a7c:
    v0 = s2 << 2;                                               // 0x00155a7c: sll $v0, $s2, 2
    v0 = v0 + a0;                                               // 0x00155a84: addu $v0, $v0, $a0
    g_00250000 = s1;  // Global at 0x00250000                   // 0x00155a8c: sw $s1, 0($v0)
    return;                                                     // 0x00155a98: jr $ra
    sp = sp + 0x20;                                             // 0x00155a9c: addiu $sp, $sp, 0x20
}