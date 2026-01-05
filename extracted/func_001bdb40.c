void func_001bdb40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bdb40: addiu $sp, $sp, -0x20
    v1 = 2;                                                     // 0x001bdb44: addiu $v1, $zero, 2
    s0 = *(int32_t*)((gp) + -0x6324);                           // 0x001bdb50: lw $s0, -0x6324($gp)
    if (s0 == 0) goto label_0x1bdb94;                           // 0x001bdb54: beqz $s0, 0x1bdb94
    *(uint32_t*)((gp) + -0x632c) = v1;                          // 0x001bdb58: sw $v1, -0x632c($gp)
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x001bdb5c: lw $a0, 0x28($s0)
    if (a0 == 0) goto label_0x1bdb70;                           // 0x001bdb60: beqz $a0, 0x1bdb70
    /* nop */                                                   // 0x001bdb64: nop 
    func_001189b8();  // 1189b8                                // 0x001bdb68: jal 0x1189b8
    /* nop */                                                   // 0x001bdb6c: nop 
label_0x1bdb70:
    a0 = *(int32_t*)((s0) + 0x2c);                              // 0x001bdb70: lw $a0, 0x2c($s0)
    if (a0 == 0) goto label_0x1bdb84;                           // 0x001bdb74: beqz $a0, 0x1bdb84
    /* nop */                                                   // 0x001bdb78: nop 
    func_001189b8();  // 1189b8                                // 0x001bdb7c: jal 0x1189b8
    /* nop */                                                   // 0x001bdb80: nop 
label_0x1bdb84:
    func_001bdd80();  // 1bdd80                                // 0x001bdb84: jal 0x1bdd80
    /* nop */                                                   // 0x001bdb88: nop 
    func_001bdbb0();  // 1bdbb0                                // 0x001bdb8c: jal 0x1bdbb0
    /* nop */                                                   // 0x001bdb90: nop 
label_0x1bdb94:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bdb98: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bdb9c: jr $ra
    sp = sp + 0x20;                                             // 0x001bdba0: addiu $sp, $sp, 0x20
}