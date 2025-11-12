void func_0017cc20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017cc20: addiu $sp, $sp, -0x30
    func_0017cd88();  // 0x17cd38                                // 0x0017cc48: jal 0x17cd38
    if (s2 == 0) goto label_0x17cd14;                           // 0x0017cc5c: beqz $s2, 0x17cd14
    func_0017ce38();  // 0x17ce28                                // 0x0017cc64: jal 0x17ce28
    /* nop */                                                   // 0x0017cc68: nop 
    v1 = 1;                                                     // 0x0017cc6c: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x17cc98;                          // 0x0017cc78: beq $v0, $v1, 0x17cc98
    a2 = 0x23 << 16;                                            // 0x0017cc80: lui $a2, 0x23
    func_0017cec8();  // 0x17ce88                                // 0x0017cc88: jal 0x17ce88
    a2 = &str_00229c48;  // "E201281: SfxZHn: can't create."    // 0x0017cc8c: addiu $a2, $a2, -0x63b8
    goto label_0x17cd14;                                        // 0x0017cc90: b 0x17cd14
label_0x17cc98:
    func_0017ce28();  // 0x17cd88                                // 0x0017cc98: jal 0x17cd88
    func_0017d460();  // 0x17d408                                // 0x0017cca0: jal 0x17d408
    /* nop */                                                   // 0x0017cca4: nop 
    a2 = 0x23 << 16;                                            // 0x0017cca8: lui $a2, 0x23
    a2 = &str_00229c78;  // "E202011: SfxAHn: can't create."    // 0x0017ccb0: addiu $a2, $a2, -0x6388
    if (v0 == 0) goto label_0x17cce4;                           // 0x0017ccb4: beqz $v0, 0x17cce4
    func_0017a398();  // 0x17a340                                // 0x0017ccbc: jal 0x17a340
    *(uint32_t*)((s2) + 0x24) = v0;                             // 0x0017ccc0: sw $v0, 0x24($s2)
    a2 = 0x23 << 16;                                            // 0x0017ccc4: lui $a2, 0x23
    v0 = 0x21 << 16;                                            // 0x0017cccc: lui $v0, 0x21
    t0 = v0 + 0x58a0;                                           // 0x0017ccd0: addiu $t0, $v0, 0x58a0
    a2 = &str_00229c98;  // "SFXINFE"                           // 0x0017ccd4: addiu $a2, $a2, -0x6368
    if (a3 != 0) goto label_0x17cd00;                           // 0x0017ccdc: bnez $a3, 0x17cd00
label_0x17cce4:
    func_0017cec8();  // 0x17ce88                                // 0x0017cce4: jal 0x17ce88
    /* nop */                                                   // 0x0017cce8: nop 
    func_0017ce88();  // 0x17ce38                                // 0x0017ccec: jal 0x17ce38
    goto label_0x17cd14;                                        // 0x0017ccf4: b 0x17cd14
    /* nop */                                                   // 0x0017ccfc: nop 
label_0x17cd00:
    v1 = g_002158a0;  // Global at 0x002158a0                   // 0x0017cd00: lw $v1, 0($t0)
    *(uint32_t*)((s2) + 0x30) = a3;                             // 0x0017cd08: sw $a3, 0x30($s2)
    v1 = v1 + 1;                                                // 0x0017cd0c: addiu $v1, $v1, 1
    g_002158a0 = v1;  // Global at 0x002158a0                   // 0x0017cd10: sw $v1, 0($t0)
label_0x17cd14:
    return;                                                     // 0x0017cd2c: jr $ra
    sp = sp + 0x30;                                             // 0x0017cd30: addiu $sp, $sp, 0x30
}