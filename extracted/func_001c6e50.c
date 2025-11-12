void func_001c6e50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c6e50: addiu $sp, $sp, -0x20
    v0 = 1 << 16;                                               // 0x001c6e54: lui $v0, 1
    a1 = v0 | 0x50;                                             // 0x001c6e5c: ori $a1, $v0, 0x50
    a2 = *(int32_t*)((a0) + 0x20);                              // 0x001c6e64: lw $a2, 0x20($a0)
    s0 = *(int32_t*)((a0) + 0xec);                              // 0x001c6e68: lw $s0, 0xec($a0)
    func_001c7310();  // 0x1c7230                                // 0x001c6e6c: jal 0x1c7230
    if (v0 >= 0) goto label_0x1c6e84;                           // 0x001c6e74: bgez $v0, 0x1c6e84
    goto label_0x1c6e90;                                        // 0x001c6e7c: b 0x1c6e90
    v0 = -1;                                                    // 0x001c6e80: addiu $v0, $zero, -1
label_0x1c6e84:
    func_001c6dc0();  // 0x1c6d20                                // 0x001c6e84: jal 0x1c6d20
    /* nop */                                                   // 0x001c6e88: nop 
label_0x1c6e90:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c6e94: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c6e98: jr $ra
    sp = sp + 0x20;                                             // 0x001c6e9c: addiu $sp, $sp, 0x20
}