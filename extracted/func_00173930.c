void func_00173930() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_64;
    
    sp = sp + -0x230;                                           // 0x00173930: addiu $sp, $sp, -0x230
    v0 = s0 & 7;                                                // 0x0017393c: andi $v0, $s0, 7
    if (v0 == 0) goto label_0x1739c0;                           // 0x00173958: beqz $v0, 0x1739c0
    v0 = s0 + 0x40;                                             // 0x00173960: addiu $v0, $s0, 0x40
label_0x173964:
    v1 = v1 + 0x20;                                             // 0x001739a4: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x001739a8: nop 
    /* nop */                                                   // 0x001739ac: nop 
    if (v1 != v0) goto label_0x173964;                          // 0x001739b0: bne $v1, $v0, 0x173964
    a0 = a0 + 0x20;                                             // 0x001739b4: addiu $a0, $a0, 0x20
    goto label_0x1739f8;                                        // 0x001739b8: b 0x1739f8
    /* nop */                                                   // 0x001739bc: nop 
label_0x1739c0:
    v0 = s0 + 0x40;                                             // 0x001739c0: addiu $v0, $s0, 0x40
label_0x1739c4:
    v1 = v1 + 0x20;                                             // 0x001739e4: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x001739e8: nop 
    /* nop */                                                   // 0x001739ec: nop 
    if (v1 != v0) goto label_0x1739c4;                          // 0x001739f0: bne $v1, $v0, 0x1739c4
    a0 = a0 + 0x20;                                             // 0x001739f4: addiu $a0, $a0, 0x20
label_0x1739f8:
    v0 = *(int32_t*)(v1);                                       // 0x001739f8: lw $v0, 0($v1)
    *(uint32_t*)(a0) = v0;                                      // 0x001739fc: sw $v0, 0($a0)
    s2 = *(int32_t*)((s0) + 0x9c0);                             // 0x00173a00: lw $s2, 0x9c0($s0)
    if (s2 == 0) goto label_0x173a1c;                           // 0x00173a04: beqz $s2, 0x173a1c
    /* nop */                                                   // 0x00173a08: nop 
    func_00173af8();  // 173af8                                // 0x00173a10: jal 0x173af8
    a1 = sp + 0x50;                                             // 0x00173a14: addiu $a1, $sp, 0x50
    s3 = local_64;                                              // 0x00173a18: lw $s3, 0x64($sp)
label_0x173a1c:
    func_00168c38();  // 168c38                                // 0x00173a1c: jal 0x168c38
    a0 = s0 + 0x78;                                             // 0x00173a20: addiu $a0, $s0, 0x78
    func_001666a0();  // 1666a0                                // 0x00173a24: jal 0x1666a0
    func_00173708();  // 173708                                // 0x00173a2c: jal 0x173708
    /* bnezl $v0, 0x173ae0 */                                   // 0x00173a34: bnezl $v0, 0x173ae0
    s1 = sp + 0x70;                                             // 0x00173a3c: addiu $s1, $sp, 0x70
    a1 = s0 + 0xb30;                                            // 0x00173a40: addiu $a1, $s0, 0xb30
    a2 = 0x190;                                                 // 0x00173a44: addiu $a2, $zero, 0x190
    func_00155b20();  // 155b20                                // 0x00173a48: jal 0x155b20
    func_00173270();  // 173270                                // 0x00173a54: jal 0x173270
    if (s0 != 0) goto label_0x173a80;                           // 0x00173a60: bnez $s0, 0x173a80
    a0 = s0 + 0x9a0;                                            // 0x00173a64: addiu $a0, $s0, 0x9a0
    a1 = 0xff00 << 16;                                          // 0x00173a68: lui $a1, 0xff00
    func_001698d0();  // 1698d0                                // 0x00173a70: jal 0x1698d0
    a1 = a1 | 0x202;                                            // 0x00173a74: ori $a1, $a1, 0x202
    goto label_0x173ae0;                                        // 0x00173a78: b 0x173ae0
label_0x173a80:
    func_00155b20();  // 155b20                                // 0x00173a84: jal 0x155b20
    a2 = 0x190;                                                 // 0x00173a88: addiu $a2, $zero, 0x190
    a0 = s0 + 0xb30;                                            // 0x00173a8c: addiu $a0, $s0, 0xb30
    func_00155b20();  // 155b20                                // 0x00173a94: jal 0x155b20
    a2 = 0x190;                                                 // 0x00173a98: addiu $a2, $zero, 0x190
    if (s2 == 0) goto label_0x173adc;                           // 0x00173a9c: beqz $s2, 0x173adc
    func_00173af8();  // 173af8                                // 0x00173aa8: jal 0x173af8
    a1 = sp + 0x50;                                             // 0x00173aac: addiu $a1, $sp, 0x50
    /* bnezl $v0, 0x173ae0 */                                   // 0x00173ab0: bnezl $v0, 0x173ae0
    a2 = local_64;                                              // 0x00173ab8: lw $a2, 0x64($sp)
    func_00173b68();  // 173b68                                // 0x00173ac0: jal 0x173b68
    /* bnezl $v0, 0x173ae0 */                                   // 0x00173ac8: bnezl $v0, 0x173ae0
    func_00173be8();  // 173be8                                // 0x00173ad0: jal 0x173be8
label_0x173adc:
label_0x173ae0:
    return;                                                     // 0x00173af0: jr $ra
    sp = sp + 0x230;                                            // 0x00173af4: addiu $sp, $sp, 0x230
}