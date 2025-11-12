void func_00117ae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00117ae0: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x00117af0: jal 0x11d320
    v1 = 0x25 << 16;                                            // 0x00117af8: lui $v1, 0x25
    v1 = v1 + -0x1ec0;                                          // 0x00117afc: addiu $v1, $v1, -0x1ec0
    s0 = g_0024e168;  // Global at 0x0024e168                   // 0x00117b00: lw $s0, 0x28($v1)
    if (s0 != s1) goto label_0x117b18;                          // 0x00117b04: bne $s0, $s1, 0x117b18
    /* nop */                                                   // 0x00117b08: nop 
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00117b0c: lw $v0, 0x14($s0)
    goto label_0x117b50;                                        // 0x00117b10: b 0x117b50
    g_0024e168 = v0;  // Global at 0x0024e168                   // 0x00117b14: sw $v0, 0x28($v1)
label_0x117b18:
    if (s0 == 0) goto label_0x117b50;                           // 0x00117b18: beqz $s0, 0x117b50
    /* nop */                                                   // 0x00117b1c: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x00117b20: lw $v1, 0x14($s0)
    if (v1 == s1) goto label_0x117b4c;                          // 0x00117b24: beql $v1, $s1, 0x117b4c
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x00117b28: lw $v0, 0x14($s1)
    /* nop */                                                   // 0x00117b2c: nop 
label_0x117b30:
    if (s0 == 0) goto label_0x117b50;                           // 0x00117b34: beqz $s0, 0x117b50
    /* nop */                                                   // 0x00117b38: nop 
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00117b3c: lw $v0, 0x14($s0)
    if (v0 != s1) goto label_0x117b30;                          // 0x00117b40: bne $v0, $s1, 0x117b30
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x00117b48: lw $v0, 0x14($s1)
label_0x117b4c:
    *(uint32_t*)((s0) + 0x14) = v0;                             // 0x00117b4c: sw $v0, 0x14($s0)
label_0x117b50:
    func_0011d390();  // 0x11d378                                // 0x00117b50: jal 0x11d378
    /* nop */                                                   // 0x00117b54: nop 
    return;                                                     // 0x00117b68: jr $ra
    sp = sp + 0x30;                                             // 0x00117b6c: addiu $sp, $sp, 0x30
}