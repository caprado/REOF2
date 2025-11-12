void func_001a4970() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a4970: addiu $sp, $sp, -0x10
    v0 = 0x4d42;                                                // 0x001a4974: addiu $v0, $zero, 0x4d42
    v1 = str_0022a6b0;  // "Setup HOST file system.\n"          // 0x001a497c: lhu $v1, 0($a0)
    if (v1 == v0) goto label_0x1a499c;                          // 0x001a4980: beq $v1, $v0, 0x1a499c
    /* nop */                                                   // 0x001a4984: nop 
    a0 = 0x23 << 16;                                            // 0x001a4988: lui $a0, 0x23
    func_001a5720();  // 0x1a56b0                                // 0x001a498c: jal 0x1a56b0
    a0 = &str_0022a6b0;  // "Setup HOST file system.\n"         // 0x001a4990: addiu $a0, $a0, -0x5950
    goto label_0x1a49b0;                                        // 0x001a4994: b 0x1a49b0
label_0x1a499c:
    v0 = g_0022a6bc;  // Global at 0x0022a6bc                   // 0x001a499c: lhu $v0, 0xc($a0)
    v1 = g_0022a6ba;  // Global at 0x0022a6ba                   // 0x001a49a0: lhu $v1, 0xa($a0)
    v0 = v0 << 0x10;                                            // 0x001a49a4: sll $v0, $v0, 0x10
    v0 = v1 | v0;                                               // 0x001a49a8: or $v0, $v1, $v0
    v0 = a0 + v0;                                               // 0x001a49ac: addu $v0, $a0, $v0
label_0x1a49b0:
    return;                                                     // 0x001a49b4: jr $ra
    sp = sp + 0x10;                                             // 0x001a49b8: addiu $sp, $sp, 0x10
}