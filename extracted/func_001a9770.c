void func_001a9770() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a9770: addiu $sp, $sp, -0x20
    if (a1 != 0) goto label_0x1a9788;                           // 0x001a9778: bnez $a1, 0x1a9788
    goto label_0x1a978c;                                        // 0x001a9780: b 0x1a978c
    s0 = *(int32_t*)((gp) + -0x63ec);                           // 0x001a9784: lw $s0, -0x63ec($gp)
label_0x1a9788:
    s0 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9788: lw $s0, -0x63e8($gp)
label_0x1a978c:
    func_001a94b0();  // 1a94b0                                // 0x001a9790: jal 0x1a94b0
    v1 = -1;                                                    // 0x001a9798: addiu $v1, $zero, -1
    if (v0 != v1) goto label_0x1a97ac;                          // 0x001a979c: bne $v0, $v1, 0x1a97ac
    /* nop */                                                   // 0x001a97a0: nop 
    goto label_0x1a97b8;                                        // 0x001a97a4: b 0x1a97b8
label_0x1a97ac:
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x001a97ac: lw $a0, 0x20($s0)
    func_00128f00();  // 128f00                                // 0x001a97b0: jal 0x128f00
label_0x1a97b8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a97bc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a97c0: jr $ra
    sp = sp + 0x20;                                             // 0x001a97c4: addiu $sp, $sp, 0x20
}