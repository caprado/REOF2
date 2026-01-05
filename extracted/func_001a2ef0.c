void func_001a2ef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001a2ef0: addiu $sp, $sp, -0x20
    func_001a31d0();  // 1a31d0                                // 0x001a2ef8: jal 0x1a31d0
    a1 = 9;                                                     // 0x001a2f04: addiu $a1, $zero, 9
    func_001a31e0();  // 1a31e0                                // 0x001a2f08: jal 0x1a31e0
    if (v0 == 0) goto label_0x1a2f20;                           // 0x001a2f10: beqz $v0, 0x1a2f20
    goto label_0x1a2f40;                                        // 0x001a2f18: b 0x1a2f40
label_0x1a2f20:
    a1 = 9;                                                     // 0x001a2f20: addiu $a1, $zero, 9
    func_001a3230();  // 1a3230                                // 0x001a2f24: jal 0x1a3230
    if (v0 != 0) goto label_0x1a2f3c;                           // 0x001a2f2c: bnez $v0, 0x1a2f3c
    /* nop */                                                   // 0x001a2f30: nop 
    goto label_0x1a2f40;                                        // 0x001a2f34: b 0x1a2f40
label_0x1a2f3c:
    v0 = *(int32_t*)((v0) + 4);                                 // 0x001a2f3c: lw $v0, 4($v0)
label_0x1a2f40:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2f44: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a2f48: jr $ra
    sp = sp + 0x20;                                             // 0x001a2f4c: addiu $sp, $sp, 0x20
}