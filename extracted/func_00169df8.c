void func_00169df8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00169df8: addiu $sp, $sp, -0x10
    goto label_0x169e10;                                        // 0x00169e04: j 0x169e10
    sp = sp + 0x10;                                             // 0x00169e08: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00169e0c: nop 
label_0x169e10:
    sp = sp + -0x20;                                            // 0x00169e10: addiu $sp, $sp, -0x20
    func_0016ad00();  // 16ad00                                // 0x00169e20: jal 0x16ad00
    v1 = 1;                                                     // 0x00169e28: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x169e40;                          // 0x00169e2c: bne $v0, $v1, 0x169e40
    goto label_0x169e68;                                        // 0x00169e34: b 0x169e68
    /* nop */                                                   // 0x00169e3c: nop 
label_0x169e40:
    func_00169e80();  // 169e80                                // 0x00169e40: jal 0x169e80
    /* nop */                                                   // 0x00169e44: nop 
    v1 = 2;                                                     // 0x00169e48: addiu $v1, $zero, 2
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x00169e50: lw $v0, 0x48($s0)
    if (v0 != v1) goto label_0x169e64;                          // 0x00169e54: bne $v0, $v1, 0x169e64
    func_0016af28();  // 16af28                                // 0x00169e5c: jal 0x16af28
    /* nop */                                                   // 0x00169e60: nop 
label_0x169e64:
label_0x169e68:
    return;                                                     // 0x00169e74: jr $ra
    sp = sp + 0x20;                                             // 0x00169e78: addiu $sp, $sp, 0x20
}