void func_00134a50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00134a50: addiu $sp, $sp, -0x10
    a0 = 0x20 << 16;                                            // 0x00134a54: lui $a0, 0x20
    a0 = a0 + 0x1db8;                                           // 0x00134a60: addiu $a0, $a0, 0x1db8
    a2 = 0x3c0;                                                 // 0x00134a64: addiu $a2, $zero, 0x3c0
    return func_00107d30();  // Tail call                        // 0x00134a6c: j 0x107c70
    sp = sp + 0x10;                                             // 0x00134a70: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00134a74: nop 
    sp = sp + -0x10;                                            // 0x00134a78: addiu $sp, $sp, -0x10
    a0 = 0x20 << 16;                                            // 0x00134a7c: lui $a0, 0x20
    a0 = a0 + 0x1db8;                                           // 0x00134a88: addiu $a0, $a0, 0x1db8
    a2 = 0x3c0;                                                 // 0x00134a8c: addiu $a2, $zero, 0x3c0
    return func_00107d30();  // Tail call                        // 0x00134a94: j 0x107c70
    sp = sp + 0x10;                                             // 0x00134a98: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00134a9c: nop 
    sp = sp + -0x20;                                            // 0x00134aa0: addiu $sp, $sp, -0x20
    a0 = 0x20 << 16;                                            // 0x00134aa4: lui $a0, 0x20
    v1 = a0 + 0x1db8;                                           // 0x00134ab0: addiu $v1, $a0, 0x1db8
    v0 = g_00201db8;  // Global at 0x00201db8                   // 0x00134ab8: lw $v0, 0($v1)
    if (v0 == 0) goto label_0x134aec;                           // 0x00134abc: beqz $v0, 0x134aec
    s1 = s1 + 1;                                                // 0x00134ac4: addiu $s1, $s1, 1
    v0 = (s1 < 0x10) ? 1 : 0;                                   // 0x00134ac8: slti $v0, $s1, 0x10
    if (v0 == 0) goto label_0x134aec;                           // 0x00134acc: beqz $v0, 0x134aec
    v1 = v1 + 0x3c;                                             // 0x00134ad0: addiu $v1, $v1, 0x3c
    v0 = g_00201df4;  // Global at 0x00201df4                   // 0x00134ad4: lw $v0, 0($v1)
    /* nop */                                                   // 0x00134ad8: nop 
    /* nop */                                                   // 0x00134adc: nop 
    /* nop */                                                   // 0x00134ae0: nop 
    /* bnezl $v0, 0x134ac8 */                                   // 0x00134ae4: bnezl $v0, 0x134ac8
    s1 = s1 + 1;                                                // 0x00134ae8: addiu $s1, $s1, 1
label_0x134aec:
    v1 = 0x10;                                                  // 0x00134aec: addiu $v1, $zero, 0x10
    if (s1 == v1) goto label_0x134b58;                          // 0x00134af0: beq $s1, $v1, 0x134b58
    s0 = s1 << 4;                                               // 0x00134af8: sll $s0, $s1, 4
    v0 = a0 + 0x1db8;                                           // 0x00134afc: addiu $v0, $a0, 0x1db8
    s0 = s0 - s1;                                               // 0x00134b00: subu $s0, $s0, $s1
    s0 = s0 << 2;                                               // 0x00134b08: sll $s0, $s0, 2
    a2 = 0x3c;                                                  // 0x00134b0c: addiu $a2, $zero, 0x3c
    s0 = s0 + v0;                                               // 0x00134b10: addu $s0, $s0, $v0
    func_00107c70();  // 107c70                                // 0x00134b14: jal 0x107c70
    v1 = 1;                                                     // 0x00134b1c: addiu $v1, $zero, 1
    *(uint32_t*)(s0) = v1;                                      // 0x00134b20: sw $v1, 0($s0)
    a0 = 0x1f4;                                                 // 0x00134b24: addiu $a0, $zero, 0x1f4
    *(uint32_t*)((s0) + 4) = s1;                                // 0x00134b28: sw $s1, 4($s0)
    a1 = 0 | 0xac44;                                            // 0x00134b2c: ori $a1, $zero, 0xac44
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00134b30: sw $zero, 8($s0)
    a2 = s0 + 0x30;                                             // 0x00134b34: addiu $a2, $s0, 0x30
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x00134b38: sw $zero, 0xc($s0)
    func_001261d0();  // 1261d0                                // 0x00134b3c: jal 0x1261d0
    a3 = s0 + 0x32;                                             // 0x00134b40: addiu $a3, $s0, 0x32
    a0 = s0 + 0x28;                                             // 0x00134b44: addiu $a0, $s0, 0x28
    func_00107c70();  // 107c70                                // 0x00134b4c: jal 0x107c70
    a2 = 8;                                                     // 0x00134b50: addiu $a2, $zero, 8
label_0x134b58:
    return;                                                     // 0x00134b64: jr $ra
    sp = sp + 0x20;                                             // 0x00134b68: addiu $sp, $sp, 0x20
}