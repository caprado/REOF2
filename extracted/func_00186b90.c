void func_00186b90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00186b90: addiu $sp, $sp, -0x30
    v0 = 0x28 << 16;                                            // 0x00186b94: lui $v0, 0x28
    s1 = v0 + -0x37c0;                                          // 0x00186ba4: addiu $s1, $v0, -0x37c0
    a3 = 1;                                                     // 0x00186bb4: addiu $a3, $zero, 1
    func_00187f80();  // 187f80                                // 0x00186bb8: jal 0x187f80
    if (v0 != 0) goto label_0x186bd0;                           // 0x00186bc0: bnez $v0, 0x186bd0
    a0 = 0x184;                                                 // 0x00186bc4: addiu $a0, $zero, 0x184
    goto label_0x186c90;                                        // 0x00186bc8: b 0x186c90
label_0x186bd0:
    v1 = 0x21 << 16;                                            // 0x00186bd0: lui $v1, 0x21
    v1 = v1 + 0x6018;                                           // 0x00186bd8: addiu $v1, $v1, 0x6018
    a0 = a0 + v1;                                               // 0x00186be0: addu $a0, $a0, $v1
    v0 = a0 | a1;                                               // 0x00186be4: or $v0, $a0, $a1
    v0 = v0 & 7;                                                // 0x00186be8: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x186c50;                           // 0x00186bec: beqz $v0, 0x186c50
    v0 = a1 + 0x180;                                            // 0x00186bf0: addiu $v0, $a1, 0x180
label_0x186bf4:
    a1 = a1 + 0x20;                                             // 0x00186c34: addiu $a1, $a1, 0x20
    a0 = a0 + 0x20;                                             // 0x00186c38: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00186c3c: nop 
    if (a1 != v0) goto label_0x186bf4;                          // 0x00186c40: bne $a1, $v0, 0x186bf4
    /* nop */                                                   // 0x00186c44: nop 
    goto label_0x186c84;                                        // 0x00186c48: b 0x186c84
    /* nop */                                                   // 0x00186c4c: nop 
label_0x186c50:
    a1 = a1 + 0x20;                                             // 0x00186c70: addiu $a1, $a1, 0x20
    a0 = a0 + 0x20;                                             // 0x00186c74: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00186c78: nop 
    if (a1 != v0) goto label_0x186c50;                          // 0x00186c7c: bne $a1, $v0, 0x186c50
    /* nop */                                                   // 0x00186c80: nop 
label_0x186c84:
    v0 = *(int32_t*)(a1);                                       // 0x00186c84: lw $v0, 0($a1)
    *(uint32_t*)(a0) = v0;                                      // 0x00186c88: sw $v0, 0($a0)
    v0 = 1;                                                     // 0x00186c8c: addiu $v0, $zero, 1
label_0x186c90:
    return;                                                     // 0x00186c9c: jr $ra
    sp = sp + 0x30;                                             // 0x00186ca0: addiu $sp, $sp, 0x30
}